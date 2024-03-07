/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::TF::_JitFusedMatMulOp,
::mlir::TF::_TfrtGetResourceOp,
::mlir::TF::_TfrtSetResourceOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace TF {
static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tfrt_ops0(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && ((type.cast<::mlir::ShapedType>().getElementType().isF32())))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tfrt_ops1(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && ((type.cast<::mlir::ShapedType>().getElementType().isF32())))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tfrt_ops2(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((((type.cast<::mlir::ShapedType>().getElementType().isF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF64())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isBF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>())))) || (((((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex64RefType>()))) || ((((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex128RefType>())))) || (((((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int8RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int32RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>())))) || ((((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint8RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint32RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint64RefType>()))))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::BoolRefType>()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::TensorFlowType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of tf.dtype values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tfrt_ops3(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((((type.cast<::mlir::ShapedType>().getElementType().isF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF64())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isBF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>())))) || (((((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex64RefType>()))) || ((((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex128RefType>())))) || (((((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int8RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int32RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>())))) || ((((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint8RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint32RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint64RefType>()))))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::BoolRefType>()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::TensorFlowType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of tf.dtype values, but got " << type;
  }
  return ::mlir::success();
}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_JitFusedMatMulOp definitions
//===----------------------------------------------------------------------===//

_JitFusedMatMulOpAdaptor::_JitFusedMatMulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_JitFusedMatMulOpAdaptor::_JitFusedMatMulOpAdaptor(_JitFusedMatMulOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _JitFusedMatMulOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _JitFusedMatMulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange _JitFusedMatMulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _JitFusedMatMulOpAdaptor::a() {
  return *getODSOperands(0).begin();
}

::mlir::Value _JitFusedMatMulOpAdaptor::b() {
  return *getODSOperands(1).begin();
}

::mlir::ValueRange _JitFusedMatMulOpAdaptor::additional_args() {
  return getODSOperands(2);
}

::mlir::DictionaryAttr _JitFusedMatMulOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr _JitFusedMatMulOpAdaptor::transpose_a() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("transpose_a").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::BoolAttr _JitFusedMatMulOpAdaptor::transpose_b() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("transpose_b").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::ArrayAttr _JitFusedMatMulOpAdaptor::fusion() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("fusion").dyn_cast_or_null<::mlir::ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getStrArrayAttr({});
  return attr;
}

::mlir::LogicalResult _JitFusedMatMulOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_transpose_a = odsAttrs.get("transpose_a");
  if (tblgen_transpose_a) {
    if (!((tblgen_transpose_a.isa<::mlir::BoolAttr>()))) return emitError(loc, "'tf._JitFusedMatMul' op ""attribute 'transpose_a' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_transpose_b = odsAttrs.get("transpose_b");
  if (tblgen_transpose_b) {
    if (!((tblgen_transpose_b.isa<::mlir::BoolAttr>()))) return emitError(loc, "'tf._JitFusedMatMul' op ""attribute 'transpose_b' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_fusion = odsAttrs.get("fusion");
  if (tblgen_fusion) {
    if (!(((tblgen_fusion.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_fusion.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return (attr.isa<::mlir::StringAttr>()); })))) return emitError(loc, "'tf._JitFusedMatMul' op ""attribute 'fusion' failed to satisfy constraint: string array attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _JitFusedMatMulOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range _JitFusedMatMulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _JitFusedMatMulOp::a() {
  return *getODSOperands(0).begin();
}

::mlir::Value _JitFusedMatMulOp::b() {
  return *getODSOperands(1).begin();
}

::mlir::Operation::operand_range _JitFusedMatMulOp::additional_args() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange _JitFusedMatMulOp::aMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _JitFusedMatMulOp::bMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _JitFusedMatMulOp::additional_argsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _JitFusedMatMulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _JitFusedMatMulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _JitFusedMatMulOp::product() {
  return *getODSResults(0).begin();
}

::mlir::BoolAttr _JitFusedMatMulOp::transpose_aAttr() {
  return (*this)->getAttr("transpose_a").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool _JitFusedMatMulOp::transpose_a() {
  auto attr = transpose_aAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::BoolAttr _JitFusedMatMulOp::transpose_bAttr() {
  return (*this)->getAttr("transpose_b").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool _JitFusedMatMulOp::transpose_b() {
  auto attr = transpose_bAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::ArrayAttr _JitFusedMatMulOp::fusionAttr() {
  return (*this)->getAttr("fusion").template dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr _JitFusedMatMulOp::fusion() {
  auto attr = fusionAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getStrArrayAttr({});
  return attr;
}

Type _JitFusedMatMulOp::T() {
  return mlir::getElementTypeOrSelf(*getODSOperands(0).begin());
}

bool _JitFusedMatMulOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "T") return true;
 return false;
}

::mlir::DictionaryAttr _JitFusedMatMulOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("T", ctx),
::mlir::TypeAttr::get(T())}});
}

void _JitFusedMatMulOp::transpose_aAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("transpose_a", attr);
}

void _JitFusedMatMulOp::transpose_bAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("transpose_b", attr);
}

void _JitFusedMatMulOp::fusionAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr("fusion", attr);
}

void _JitFusedMatMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type product, ::mlir::Value a, ::mlir::Value b, ::mlir::ValueRange additional_args, ::mlir::BoolAttr transpose_a, ::mlir::BoolAttr transpose_b, ::mlir::ArrayAttr fusion) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(additional_args);
  odsState.addAttribute("transpose_a", transpose_a);
  odsState.addAttribute("transpose_b", transpose_b);
  odsState.addAttribute("fusion", fusion);
  odsState.addTypes(product);
}

void _JitFusedMatMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::ValueRange additional_args, ::mlir::BoolAttr transpose_a, ::mlir::BoolAttr transpose_b, ::mlir::ArrayAttr fusion) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(additional_args);
  odsState.addAttribute("transpose_a", transpose_a);
  odsState.addAttribute("transpose_b", transpose_b);
  odsState.addAttribute("fusion", fusion);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _JitFusedMatMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type product, ::mlir::Value a, ::mlir::Value b, ::mlir::ValueRange additional_args, bool transpose_a, bool transpose_b, ::mlir::ArrayAttr fusion) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(additional_args);
  odsState.addAttribute("transpose_a", odsBuilder.getBoolAttr(transpose_a));
  odsState.addAttribute("transpose_b", odsBuilder.getBoolAttr(transpose_b));
  odsState.addAttribute("fusion", fusion);
  odsState.addTypes(product);
}

void _JitFusedMatMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::ValueRange additional_args, bool transpose_a, bool transpose_b, ::mlir::ArrayAttr fusion) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(additional_args);
  odsState.addAttribute("transpose_a", odsBuilder.getBoolAttr(transpose_a));
  odsState.addAttribute("transpose_b", odsBuilder.getBoolAttr(transpose_b));
  odsState.addAttribute("fusion", fusion);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _JitFusedMatMulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _JitFusedMatMulOp::verify() {
  if (failed(_JitFusedMatMulOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tfrt_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tfrt_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tfrt_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tfrt_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return ::mlir::success();
}

void _JitFusedMatMulOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_TfrtGetResourceOp definitions
//===----------------------------------------------------------------------===//

_TfrtGetResourceOpAdaptor::_TfrtGetResourceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_TfrtGetResourceOpAdaptor::_TfrtGetResourceOpAdaptor(_TfrtGetResourceOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _TfrtGetResourceOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _TfrtGetResourceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange _TfrtGetResourceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr _TfrtGetResourceOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr _TfrtGetResourceOpAdaptor::indices() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("indices").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult _TfrtGetResourceOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_indices = odsAttrs.get("indices");
  if (!tblgen_indices) return emitError(loc, "'tf._TfrtGetResource' op ""requires attribute 'indices'");
    if (!(((tblgen_indices.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_indices.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'tf._TfrtGetResource' op ""attribute 'indices' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _TfrtGetResourceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range _TfrtGetResourceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> _TfrtGetResourceOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range _TfrtGetResourceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range _TfrtGetResourceOp::results() {
  return getODSResults(0);
}

::mlir::ArrayAttr _TfrtGetResourceOp::indicesAttr() {
  return (*this)->getAttr("indices").template cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr _TfrtGetResourceOp::indices() {
  auto attr = indicesAttr();
  return attr;
}

void _TfrtGetResourceOp::indicesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr("indices", attr);
}

void _TfrtGetResourceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ArrayAttr indices) {
  odsState.addAttribute("indices", indices);
  odsState.addTypes(results);
}

void _TfrtGetResourceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _TfrtGetResourceOp::verify() {
  if (failed(_TfrtGetResourceOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tfrt_ops2(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return ::mlir::success();
}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_TfrtSetResourceOp definitions
//===----------------------------------------------------------------------===//

_TfrtSetResourceOpAdaptor::_TfrtSetResourceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_TfrtSetResourceOpAdaptor::_TfrtSetResourceOpAdaptor(_TfrtSetResourceOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _TfrtSetResourceOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _TfrtSetResourceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange _TfrtSetResourceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _TfrtSetResourceOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr _TfrtSetResourceOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr _TfrtSetResourceOpAdaptor::index() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("index").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult _TfrtSetResourceOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_index = odsAttrs.get("index");
  if (!tblgen_index) return emitError(loc, "'tf._TfrtSetResource' op ""requires attribute 'index'");
    if (!(((tblgen_index.isa<::mlir::IntegerAttr>())) && ((tblgen_index.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'tf._TfrtSetResource' op ""attribute 'index' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _TfrtSetResourceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range _TfrtSetResourceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _TfrtSetResourceOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange _TfrtSetResourceOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _TfrtSetResourceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _TfrtSetResourceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::IntegerAttr _TfrtSetResourceOp::indexAttr() {
  return (*this)->getAttr("index").template cast<::mlir::IntegerAttr>();
}

uint64_t _TfrtSetResourceOp::index() {
  auto attr = indexAttr();
  return attr.getValue().getZExtValue();
}

void _TfrtSetResourceOp::indexAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("index", attr);
}

void _TfrtSetResourceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, ::mlir::IntegerAttr index) {
  odsState.addOperands(arg);
  odsState.addAttribute("index", index);
}

void _TfrtSetResourceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, ::mlir::IntegerAttr index) {
  odsState.addOperands(arg);
  odsState.addAttribute("index", index);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _TfrtSetResourceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, uint64_t index) {
  odsState.addOperands(arg);
  odsState.addAttribute("index", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), index));
}

void _TfrtSetResourceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, uint64_t index) {
  odsState.addOperands(arg);
  odsState.addAttribute("index", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), index));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _TfrtSetResourceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _TfrtSetResourceOp::verify() {
  if (failed(_TfrtSetResourceOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tfrt_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

} // namespace TF
} // namespace mlir

#endif  // GET_OP_CLASSES

