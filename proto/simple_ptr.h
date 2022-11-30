//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: simple.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

#pragma once

#ifdef isset
#undef isset
#endif

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe.h"

namespace simple {
using namespace FBE;
} // namespace simple

namespace FBE {
using namespace ::simple;
} // namespace FBE

#include "fbe_ptr.h"

namespace simple {

struct Simple : FBE::Base
{
    stdb::memory::string info;
    ::simple::Simple* simple;
    int32_t depth;
    stdb::container::stdb_vector<::simple::Simple*> spv;
    stdb::container::stdb_vector<::simple::Simple> sv;
    std::map<int32_t, ::simple::Simple*> spm;
    std::map<int32_t, ::simple::Simple> sm;

    size_t fbe_type() const noexcept { return 1; }

    Simple();
    Simple(const stdb::memory::string& arg_info, std::unique_ptr<::simple::Simple> arg_simple, int32_t arg_depth, stdb::container::stdb_vector<std::unique_ptr<::simple::Simple>> arg_spv, stdb::container::stdb_vector<::simple::Simple> arg_sv, std::map<int32_t, std::unique_ptr<::simple::Simple>> arg_spm, std::map<int32_t, ::simple::Simple> arg_sm);
    Simple(const Simple& other) = default;
    Simple(Simple&& other) noexcept;
    ~Simple() override;

    Simple& operator=(const Simple& other) = default;
    Simple& operator=(Simple&& other) noexcept;

    bool operator==(const Simple& other) const noexcept;
    bool operator!=(const Simple& other) const noexcept { return !operator==(other); }
    bool operator<(const Simple& other) const noexcept;
    bool operator<=(const Simple& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Simple& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Simple& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, const Simple& value);

    void swap(Simple& other) noexcept;
    friend void swap(Simple& value1, Simple& value2) noexcept { value1.swap(value2); }
};

} // namespace simple

template<>
struct std::hash<simple::Simple>
{
    typedef simple::Simple argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace simple {

} // namespace simple
