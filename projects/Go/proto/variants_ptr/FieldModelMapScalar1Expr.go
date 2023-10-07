//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

package variants_ptr

import "errors"
import "fbeproj/proto/fbe"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version

// Fast Binary Encoding Scalar1->Expr map field model
type FieldModelMapScalar1Expr struct {
    // Field model buffer
    buffer *fbe.Buffer
    // Field model buffer offset
    offset int

    // Map key field model
    modelKey *FieldModelScalar1
    // Map value field model
    modelValue *FieldModelExpr
}

// Create a new Scalar1->Expr map field model
func NewFieldModelMapScalar1Expr(buffer *fbe.Buffer, offset int) *FieldModelMapScalar1Expr {
    fbeResult := FieldModelMapScalar1Expr{buffer: buffer, offset: offset}
    return &fbeResult
}

// Get the field size
func (fm *FieldModelMapScalar1Expr) FBESize() int { return 4 }

// Get the field extra size
func (fm *FieldModelMapScalar1Expr) FBEExtra() int {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0
    }

    fbeMapOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeMapOffset == 0) || ((fm.buffer.Offset() + fbeMapOffset + 4) > fm.buffer.Size()) {
        return 0
    }

    fbeMapSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeMapOffset))
    if fbeMapSize == 0 {
        return 0
    }

    fbeResult := 0
    if fm.modelKey == nil {
        fm.modelKey = NewFieldModelScalar1(fm.buffer, fm.offset)
        fm.modelValue = NewFieldModelExpr(fm.buffer, fm.offset)
    }
    fm.modelKey.SetFBEOffset(fbeMapOffset + 4)
    fm.modelValue.SetFBEOffset(fbeMapOffset + 4 + fm.modelKey.FBESize())
    for i := fbeMapSize; i > 0; i-- {
        fbeResult += fm.modelKey.FBESize() + fm.modelKey.FBEExtra()
        fm.modelKey.FBEShift(fm.modelKey.FBESize() + fm.modelValue.FBESize())

        fbeResult += fm.modelValue.FBESize() + fm.modelValue.FBEExtra()
        fm.modelValue.FBEShift(fm.modelKey.FBESize() + fm.modelValue.FBESize())
    }
    return fbeResult
}

// Get the field offset
func (fm *FieldModelMapScalar1Expr) FBEOffset() int { return fm.offset }
// Set the field offset
func (fm *FieldModelMapScalar1Expr) SetFBEOffset(value int) { fm.offset = value }

// Shift the current field offset
func (fm *FieldModelMapScalar1Expr) FBEShift(size int) { fm.offset += size }
// Unshift the current field offset
func (fm *FieldModelMapScalar1Expr) FBEUnshift(size int) { fm.offset -= size }

// Get the map offset
func (fm *FieldModelMapScalar1Expr) Offset() int {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0
    }

    fbeMapOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    return fbeMapOffset
}

// Get the map size
func (fm *FieldModelMapScalar1Expr) Size() int {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0
    }

    fbeMapOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeMapOffset == 0) || ((fm.buffer.Offset() + fbeMapOffset + 4) > fm.buffer.Size()) {
        return 0
    }

    fbeMapSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeMapOffset))
    return fbeMapSize
}

// Map index operator
func (fm *FieldModelMapScalar1Expr) GetItem(index int) (*FieldModelScalar1, *FieldModelExpr, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return nil, nil, errors.New("model is broken")
    }

    fbeMapOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeMapOffset == 0) || ((fm.buffer.Offset() + fbeMapOffset + 4) > fm.buffer.Size()) {
        return nil, nil, errors.New("model is broken")
    }

    fbeMapSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeMapOffset))
    if index >= fbeMapSize {
        return nil, nil, errors.New("index is out of bounds")
    }

    if fm.modelKey == nil {
        fm.modelKey = NewFieldModelScalar1(fm.buffer, fm.offset)
        fm.modelValue = NewFieldModelExpr(fm.buffer, fm.offset)
    }

    fm.modelKey.SetFBEOffset(fbeMapOffset + 4)
    fm.modelValue.SetFBEOffset(fbeMapOffset + 4 + fm.modelKey.FBESize())
    fm.modelKey.FBEShift(index * (fm.modelKey.FBESize() + fm.modelValue.FBESize()))
    fm.modelValue.FBEShift(index * (fm.modelKey.FBESize() + fm.modelValue.FBESize()))
    return fm.modelKey, fm.modelValue, nil
}

// Resize the map and get its first model
func (fm *FieldModelMapScalar1Expr) Resize(size int) (*FieldModelScalar1, *FieldModelExpr, error) {
    if fm.modelKey == nil {
        fm.modelKey = NewFieldModelScalar1(fm.buffer, fm.offset)
        fm.modelValue = NewFieldModelExpr(fm.buffer, fm.offset)
    }
    fbeMapSize := size * (fm.modelKey.FBESize() + fm.modelValue.FBESize())
    fbeMapOffset := fm.buffer.Allocate(4 + fbeMapSize) - fm.buffer.Offset()
    if (fbeMapOffset == 0) || ((fm.buffer.Offset() + fbeMapOffset + 4) > fm.buffer.Size()) {
        return nil, nil, errors.New("model is broken")
    }

    fbe.WriteUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset(), uint32(fbeMapOffset))
    fbe.WriteUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeMapOffset, uint32(size))
    fbe.WriteCount(fm.buffer.Data(), fm.buffer.Offset() + fbeMapOffset + 4, 0, fbeMapSize)

    fm.modelKey.SetFBEOffset(fbeMapOffset + 4)
    fm.modelValue.SetFBEOffset(fbeMapOffset + 4 + fm.modelKey.FBESize())
    return fm.modelKey, fm.modelValue, nil
}

// Check if the map is valid
func (fm *FieldModelMapScalar1Expr) Verify() bool {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return true
    }

    fbeMapOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if fbeMapOffset == 0 {
        return true
    }

    if (fm.buffer.Offset() + fbeMapOffset + 4) > fm.buffer.Size() {
        return false
    }

    fbeMapSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeMapOffset))
    if fbeMapSize == 0 {
        return true
    }

    if fm.modelKey == nil {
        fm.modelKey = NewFieldModelScalar1(fm.buffer, fm.offset)
        fm.modelValue = NewFieldModelExpr(fm.buffer, fm.offset)
    }
    fm.modelKey.SetFBEOffset(fbeMapOffset + 4)
    fm.modelValue.SetFBEOffset(fbeMapOffset + 4 + fm.modelKey.FBESize())
    for i := fbeMapSize; i > 0; i-- {
        if !fm.modelKey.Verify() {
            return false
        }
        fm.modelKey.FBEShift(fm.modelKey.FBESize() + fm.modelValue.FBESize())
        if !fm.modelValue.Verify() {
            return false
        }
        fm.modelValue.FBEShift(fm.modelKey.FBESize() + fm.modelValue.FBESize())
    }

    return true
}

// Get the map
func (fm *FieldModelMapScalar1Expr) Get() (map[Scalar1Key]struct{Key Scalar1; Value Expr}, error) {
    values := make(map[Scalar1Key]struct{Key Scalar1; Value Expr})

    fbeMapSize := fm.Size()
    if fbeMapSize == 0 {
        return values, nil
    }

    fbeModelKey, fbeModelValue, err := fm.GetItem(0)
    if err != nil {
        return values, err
    }

    for i := fbeMapSize; i > 0; i-- {
        key, err := fbeModelKey.Get()
        if err != nil {
            return values, err
        }
        value, err := fbeModelValue.Get()
        if err != nil {
            return values, err
        }
        values[*key] = struct{Key Scalar1; Value Expr}{*key, *value}
        fbeModelKey.FBEShift(fbeModelKey.FBESize() + fbeModelValue.FBESize())
        fbeModelValue.FBEShift(fbeModelKey.FBESize() + fbeModelValue.FBESize())
    }

    return values, nil
}

// Set the map
func (fm *FieldModelMapScalar1Expr) Set(values map[Scalar1Key]struct{Key Scalar1; Value Expr}) error {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return errors.New("model is broken")
    }

    fbeModelKey, fbeModelValue, err := fm.Resize(len(values))
    if err != nil {
        return err
    }

    for _, value := range values {
        err := fbeModelKey.Set(&value.Key)
        if err != nil {
            return err
        }
        fbeModelKey.FBEShift(fbeModelKey.FBESize() + fbeModelValue.FBESize())
        err = fbeModelValue.Set(&value.Value)
        if err != nil {
            return err
        }
        fbeModelValue.FBEShift(fbeModelKey.FBESize() + fbeModelValue.FBESize())
    }

    return nil
}
