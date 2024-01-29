//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: sa.fbe
// FBE version: 1.11.0.0
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

#include "fbe_custom_models.h"

#include "sa_ptr.h"

namespace FBE {

// Fast Binary Encoding ::sa::Sex field model
template <>
class FieldModel<::sa::Sex> : public FieldModelBase<::sa::Sex, int32_t>
{
public:
    using FieldModelBase<::sa::Sex, int32_t>::FieldModelBase;
};

// Fast Binary Encoding ::sa::MyFLags field model
template <>
class FieldModel<::sa::MyFLags> : public FieldModelBase<::sa::MyFLags, int32_t>
{
public:
    using FieldModelBase<::sa::MyFLags, int32_t>::FieldModelBase;
};

class FieldModelPtr_sa_Extra
{
public:
    FieldModelPtr_sa_Extra(FBEBuffer& buffer, size_t offset) noexcept;
    ~FieldModelPtr_sa_Extra();

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 5; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;
    // Get the field type
    static constexpr size_t fbe_type() noexcept { return 1; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    bool verify() const noexcept;
    // Check if the struct ptr is nullptr
    bool has_value() const noexcept;

    // Get the struct value (begin phase)
    size_t get_begin() const noexcept;
    // Get the struct value (end phase)
    void get_end(size_t fbe_begin) const noexcept;

    // Get the struct value
    void get(::sa::Extra** fbe_value, pmr::memory_resource* resource) noexcept;
    // Get the struct fields values
    void get_fields(::sa::Extra& fbe_value, size_t fbe_struct_size, pmr::memory_resource* resource) noexcept;

    // Set the struct value (begin phase)
    size_t set_begin(bool has_value);
    // Set the struct value (end phase)
    void set_end(size_t fbe_begin);

    // Set the struct value
    void set(const ::sa::Extra* fbe_value, pmr::memory_resource* resource) noexcept;
    // Set the struct fields values
    void set_fields(const ::sa::Extra* fbe_value, pmr::memory_resource* resource) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;

public:
    BaseFieldModel* ptr{nullptr};
};

class FieldModelPtr_sa_Simple
{
public:
    FieldModelPtr_sa_Simple(FBEBuffer& buffer, size_t offset) noexcept;
    ~FieldModelPtr_sa_Simple();

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 5; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;
    // Get the field type
    static constexpr size_t fbe_type() noexcept { return 2; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    bool verify() const noexcept;
    // Check if the struct ptr is nullptr
    bool has_value() const noexcept;

    // Get the struct value (begin phase)
    size_t get_begin() const noexcept;
    // Get the struct value (end phase)
    void get_end(size_t fbe_begin) const noexcept;

    // Get the struct value
    void get(::sa::Simple** fbe_value, pmr::memory_resource* resource) noexcept;
    // Get the struct fields values
    void get_fields(::sa::Simple& fbe_value, size_t fbe_struct_size, pmr::memory_resource* resource) noexcept;

    // Set the struct value (begin phase)
    size_t set_begin(bool has_value);
    // Set the struct value (end phase)
    void set_end(size_t fbe_begin);

    // Set the struct value
    void set(const ::sa::Simple* fbe_value, pmr::memory_resource* resource) noexcept;
    // Set the struct fields values
    void set_fields(const ::sa::Simple* fbe_value, pmr::memory_resource* resource) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;

public:
    BaseFieldModel* ptr{nullptr};
};

class FieldModelPtr_sa_Complex
{
public:
    FieldModelPtr_sa_Complex(FBEBuffer& buffer, size_t offset) noexcept;
    ~FieldModelPtr_sa_Complex();

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 5; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;
    // Get the field type
    static constexpr size_t fbe_type() noexcept { return 3; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    bool verify() const noexcept;
    // Check if the struct ptr is nullptr
    bool has_value() const noexcept;

    // Get the struct value (begin phase)
    size_t get_begin() const noexcept;
    // Get the struct value (end phase)
    void get_end(size_t fbe_begin) const noexcept;

    // Get the struct value
    void get(::sa::Complex** fbe_value, pmr::memory_resource* resource) noexcept;
    // Get the struct fields values
    void get_fields(::sa::Complex& fbe_value, size_t fbe_struct_size, pmr::memory_resource* resource) noexcept;

    // Set the struct value (begin phase)
    size_t set_begin(bool has_value);
    // Set the struct value (end phase)
    void set_end(size_t fbe_begin);

    // Set the struct value
    void set(const ::sa::Complex* fbe_value, pmr::memory_resource* resource) noexcept;
    // Set the struct fields values
    void set_fields(const ::sa::Complex* fbe_value, pmr::memory_resource* resource) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;

public:
    BaseFieldModel* ptr{nullptr};
};

// Fast Binary Encoding ::sa::Extra field model
class FieldModel_sa_Extra : public BaseFieldModel
{
public:
    FieldModel_sa_Extra(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the field offset
    size_t fbe_offset() const noexcept override { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept override { return 4; }
    // Get the field body size
    size_t fbe_body() const noexcept;
    // Get the field extra size
    size_t fbe_extra() const noexcept override;
    // Get the field type
    static constexpr size_t fbe_type() noexcept { return 1; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept override { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept override { _offset -= size; }

    // Check if the struct value is valid
    bool verify(bool fbe_verify_type = true) const noexcept override;
    // Check if the struct fields are valid
    bool verify_fields(size_t fbe_struct_size) const noexcept override;

    // Get the struct value (begin phase)
    size_t get_begin() const noexcept override;
    // Get the struct value (end phase)
    void get_end(size_t fbe_begin) const noexcept override;

    // Get the struct value
    void get(::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;
    // Get the struct fields values
    void get_fields(::FBE::Base& fbe_value, size_t fbe_struct_size, pmr::memory_resource* resource) noexcept override;

    // Set the struct value (begin phase)
    size_t set_begin() override;
    // Set the struct value (end phase)
    void set_end(size_t fbe_begin) override;

    // Set the struct value
    void set(const ::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;
    // Set the struct fields values
    void set_fields(const ::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;

private:
    FBEBuffer& _buffer;
    size_t _offset;

public:
    FieldModel<FBEString> name;
    FieldModel<FBEString> detail;
    FieldModel<::sa::Sex> sex;
    FieldModel<::sa::MyFLags> flag;
};

namespace sa {

// Fast Binary Encoding Extra model
class ExtraModel : public FBE::Model
{
public:
    ExtraModel() : model(this->buffer(), 4) {}
    ExtraModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), model(this->buffer(), 4) {}

    // Get the model size
    size_t fbe_size() const noexcept { return model.fbe_size() + model.fbe_extra(); }
    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FieldModel_sa_Extra::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Create a new model (begin phase)
    size_t create_begin();
    // Create a new model (end phase)
    size_t create_end(size_t fbe_begin);

    // Serialize the struct value
    size_t serialize(const ::sa::Extra& value, pmr::memory_resource* resource);
    // Deserialize the struct value
    size_t deserialize(::sa::Extra& value, pmr::memory_resource* resource) noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { model.fbe_shift(prev); }

public:
    FieldModel_sa_Extra model;
};

} // namespace sa

// Fast Binary Encoding ::sa::Simple field model
class FieldModel_sa_Simple : public BaseFieldModel
{
public:
    FieldModel_sa_Simple(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the field offset
    size_t fbe_offset() const noexcept override { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept override { return 4; }
    // Get the field body size
    size_t fbe_body() const noexcept;
    // Get the field extra size
    size_t fbe_extra() const noexcept override;
    // Get the field type
    static constexpr size_t fbe_type() noexcept { return 2; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept override { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept override { _offset -= size; }

    // Check if the struct value is valid
    bool verify(bool fbe_verify_type = true) const noexcept override;
    // Check if the struct fields are valid
    bool verify_fields(size_t fbe_struct_size) const noexcept override;

    // Get the struct value (begin phase)
    size_t get_begin() const noexcept override;
    // Get the struct value (end phase)
    void get_end(size_t fbe_begin) const noexcept override;

    // Get the struct value
    void get(::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;
    // Get the struct fields values
    void get_fields(::FBE::Base& fbe_value, size_t fbe_struct_size, pmr::memory_resource* resource) noexcept override;

    // Set the struct value (begin phase)
    size_t set_begin() override;
    // Set the struct value (end phase)
    void set_end(size_t fbe_begin) override;

    // Set the struct value
    void set(const ::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;
    // Set the struct fields values
    void set_fields(const ::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;

private:
    FBEBuffer& _buffer;
    size_t _offset;

public:
    FieldModel<FBEString> name;
    FieldModel<int32_t> depth;
    FieldModelCustomArray<FieldModel_sa_Extra, ::sa::Extra, 1> sa;
    FieldModel<::sa::Sex> sex;
};

namespace sa {

// Fast Binary Encoding Simple model
class SimpleModel : public FBE::Model
{
public:
    SimpleModel() : model(this->buffer(), 4) {}
    SimpleModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), model(this->buffer(), 4) {}

    // Get the model size
    size_t fbe_size() const noexcept { return model.fbe_size() + model.fbe_extra(); }
    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FieldModel_sa_Simple::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Create a new model (begin phase)
    size_t create_begin();
    // Create a new model (end phase)
    size_t create_end(size_t fbe_begin);

    // Serialize the struct value
    size_t serialize(const ::sa::Simple& value, pmr::memory_resource* resource);
    // Deserialize the struct value
    size_t deserialize(::sa::Simple& value, pmr::memory_resource* resource) noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { model.fbe_shift(prev); }

public:
    FieldModel_sa_Simple model;
};

} // namespace sa

// Fast Binary Encoding ::sa::Complex field model
class FieldModel_sa_Complex : public BaseFieldModel
{
public:
    FieldModel_sa_Complex(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the field offset
    size_t fbe_offset() const noexcept override { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept override { return 4; }
    // Get the field body size
    size_t fbe_body() const noexcept;
    // Get the field extra size
    size_t fbe_extra() const noexcept override;
    // Get the field type
    static constexpr size_t fbe_type() noexcept { return 3; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept override { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept override { _offset -= size; }

    // Check if the struct value is valid
    bool verify(bool fbe_verify_type = true) const noexcept override;
    // Check if the struct fields are valid
    bool verify_fields(size_t fbe_struct_size) const noexcept override;

    // Get the struct value (begin phase)
    size_t get_begin() const noexcept override;
    // Get the struct value (end phase)
    void get_end(size_t fbe_begin) const noexcept override;

    // Get the struct value
    void get(::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;
    // Get the struct fields values
    void get_fields(::FBE::Base& fbe_value, size_t fbe_struct_size, pmr::memory_resource* resource) noexcept override;

    // Set the struct value (begin phase)
    size_t set_begin() override;
    // Set the struct value (end phase)
    void set_end(size_t fbe_begin) override;

    // Set the struct value
    void set(const ::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;
    // Set the struct fields values
    void set_fields(const ::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;

private:
    FBEBuffer& _buffer;
    size_t _offset;

public:
    FieldModel<FBEString> name;
    FieldModel<std::optional<::sa::Sex>> sex;
    FieldModel<std::optional<::sa::MyFLags>> flag;
    FieldModelStructOptional<FieldModel_sa_Extra, ::sa::Extra> extra;
    FieldModelVector<int64_t> nums;
};

namespace sa {

// Fast Binary Encoding Complex model
class ComplexModel : public FBE::Model
{
public:
    ComplexModel() : model(this->buffer(), 4) {}
    ComplexModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), model(this->buffer(), 4) {}

    // Get the model size
    size_t fbe_size() const noexcept { return model.fbe_size() + model.fbe_extra(); }
    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FieldModel_sa_Complex::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Create a new model (begin phase)
    size_t create_begin();
    // Create a new model (end phase)
    size_t create_end(size_t fbe_begin);

    // Serialize the struct value
    size_t serialize(const ::sa::Complex& value, pmr::memory_resource* resource);
    // Deserialize the struct value
    size_t deserialize(::sa::Complex& value, pmr::memory_resource* resource) noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { model.fbe_shift(prev); }

public:
    FieldModel_sa_Complex model;
};

} // namespace sa

} // namespace FBE
