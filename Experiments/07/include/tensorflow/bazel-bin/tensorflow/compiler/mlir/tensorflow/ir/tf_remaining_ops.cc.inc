/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::TF::_ArrayToListOp,
::mlir::TF::_FusedBatchNormExOp,
::mlir::TF::_FusedConv2DOp,
::mlir::TF::_FusedMatMulOp,
::mlir::TF::_HostRecvOp,
::mlir::TF::_HostSendOp,
::mlir::TF::_ListToArrayOp,
::mlir::TF::_RecvTPUEmbeddingActivationsOp,
::mlir::TF::_RecvTPUEmbeddingDeduplicationDataOp,
::mlir::TF::_SendTPUEmbeddingGradientsOp,
::mlir::TF::_TPUCompileMlirOp,
::mlir::TF::_TPUCompileMlirPlaceholderProgramKeyOp,
::mlir::TF::_TPUDeviceOrdinalPlaceholderOp,
::mlir::TF::_UnaryOpsCompositionOp,
::mlir::TF::_XlaHostComputeMlirOp,
::mlir::TF::_XlaRecvAtHostOp,
::mlir::TF::_XlaRecvAtHostV2Op,
::mlir::TF::_XlaSendFromHostOp,
::mlir::TF::_XlaSendFromHostV2Op
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace TF {
static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops0(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((((type.cast<::mlir::ShapedType>().getElementType().isF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF64())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isBF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>())))) || (((((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex64RefType>()))) || ((((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex128RefType>())))) || (((((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int8RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int32RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>())))) || ((((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint8RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint32RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint64RefType>()))))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::BoolRefType>()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::TensorFlowType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of tf.dtype values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops1(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && ((((type.cast<::mlir::ShapedType>().getElementType().isBF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>())))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of bfloat16 or 16-bit float or 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops2(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops3(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && ((((type.cast<::mlir::ShapedType>().getElementType().isBF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>())))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of bfloat16 or 16-bit float or 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops4(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && ((((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF64())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>())))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of 32/64-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops5(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && ((((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF64())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>())))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of 32/64-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops6(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && ((((type.cast<::mlir::ShapedType>().getElementType().isBF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>())))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of bfloat16 or 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops7(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && ((((type.cast<::mlir::ShapedType>().getElementType().isBF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>())))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of bfloat16 or 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops8(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((((type.cast<::mlir::ShapedType>().getElementType().isF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF64())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isBF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>())))) || (((((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex64RefType>()))) || ((((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex128RefType>())))) || (((((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int8RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int32RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>())))) || ((((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint8RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint16RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint32RefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint64RefType>()))))) || (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::BoolRefType>()))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::TensorFlowType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of tf.dtype values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops9(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::VariantType>())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::VariantRefType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of variant values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops10(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of 32-bit float values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops11(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of 64-bit integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops12(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::StringType>())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::StringRefType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of string values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops13(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::StringType>())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::StringRefType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of string values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops14(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of 64-bit integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_tf_ops15(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && ((((type.cast<::mlir::ShapedType>().getElementType().isF16())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || (((type.cast<::mlir::ShapedType>().getElementType().isF64())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>())))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of 16-bit float or 32-bit float or 64-bit float values, but got " << type;
  }
  return ::mlir::success();
}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_ArrayToListOp definitions
//===----------------------------------------------------------------------===//

_ArrayToListOpAdaptor::_ArrayToListOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_ArrayToListOpAdaptor::_ArrayToListOpAdaptor(_ArrayToListOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _ArrayToListOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _ArrayToListOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange _ArrayToListOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange _ArrayToListOpAdaptor::input() {
  return getODSOperands(0);
}

::mlir::DictionaryAttr _ArrayToListOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult _ArrayToListOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _ArrayToListOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range _ArrayToListOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range _ArrayToListOp::input() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange _ArrayToListOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _ArrayToListOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range _ArrayToListOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range _ArrayToListOp::output() {
  return getODSResults(0);
}

Type _ArrayToListOp::T() {
  return mlir::getElementTypeOrSelf(*getODSOperands(0).begin());
}

mlir::ResultElementTypeRange _ArrayToListOp::out_types() {
  auto values = getODSResults(0);
return {mlir::ResultElementTypeIterator(values.begin()), mlir::ResultElementTypeIterator(values.end())};
}

size_t _ArrayToListOp::N() {
  auto range = getODSOperands(0);
return std::distance(range.begin(), range.end());
}

bool _ArrayToListOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "T") return true;
  if (name == "out_types") return true;
  if (name == "N") return true;
 return false;
}

::mlir::DictionaryAttr _ArrayToListOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("T", ctx),
::mlir::TypeAttr::get(T())},
    {::mlir::Identifier::get("out_types", ctx),
ArrayAttr::get(ctx, 
    [&]() {
      llvm::SmallVector<Attribute, 4> ret;
      for (auto t : out_types())
        ret.push_back(TypeAttr::get(t));
      return ret;
    }())},
    {::mlir::Identifier::get("N", ctx),
odsBuilder.getI64IntegerAttr(N())}});
}

void _ArrayToListOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _ArrayToListOp::verify() {
  if (failed(_ArrayToListOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return ::mlir::success();
}

void _ArrayToListOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_FusedBatchNormExOp definitions
//===----------------------------------------------------------------------===//

_FusedBatchNormExOpAdaptor::_FusedBatchNormExOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_FusedBatchNormExOpAdaptor::_FusedBatchNormExOpAdaptor(_FusedBatchNormExOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _FusedBatchNormExOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _FusedBatchNormExOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 5) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange _FusedBatchNormExOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _FusedBatchNormExOpAdaptor::x() {
  return *getODSOperands(0).begin();
}

::mlir::Value _FusedBatchNormExOpAdaptor::scale() {
  return *getODSOperands(1).begin();
}

::mlir::Value _FusedBatchNormExOpAdaptor::offset() {
  return *getODSOperands(2).begin();
}

::mlir::Value _FusedBatchNormExOpAdaptor::mean() {
  return *getODSOperands(3).begin();
}

::mlir::Value _FusedBatchNormExOpAdaptor::variance() {
  return *getODSOperands(4).begin();
}

::mlir::ValueRange _FusedBatchNormExOpAdaptor::side_input() {
  return getODSOperands(5);
}

::mlir::DictionaryAttr _FusedBatchNormExOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::FloatAttr _FusedBatchNormExOpAdaptor::epsilon() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::FloatAttr attr = odsAttrs.get("epsilon").dyn_cast_or_null<::mlir::FloatAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getFloatAttr(::mlir::Builder(odsAttrs.getContext()).getF32Type(), 0.0001f);
  return attr;
}

::mlir::FloatAttr _FusedBatchNormExOpAdaptor::exponential_avg_factor() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::FloatAttr attr = odsAttrs.get("exponential_avg_factor").dyn_cast_or_null<::mlir::FloatAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getFloatAttr(::mlir::Builder(odsAttrs.getContext()).getF32Type(), 1.0f);
  return attr;
}

::mlir::StringAttr _FusedBatchNormExOpAdaptor::activation_mode() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("activation_mode").dyn_cast_or_null<::mlir::StringAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getStringAttr("Identity");
  return attr;
}

::mlir::StringAttr _FusedBatchNormExOpAdaptor::data_format() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("data_format").dyn_cast_or_null<::mlir::StringAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getStringAttr("NHWC");
  return attr;
}

::mlir::BoolAttr _FusedBatchNormExOpAdaptor::is_training() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("is_training").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(true);
  return attr;
}

::mlir::LogicalResult _FusedBatchNormExOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_epsilon = odsAttrs.get("epsilon");
  if (tblgen_epsilon) {
    if (!(((tblgen_epsilon.isa<::mlir::FloatAttr>())) && ((tblgen_epsilon.cast<::mlir::FloatAttr>().getType().isF32())))) return emitError(loc, "'tf._FusedBatchNormEx' op ""attribute 'epsilon' failed to satisfy constraint: 32-bit float attribute");
  }
  }
  {
  auto tblgen_exponential_avg_factor = odsAttrs.get("exponential_avg_factor");
  if (tblgen_exponential_avg_factor) {
    if (!(((tblgen_exponential_avg_factor.isa<::mlir::FloatAttr>())) && ((tblgen_exponential_avg_factor.cast<::mlir::FloatAttr>().getType().isF32())))) return emitError(loc, "'tf._FusedBatchNormEx' op ""attribute 'exponential_avg_factor' failed to satisfy constraint: 32-bit float attribute");
  }
  }
  {
  auto tblgen_activation_mode = odsAttrs.get("activation_mode");
  if (tblgen_activation_mode) {
    if (!((tblgen_activation_mode.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._FusedBatchNormEx' op ""attribute 'activation_mode' failed to satisfy constraint: string attribute");
  }
  }
  {
  auto tblgen_data_format = odsAttrs.get("data_format");
  if (tblgen_data_format) {
    if (!((tblgen_data_format.cast<StringAttr>().getValue() == "NHWC" || tblgen_data_format.cast<StringAttr>().getValue() == "NCHW"))) return emitError(loc, "'tf._FusedBatchNormEx' op ""attribute 'data_format' failed to satisfy constraint: 'NHWC' or 'NCHW' convnet data format");
  }
  }
  {
  auto tblgen_is_training = odsAttrs.get("is_training");
  if (tblgen_is_training) {
    if (!((tblgen_is_training.isa<::mlir::BoolAttr>()))) return emitError(loc, "'tf._FusedBatchNormEx' op ""attribute 'is_training' failed to satisfy constraint: bool attribute");
  }
  }
  return ::mlir::success();
}

void _FusedBatchNormExOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!llvm::empty(resultGroup0))
    setNameFn(*resultGroup0.begin(), "y");
  auto resultGroup1 = getODSResults(1);
  if (!llvm::empty(resultGroup1))
    setNameFn(*resultGroup1.begin(), "batch_mean");
  auto resultGroup2 = getODSResults(2);
  if (!llvm::empty(resultGroup2))
    setNameFn(*resultGroup2.begin(), "batch_variance");
  auto resultGroup3 = getODSResults(3);
  if (!llvm::empty(resultGroup3))
    setNameFn(*resultGroup3.begin(), "reserve_space_1");
  auto resultGroup4 = getODSResults(4);
  if (!llvm::empty(resultGroup4))
    setNameFn(*resultGroup4.begin(), "reserve_space_2");
  auto resultGroup5 = getODSResults(5);
  if (!llvm::empty(resultGroup5))
    setNameFn(*resultGroup5.begin(), "reserve_space_3");
}



std::pair<unsigned, unsigned> _FusedBatchNormExOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 5) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range _FusedBatchNormExOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _FusedBatchNormExOp::x() {
  return *getODSOperands(0).begin();
}

::mlir::Value _FusedBatchNormExOp::scale() {
  return *getODSOperands(1).begin();
}

::mlir::Value _FusedBatchNormExOp::offset() {
  return *getODSOperands(2).begin();
}

::mlir::Value _FusedBatchNormExOp::mean() {
  return *getODSOperands(3).begin();
}

::mlir::Value _FusedBatchNormExOp::variance() {
  return *getODSOperands(4).begin();
}

::mlir::Operation::operand_range _FusedBatchNormExOp::side_input() {
  return getODSOperands(5);
}

::mlir::MutableOperandRange _FusedBatchNormExOp::xMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _FusedBatchNormExOp::scaleMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _FusedBatchNormExOp::offsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _FusedBatchNormExOp::meanMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _FusedBatchNormExOp::varianceMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _FusedBatchNormExOp::side_inputMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _FusedBatchNormExOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _FusedBatchNormExOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _FusedBatchNormExOp::y() {
  return *getODSResults(0).begin();
}

::mlir::Value _FusedBatchNormExOp::batch_mean() {
  return *getODSResults(1).begin();
}

::mlir::Value _FusedBatchNormExOp::batch_variance() {
  return *getODSResults(2).begin();
}

::mlir::Value _FusedBatchNormExOp::reserve_space_1() {
  return *getODSResults(3).begin();
}

::mlir::Value _FusedBatchNormExOp::reserve_space_2() {
  return *getODSResults(4).begin();
}

::mlir::Value _FusedBatchNormExOp::reserve_space_3() {
  return *getODSResults(5).begin();
}

::mlir::FloatAttr _FusedBatchNormExOp::epsilonAttr() {
  return (*this)->getAttr("epsilon").template dyn_cast_or_null<::mlir::FloatAttr>();
}

::llvm::APFloat _FusedBatchNormExOp::epsilon() {
  auto attr = epsilonAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getFloatAttr(::mlir::Builder((*this)->getContext()).getF32Type(), 0.0001f).getValue();
  return attr.getValue();
}

::mlir::FloatAttr _FusedBatchNormExOp::exponential_avg_factorAttr() {
  return (*this)->getAttr("exponential_avg_factor").template dyn_cast_or_null<::mlir::FloatAttr>();
}

::llvm::APFloat _FusedBatchNormExOp::exponential_avg_factor() {
  auto attr = exponential_avg_factorAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getFloatAttr(::mlir::Builder((*this)->getContext()).getF32Type(), 1.0f).getValue();
  return attr.getValue();
}

::mlir::StringAttr _FusedBatchNormExOp::activation_modeAttr() {
  return (*this)->getAttr("activation_mode").template dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::StringRef _FusedBatchNormExOp::activation_mode() {
  auto attr = activation_modeAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getStringAttr("Identity").getValue();
  return attr.getValue();
}

::mlir::StringAttr _FusedBatchNormExOp::data_formatAttr() {
  return (*this)->getAttr("data_format").template dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::StringRef _FusedBatchNormExOp::data_format() {
  auto attr = data_formatAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getStringAttr("NHWC").getValue();
  return attr.getValue();
}

::mlir::BoolAttr _FusedBatchNormExOp::is_trainingAttr() {
  return (*this)->getAttr("is_training").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool _FusedBatchNormExOp::is_training() {
  auto attr = is_trainingAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(true).getValue();
  return attr.getValue();
}

Type _FusedBatchNormExOp::T() {
  return mlir::getElementTypeOrSelf(*getODSOperands(0).begin());
}

Type _FusedBatchNormExOp::U() {
  return mlir::getElementTypeOrSelf(*getODSOperands(1).begin());
}

size_t _FusedBatchNormExOp::num_side_inputs() {
  auto range = getODSOperands(5);
return std::distance(range.begin(), range.end());
}

bool _FusedBatchNormExOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "T") return true;
  if (name == "U") return true;
  if (name == "num_side_inputs") return true;
 return false;
}

::mlir::DictionaryAttr _FusedBatchNormExOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("T", ctx),
::mlir::TypeAttr::get(T())},
    {::mlir::Identifier::get("U", ctx),
::mlir::TypeAttr::get(U())},
    {::mlir::Identifier::get("num_side_inputs", ctx),
odsBuilder.getI64IntegerAttr(num_side_inputs())}});
}

void _FusedBatchNormExOp::epsilonAttr(::mlir::FloatAttr attr) {
  (*this)->setAttr("epsilon", attr);
}

void _FusedBatchNormExOp::exponential_avg_factorAttr(::mlir::FloatAttr attr) {
  (*this)->setAttr("exponential_avg_factor", attr);
}

void _FusedBatchNormExOp::activation_modeAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("activation_mode", attr);
}

void _FusedBatchNormExOp::data_formatAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("data_format", attr);
}

void _FusedBatchNormExOp::is_trainingAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("is_training", attr);
}

void _FusedBatchNormExOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type y, ::mlir::Type batch_mean, ::mlir::Type batch_variance, ::mlir::Type reserve_space_1, ::mlir::Type reserve_space_2, ::mlir::Type reserve_space_3, ::mlir::Value x, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value mean, ::mlir::Value variance, ::mlir::ValueRange side_input, ::mlir::FloatAttr epsilon, ::mlir::FloatAttr exponential_avg_factor, ::mlir::StringAttr activation_mode, ::mlir::StringAttr data_format, ::mlir::BoolAttr is_training) {
  odsState.addOperands(x);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(side_input);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("exponential_avg_factor", exponential_avg_factor);
  odsState.addAttribute("activation_mode", activation_mode);
  odsState.addAttribute("data_format", data_format);
  odsState.addAttribute("is_training", is_training);
  odsState.addTypes(y);
  odsState.addTypes(batch_mean);
  odsState.addTypes(batch_variance);
  odsState.addTypes(reserve_space_1);
  odsState.addTypes(reserve_space_2);
  odsState.addTypes(reserve_space_3);
}

void _FusedBatchNormExOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value mean, ::mlir::Value variance, ::mlir::ValueRange side_input, ::mlir::FloatAttr epsilon, ::mlir::FloatAttr exponential_avg_factor, ::mlir::StringAttr activation_mode, ::mlir::StringAttr data_format, ::mlir::BoolAttr is_training) {
  odsState.addOperands(x);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(side_input);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("exponential_avg_factor", exponential_avg_factor);
  odsState.addAttribute("activation_mode", activation_mode);
  odsState.addAttribute("data_format", data_format);
  odsState.addAttribute("is_training", is_training);
  assert(resultTypes.size() == 6u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _FusedBatchNormExOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type y, ::mlir::Type batch_mean, ::mlir::Type batch_variance, ::mlir::Type reserve_space_1, ::mlir::Type reserve_space_2, ::mlir::Type reserve_space_3, ::mlir::Value x, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value mean, ::mlir::Value variance, ::mlir::ValueRange side_input, ::llvm::APFloat epsilon, ::llvm::APFloat exponential_avg_factor, ::llvm::StringRef activation_mode, ::llvm::StringRef data_format, bool is_training) {
  odsState.addOperands(x);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(side_input);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("exponential_avg_factor", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), exponential_avg_factor));
  odsState.addAttribute("activation_mode", odsBuilder.getStringAttr(activation_mode));
  odsState.addAttribute("data_format", odsBuilder.getStringAttr(data_format));
  odsState.addAttribute("is_training", odsBuilder.getBoolAttr(is_training));
  odsState.addTypes(y);
  odsState.addTypes(batch_mean);
  odsState.addTypes(batch_variance);
  odsState.addTypes(reserve_space_1);
  odsState.addTypes(reserve_space_2);
  odsState.addTypes(reserve_space_3);
}

void _FusedBatchNormExOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value mean, ::mlir::Value variance, ::mlir::ValueRange side_input, ::llvm::APFloat epsilon, ::llvm::APFloat exponential_avg_factor, ::llvm::StringRef activation_mode, ::llvm::StringRef data_format, bool is_training) {
  odsState.addOperands(x);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(side_input);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("exponential_avg_factor", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), exponential_avg_factor));
  odsState.addAttribute("activation_mode", odsBuilder.getStringAttr(activation_mode));
  odsState.addAttribute("data_format", odsBuilder.getStringAttr(data_format));
  odsState.addAttribute("is_training", odsBuilder.getBoolAttr(is_training));
  assert(resultTypes.size() == 6u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _FusedBatchNormExOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 6u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _FusedBatchNormExOp::verify() {
  if (failed(_FusedBatchNormExOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (::mlir::Value v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup4 = getODSOperands(4);
    for (::mlir::Value v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup5 = getODSOperands(5);
    for (::mlir::Value v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSResults(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops2(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSResults(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops2(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup3 = getODSResults(3);
    for (::mlir::Value v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops2(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup4 = getODSResults(4);
    for (::mlir::Value v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops2(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup5 = getODSResults(5);
    for (::mlir::Value v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops2(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return ::mlir::success();
}

void _FusedBatchNormExOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_FusedConv2DOp definitions
//===----------------------------------------------------------------------===//

_FusedConv2DOpAdaptor::_FusedConv2DOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_FusedConv2DOpAdaptor::_FusedConv2DOpAdaptor(_FusedConv2DOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _FusedConv2DOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _FusedConv2DOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange _FusedConv2DOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _FusedConv2DOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value _FusedConv2DOpAdaptor::filter() {
  return *getODSOperands(1).begin();
}

::mlir::ValueRange _FusedConv2DOpAdaptor::args() {
  return getODSOperands(2);
}

::mlir::DictionaryAttr _FusedConv2DOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr _FusedConv2DOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("strides").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::StringAttr _FusedConv2DOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("padding").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::ArrayAttr _FusedConv2DOpAdaptor::explicit_paddings() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("explicit_paddings").dyn_cast_or_null<::mlir::ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getI64ArrayAttr({});
  return attr;
}

::mlir::StringAttr _FusedConv2DOpAdaptor::data_format() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("data_format").dyn_cast_or_null<::mlir::StringAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getStringAttr("NHWC");
  return attr;
}

::mlir::ArrayAttr _FusedConv2DOpAdaptor::dilations() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("dilations").dyn_cast_or_null<::mlir::ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getI64ArrayAttr({1, 1, 1, 1});
  return attr;
}

::mlir::BoolAttr _FusedConv2DOpAdaptor::use_cudnn_on_gpu() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("use_cudnn_on_gpu").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(true);
  return attr;
}

::mlir::ArrayAttr _FusedConv2DOpAdaptor::fused_ops() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("fused_ops").dyn_cast_or_null<::mlir::ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getStrArrayAttr({});
  return attr;
}

::mlir::FloatAttr _FusedConv2DOpAdaptor::epsilon() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::FloatAttr attr = odsAttrs.get("epsilon").dyn_cast_or_null<::mlir::FloatAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getFloatAttr(::mlir::Builder(odsAttrs.getContext()).getF32Type(), 0.0001f);
  return attr;
}

::mlir::FloatAttr _FusedConv2DOpAdaptor::leakyrelu_alpha() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::FloatAttr attr = odsAttrs.get("leakyrelu_alpha").dyn_cast_or_null<::mlir::FloatAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getFloatAttr(::mlir::Builder(odsAttrs.getContext()).getF32Type(), 0.2f);
  return attr;
}

::mlir::LogicalResult _FusedConv2DOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (!tblgen_strides) return emitError(loc, "'tf._FusedConv2D' op ""requires attribute 'strides'");
    if (!(((tblgen_strides.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_strides.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'tf._FusedConv2D' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (!tblgen_padding) return emitError(loc, "'tf._FusedConv2D' op ""requires attribute 'padding'");
    if (!((tblgen_padding.cast<StringAttr>().getValue() == "SAME" || tblgen_padding.cast<StringAttr>().getValue() == "VALID" || tblgen_padding.cast<StringAttr>().getValue() == "EXPLICIT"))) return emitError(loc, "'tf._FusedConv2D' op ""attribute 'padding' failed to satisfy constraint: string attribute whose value is SAME, or VALID, or EXPLICIT");
  }
  {
  auto tblgen_explicit_paddings = odsAttrs.get("explicit_paddings");
  if (tblgen_explicit_paddings) {
    if (!(((tblgen_explicit_paddings.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_explicit_paddings.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'tf._FusedConv2D' op ""attribute 'explicit_paddings' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_data_format = odsAttrs.get("data_format");
  if (tblgen_data_format) {
    if (!((tblgen_data_format.cast<StringAttr>().getValue() == "NHWC" || tblgen_data_format.cast<StringAttr>().getValue() == "NCHW"))) return emitError(loc, "'tf._FusedConv2D' op ""attribute 'data_format' failed to satisfy constraint: 'NHWC' or 'NCHW' convnet data format");
  }
  }
  {
  auto tblgen_dilations = odsAttrs.get("dilations");
  if (tblgen_dilations) {
    if (!(((tblgen_dilations.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_dilations.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'tf._FusedConv2D' op ""attribute 'dilations' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_use_cudnn_on_gpu = odsAttrs.get("use_cudnn_on_gpu");
  if (tblgen_use_cudnn_on_gpu) {
    if (!((tblgen_use_cudnn_on_gpu.isa<::mlir::BoolAttr>()))) return emitError(loc, "'tf._FusedConv2D' op ""attribute 'use_cudnn_on_gpu' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_fused_ops = odsAttrs.get("fused_ops");
  if (tblgen_fused_ops) {
    if (!(((tblgen_fused_ops.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_fused_ops.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return (attr.isa<::mlir::StringAttr>()); })))) return emitError(loc, "'tf._FusedConv2D' op ""attribute 'fused_ops' failed to satisfy constraint: string array attribute");
  }
  }
  {
  auto tblgen_epsilon = odsAttrs.get("epsilon");
  if (tblgen_epsilon) {
    if (!(((tblgen_epsilon.isa<::mlir::FloatAttr>())) && ((tblgen_epsilon.cast<::mlir::FloatAttr>().getType().isF32())))) return emitError(loc, "'tf._FusedConv2D' op ""attribute 'epsilon' failed to satisfy constraint: 32-bit float attribute");
  }
  }
  {
  auto tblgen_leakyrelu_alpha = odsAttrs.get("leakyrelu_alpha");
  if (tblgen_leakyrelu_alpha) {
    if (!(((tblgen_leakyrelu_alpha.isa<::mlir::FloatAttr>())) && ((tblgen_leakyrelu_alpha.cast<::mlir::FloatAttr>().getType().isF32())))) return emitError(loc, "'tf._FusedConv2D' op ""attribute 'leakyrelu_alpha' failed to satisfy constraint: 32-bit float attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _FusedConv2DOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range _FusedConv2DOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _FusedConv2DOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value _FusedConv2DOp::filter() {
  return *getODSOperands(1).begin();
}

::mlir::Operation::operand_range _FusedConv2DOp::args() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange _FusedConv2DOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _FusedConv2DOp::filterMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _FusedConv2DOp::argsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _FusedConv2DOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _FusedConv2DOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _FusedConv2DOp::output() {
  return *getODSResults(0).begin();
}

::mlir::ArrayAttr _FusedConv2DOp::stridesAttr() {
  return (*this)->getAttr("strides").template cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr _FusedConv2DOp::strides() {
  auto attr = stridesAttr();
  return attr;
}

::mlir::StringAttr _FusedConv2DOp::paddingAttr() {
  return (*this)->getAttr("padding").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _FusedConv2DOp::padding() {
  auto attr = paddingAttr();
  return attr.getValue();
}

::mlir::ArrayAttr _FusedConv2DOp::explicit_paddingsAttr() {
  return (*this)->getAttr("explicit_paddings").template dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr _FusedConv2DOp::explicit_paddings() {
  auto attr = explicit_paddingsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getI64ArrayAttr({});
  return attr;
}

::mlir::StringAttr _FusedConv2DOp::data_formatAttr() {
  return (*this)->getAttr("data_format").template dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::StringRef _FusedConv2DOp::data_format() {
  auto attr = data_formatAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getStringAttr("NHWC").getValue();
  return attr.getValue();
}

::mlir::ArrayAttr _FusedConv2DOp::dilationsAttr() {
  return (*this)->getAttr("dilations").template dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr _FusedConv2DOp::dilations() {
  auto attr = dilationsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getI64ArrayAttr({1, 1, 1, 1});
  return attr;
}

::mlir::BoolAttr _FusedConv2DOp::use_cudnn_on_gpuAttr() {
  return (*this)->getAttr("use_cudnn_on_gpu").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool _FusedConv2DOp::use_cudnn_on_gpu() {
  auto attr = use_cudnn_on_gpuAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(true).getValue();
  return attr.getValue();
}

::mlir::ArrayAttr _FusedConv2DOp::fused_opsAttr() {
  return (*this)->getAttr("fused_ops").template dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr _FusedConv2DOp::fused_ops() {
  auto attr = fused_opsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getStrArrayAttr({});
  return attr;
}

::mlir::FloatAttr _FusedConv2DOp::epsilonAttr() {
  return (*this)->getAttr("epsilon").template dyn_cast_or_null<::mlir::FloatAttr>();
}

::llvm::APFloat _FusedConv2DOp::epsilon() {
  auto attr = epsilonAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getFloatAttr(::mlir::Builder((*this)->getContext()).getF32Type(), 0.0001f).getValue();
  return attr.getValue();
}

::mlir::FloatAttr _FusedConv2DOp::leakyrelu_alphaAttr() {
  return (*this)->getAttr("leakyrelu_alpha").template dyn_cast_or_null<::mlir::FloatAttr>();
}

::llvm::APFloat _FusedConv2DOp::leakyrelu_alpha() {
  auto attr = leakyrelu_alphaAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getFloatAttr(::mlir::Builder((*this)->getContext()).getF32Type(), 0.2f).getValue();
  return attr.getValue();
}

Type _FusedConv2DOp::T() {
  return mlir::getElementTypeOrSelf(*getODSOperands(0).begin());
}

size_t _FusedConv2DOp::num_args() {
  auto range = getODSOperands(2);
return std::distance(range.begin(), range.end());
}

bool _FusedConv2DOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "T") return true;
  if (name == "num_args") return true;
 return false;
}

::mlir::DictionaryAttr _FusedConv2DOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("T", ctx),
::mlir::TypeAttr::get(T())},
    {::mlir::Identifier::get("num_args", ctx),
odsBuilder.getI64IntegerAttr(num_args())}});
}

void _FusedConv2DOp::stridesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr("strides", attr);
}

void _FusedConv2DOp::paddingAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("padding", attr);
}

void _FusedConv2DOp::explicit_paddingsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr("explicit_paddings", attr);
}

void _FusedConv2DOp::data_formatAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("data_format", attr);
}

void _FusedConv2DOp::dilationsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr("dilations", attr);
}

void _FusedConv2DOp::use_cudnn_on_gpuAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("use_cudnn_on_gpu", attr);
}

void _FusedConv2DOp::fused_opsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr("fused_ops", attr);
}

void _FusedConv2DOp::epsilonAttr(::mlir::FloatAttr attr) {
  (*this)->setAttr("epsilon", attr);
}

void _FusedConv2DOp::leakyrelu_alphaAttr(::mlir::FloatAttr attr) {
  (*this)->setAttr("leakyrelu_alpha", attr);
}

void _FusedConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value filter, ::mlir::ValueRange args, ::mlir::ArrayAttr strides, ::mlir::StringAttr padding, ::mlir::ArrayAttr explicit_paddings, ::mlir::StringAttr data_format, ::mlir::ArrayAttr dilations, ::mlir::BoolAttr use_cudnn_on_gpu, ::mlir::ArrayAttr fused_ops, ::mlir::FloatAttr epsilon, ::mlir::FloatAttr leakyrelu_alpha) {
  odsState.addOperands(input);
  odsState.addOperands(filter);
  odsState.addOperands(args);
  odsState.addAttribute("strides", strides);
  odsState.addAttribute("padding", padding);
  odsState.addAttribute("explicit_paddings", explicit_paddings);
  odsState.addAttribute("data_format", data_format);
  odsState.addAttribute("dilations", dilations);
  odsState.addAttribute("use_cudnn_on_gpu", use_cudnn_on_gpu);
  odsState.addAttribute("fused_ops", fused_ops);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("leakyrelu_alpha", leakyrelu_alpha);
  odsState.addTypes(output);
}

void _FusedConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::ValueRange args, ::mlir::ArrayAttr strides, ::mlir::StringAttr padding, ::mlir::ArrayAttr explicit_paddings, ::mlir::StringAttr data_format, ::mlir::ArrayAttr dilations, ::mlir::BoolAttr use_cudnn_on_gpu, ::mlir::ArrayAttr fused_ops, ::mlir::FloatAttr epsilon, ::mlir::FloatAttr leakyrelu_alpha) {
  odsState.addOperands(input);
  odsState.addOperands(filter);
  odsState.addOperands(args);
  odsState.addAttribute("strides", strides);
  odsState.addAttribute("padding", padding);
  odsState.addAttribute("explicit_paddings", explicit_paddings);
  odsState.addAttribute("data_format", data_format);
  odsState.addAttribute("dilations", dilations);
  odsState.addAttribute("use_cudnn_on_gpu", use_cudnn_on_gpu);
  odsState.addAttribute("fused_ops", fused_ops);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("leakyrelu_alpha", leakyrelu_alpha);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _FusedConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::Value filter, ::mlir::ValueRange args, ::mlir::ArrayAttr strides, ::llvm::StringRef padding, ::mlir::ArrayAttr explicit_paddings, ::llvm::StringRef data_format, ::mlir::ArrayAttr dilations, bool use_cudnn_on_gpu, ::mlir::ArrayAttr fused_ops, ::llvm::APFloat epsilon, ::llvm::APFloat leakyrelu_alpha) {
  odsState.addOperands(input);
  odsState.addOperands(filter);
  odsState.addOperands(args);
  odsState.addAttribute("strides", strides);
  odsState.addAttribute("padding", odsBuilder.getStringAttr(padding));
  odsState.addAttribute("explicit_paddings", explicit_paddings);
  odsState.addAttribute("data_format", odsBuilder.getStringAttr(data_format));
  odsState.addAttribute("dilations", dilations);
  odsState.addAttribute("use_cudnn_on_gpu", odsBuilder.getBoolAttr(use_cudnn_on_gpu));
  odsState.addAttribute("fused_ops", fused_ops);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("leakyrelu_alpha", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), leakyrelu_alpha));
  odsState.addTypes(output);
}

void _FusedConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::ValueRange args, ::mlir::ArrayAttr strides, ::llvm::StringRef padding, ::mlir::ArrayAttr explicit_paddings, ::llvm::StringRef data_format, ::mlir::ArrayAttr dilations, bool use_cudnn_on_gpu, ::mlir::ArrayAttr fused_ops, ::llvm::APFloat epsilon, ::llvm::APFloat leakyrelu_alpha) {
  odsState.addOperands(input);
  odsState.addOperands(filter);
  odsState.addOperands(args);
  odsState.addAttribute("strides", strides);
  odsState.addAttribute("padding", odsBuilder.getStringAttr(padding));
  odsState.addAttribute("explicit_paddings", explicit_paddings);
  odsState.addAttribute("data_format", odsBuilder.getStringAttr(data_format));
  odsState.addAttribute("dilations", dilations);
  odsState.addAttribute("use_cudnn_on_gpu", odsBuilder.getBoolAttr(use_cudnn_on_gpu));
  odsState.addAttribute("fused_ops", fused_ops);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("leakyrelu_alpha", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), leakyrelu_alpha));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _FusedConv2DOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _FusedConv2DOp::verify() {
  if (failed(_FusedConv2DOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops4(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return ::mlir::success();
}

void _FusedConv2DOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_FusedMatMulOp definitions
//===----------------------------------------------------------------------===//

_FusedMatMulOpAdaptor::_FusedMatMulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_FusedMatMulOpAdaptor::_FusedMatMulOpAdaptor(_FusedMatMulOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _FusedMatMulOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _FusedMatMulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange _FusedMatMulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _FusedMatMulOpAdaptor::a() {
  return *getODSOperands(0).begin();
}

::mlir::Value _FusedMatMulOpAdaptor::b() {
  return *getODSOperands(1).begin();
}

::mlir::ValueRange _FusedMatMulOpAdaptor::args() {
  return getODSOperands(2);
}

::mlir::DictionaryAttr _FusedMatMulOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr _FusedMatMulOpAdaptor::transpose_a() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("transpose_a").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::BoolAttr _FusedMatMulOpAdaptor::transpose_b() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("transpose_b").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::ArrayAttr _FusedMatMulOpAdaptor::fused_ops() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("fused_ops").dyn_cast_or_null<::mlir::ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getStrArrayAttr({});
  return attr;
}

::mlir::FloatAttr _FusedMatMulOpAdaptor::epsilon() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::FloatAttr attr = odsAttrs.get("epsilon").dyn_cast_or_null<::mlir::FloatAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getFloatAttr(::mlir::Builder(odsAttrs.getContext()).getF32Type(), 0.0001f);
  return attr;
}

::mlir::FloatAttr _FusedMatMulOpAdaptor::leakyrelu_alpha() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::FloatAttr attr = odsAttrs.get("leakyrelu_alpha").dyn_cast_or_null<::mlir::FloatAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getFloatAttr(::mlir::Builder(odsAttrs.getContext()).getF32Type(), 0.2f);
  return attr;
}

::mlir::LogicalResult _FusedMatMulOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_transpose_a = odsAttrs.get("transpose_a");
  if (tblgen_transpose_a) {
    if (!((tblgen_transpose_a.isa<::mlir::BoolAttr>()))) return emitError(loc, "'tf._FusedMatMul' op ""attribute 'transpose_a' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_transpose_b = odsAttrs.get("transpose_b");
  if (tblgen_transpose_b) {
    if (!((tblgen_transpose_b.isa<::mlir::BoolAttr>()))) return emitError(loc, "'tf._FusedMatMul' op ""attribute 'transpose_b' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_fused_ops = odsAttrs.get("fused_ops");
  if (tblgen_fused_ops) {
    if (!(((tblgen_fused_ops.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_fused_ops.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return (attr.isa<::mlir::StringAttr>()); })))) return emitError(loc, "'tf._FusedMatMul' op ""attribute 'fused_ops' failed to satisfy constraint: string array attribute");
  }
  }
  {
  auto tblgen_epsilon = odsAttrs.get("epsilon");
  if (tblgen_epsilon) {
    if (!(((tblgen_epsilon.isa<::mlir::FloatAttr>())) && ((tblgen_epsilon.cast<::mlir::FloatAttr>().getType().isF32())))) return emitError(loc, "'tf._FusedMatMul' op ""attribute 'epsilon' failed to satisfy constraint: 32-bit float attribute");
  }
  }
  {
  auto tblgen_leakyrelu_alpha = odsAttrs.get("leakyrelu_alpha");
  if (tblgen_leakyrelu_alpha) {
    if (!(((tblgen_leakyrelu_alpha.isa<::mlir::FloatAttr>())) && ((tblgen_leakyrelu_alpha.cast<::mlir::FloatAttr>().getType().isF32())))) return emitError(loc, "'tf._FusedMatMul' op ""attribute 'leakyrelu_alpha' failed to satisfy constraint: 32-bit float attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _FusedMatMulOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range _FusedMatMulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _FusedMatMulOp::a() {
  return *getODSOperands(0).begin();
}

::mlir::Value _FusedMatMulOp::b() {
  return *getODSOperands(1).begin();
}

::mlir::Operation::operand_range _FusedMatMulOp::args() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange _FusedMatMulOp::aMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _FusedMatMulOp::bMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _FusedMatMulOp::argsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _FusedMatMulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _FusedMatMulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _FusedMatMulOp::product() {
  return *getODSResults(0).begin();
}

::mlir::BoolAttr _FusedMatMulOp::transpose_aAttr() {
  return (*this)->getAttr("transpose_a").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool _FusedMatMulOp::transpose_a() {
  auto attr = transpose_aAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::BoolAttr _FusedMatMulOp::transpose_bAttr() {
  return (*this)->getAttr("transpose_b").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool _FusedMatMulOp::transpose_b() {
  auto attr = transpose_bAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::ArrayAttr _FusedMatMulOp::fused_opsAttr() {
  return (*this)->getAttr("fused_ops").template dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr _FusedMatMulOp::fused_ops() {
  auto attr = fused_opsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getStrArrayAttr({});
  return attr;
}

::mlir::FloatAttr _FusedMatMulOp::epsilonAttr() {
  return (*this)->getAttr("epsilon").template dyn_cast_or_null<::mlir::FloatAttr>();
}

::llvm::APFloat _FusedMatMulOp::epsilon() {
  auto attr = epsilonAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getFloatAttr(::mlir::Builder((*this)->getContext()).getF32Type(), 0.0001f).getValue();
  return attr.getValue();
}

::mlir::FloatAttr _FusedMatMulOp::leakyrelu_alphaAttr() {
  return (*this)->getAttr("leakyrelu_alpha").template dyn_cast_or_null<::mlir::FloatAttr>();
}

::llvm::APFloat _FusedMatMulOp::leakyrelu_alpha() {
  auto attr = leakyrelu_alphaAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getFloatAttr(::mlir::Builder((*this)->getContext()).getF32Type(), 0.2f).getValue();
  return attr.getValue();
}

Type _FusedMatMulOp::T() {
  return mlir::getElementTypeOrSelf(*getODSOperands(0).begin());
}

size_t _FusedMatMulOp::num_args() {
  auto range = getODSOperands(2);
return std::distance(range.begin(), range.end());
}

bool _FusedMatMulOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "T") return true;
  if (name == "num_args") return true;
 return false;
}

::mlir::DictionaryAttr _FusedMatMulOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("T", ctx),
::mlir::TypeAttr::get(T())},
    {::mlir::Identifier::get("num_args", ctx),
odsBuilder.getI64IntegerAttr(num_args())}});
}

void _FusedMatMulOp::transpose_aAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("transpose_a", attr);
}

void _FusedMatMulOp::transpose_bAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("transpose_b", attr);
}

void _FusedMatMulOp::fused_opsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr("fused_ops", attr);
}

void _FusedMatMulOp::epsilonAttr(::mlir::FloatAttr attr) {
  (*this)->setAttr("epsilon", attr);
}

void _FusedMatMulOp::leakyrelu_alphaAttr(::mlir::FloatAttr attr) {
  (*this)->setAttr("leakyrelu_alpha", attr);
}

void _FusedMatMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type product, ::mlir::Value a, ::mlir::Value b, ::mlir::ValueRange args, ::mlir::BoolAttr transpose_a, ::mlir::BoolAttr transpose_b, ::mlir::ArrayAttr fused_ops, ::mlir::FloatAttr epsilon, ::mlir::FloatAttr leakyrelu_alpha) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(args);
  odsState.addAttribute("transpose_a", transpose_a);
  odsState.addAttribute("transpose_b", transpose_b);
  odsState.addAttribute("fused_ops", fused_ops);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("leakyrelu_alpha", leakyrelu_alpha);
  odsState.addTypes(product);
}

void _FusedMatMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::ValueRange args, ::mlir::BoolAttr transpose_a, ::mlir::BoolAttr transpose_b, ::mlir::ArrayAttr fused_ops, ::mlir::FloatAttr epsilon, ::mlir::FloatAttr leakyrelu_alpha) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(args);
  odsState.addAttribute("transpose_a", transpose_a);
  odsState.addAttribute("transpose_b", transpose_b);
  odsState.addAttribute("fused_ops", fused_ops);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("leakyrelu_alpha", leakyrelu_alpha);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _FusedMatMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type product, ::mlir::Value a, ::mlir::Value b, ::mlir::ValueRange args, bool transpose_a, bool transpose_b, ::mlir::ArrayAttr fused_ops, ::llvm::APFloat epsilon, ::llvm::APFloat leakyrelu_alpha) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(args);
  odsState.addAttribute("transpose_a", odsBuilder.getBoolAttr(transpose_a));
  odsState.addAttribute("transpose_b", odsBuilder.getBoolAttr(transpose_b));
  odsState.addAttribute("fused_ops", fused_ops);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("leakyrelu_alpha", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), leakyrelu_alpha));
  odsState.addTypes(product);
}

void _FusedMatMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::ValueRange args, bool transpose_a, bool transpose_b, ::mlir::ArrayAttr fused_ops, ::llvm::APFloat epsilon, ::llvm::APFloat leakyrelu_alpha) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(args);
  odsState.addAttribute("transpose_a", odsBuilder.getBoolAttr(transpose_a));
  odsState.addAttribute("transpose_b", odsBuilder.getBoolAttr(transpose_b));
  odsState.addAttribute("fused_ops", fused_ops);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("leakyrelu_alpha", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), leakyrelu_alpha));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _FusedMatMulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _FusedMatMulOp::verify() {
  if (failed(_FusedMatMulOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops6(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops6(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops7(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops6(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return ::mlir::success();
}

void _FusedMatMulOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_HostRecvOp definitions
//===----------------------------------------------------------------------===//

_HostRecvOpAdaptor::_HostRecvOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_HostRecvOpAdaptor::_HostRecvOpAdaptor(_HostRecvOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _HostRecvOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _HostRecvOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange _HostRecvOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr _HostRecvOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr _HostRecvOpAdaptor::tensor_name() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("tensor_name").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::StringAttr _HostRecvOpAdaptor::send_device() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("send_device").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::IntegerAttr _HostRecvOpAdaptor::send_device_incarnation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("send_device_incarnation").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::StringAttr _HostRecvOpAdaptor::recv_device() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("recv_device").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::BoolAttr _HostRecvOpAdaptor::client_terminated() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("client_terminated").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::LogicalResult _HostRecvOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_tensor_name = odsAttrs.get("tensor_name");
  if (!tblgen_tensor_name) return emitError(loc, "'tf._HostRecv' op ""requires attribute 'tensor_name'");
    if (!((tblgen_tensor_name.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._HostRecv' op ""attribute 'tensor_name' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_send_device = odsAttrs.get("send_device");
  if (!tblgen_send_device) return emitError(loc, "'tf._HostRecv' op ""requires attribute 'send_device'");
    if (!((tblgen_send_device.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._HostRecv' op ""attribute 'send_device' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_send_device_incarnation = odsAttrs.get("send_device_incarnation");
  if (!tblgen_send_device_incarnation) return emitError(loc, "'tf._HostRecv' op ""requires attribute 'send_device_incarnation'");
    if (!(((tblgen_send_device_incarnation.isa<::mlir::IntegerAttr>())) && ((tblgen_send_device_incarnation.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'tf._HostRecv' op ""attribute 'send_device_incarnation' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_recv_device = odsAttrs.get("recv_device");
  if (!tblgen_recv_device) return emitError(loc, "'tf._HostRecv' op ""requires attribute 'recv_device'");
    if (!((tblgen_recv_device.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._HostRecv' op ""attribute 'recv_device' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_client_terminated = odsAttrs.get("client_terminated");
  if (tblgen_client_terminated) {
    if (!((tblgen_client_terminated.isa<::mlir::BoolAttr>()))) return emitError(loc, "'tf._HostRecv' op ""attribute 'client_terminated' failed to satisfy constraint: bool attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _HostRecvOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range _HostRecvOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> _HostRecvOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _HostRecvOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _HostRecvOp::tensor() {
  return *getODSResults(0).begin();
}

::mlir::StringAttr _HostRecvOp::tensor_nameAttr() {
  return (*this)->getAttr("tensor_name").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _HostRecvOp::tensor_name() {
  auto attr = tensor_nameAttr();
  return attr.getValue();
}

::mlir::StringAttr _HostRecvOp::send_deviceAttr() {
  return (*this)->getAttr("send_device").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _HostRecvOp::send_device() {
  auto attr = send_deviceAttr();
  return attr.getValue();
}

::mlir::IntegerAttr _HostRecvOp::send_device_incarnationAttr() {
  return (*this)->getAttr("send_device_incarnation").template cast<::mlir::IntegerAttr>();
}

uint64_t _HostRecvOp::send_device_incarnation() {
  auto attr = send_device_incarnationAttr();
  return attr.getValue().getZExtValue();
}

::mlir::StringAttr _HostRecvOp::recv_deviceAttr() {
  return (*this)->getAttr("recv_device").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _HostRecvOp::recv_device() {
  auto attr = recv_deviceAttr();
  return attr.getValue();
}

::mlir::BoolAttr _HostRecvOp::client_terminatedAttr() {
  return (*this)->getAttr("client_terminated").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool _HostRecvOp::client_terminated() {
  auto attr = client_terminatedAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

Type _HostRecvOp::tensor_type() {
  return mlir::getElementTypeOrSelf(*getODSResults(0).begin());
}

bool _HostRecvOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "tensor_type") return true;
 return false;
}

::mlir::DictionaryAttr _HostRecvOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("tensor_type", ctx),
::mlir::TypeAttr::get(tensor_type())}});
}

void _HostRecvOp::tensor_nameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("tensor_name", attr);
}

void _HostRecvOp::send_deviceAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("send_device", attr);
}

void _HostRecvOp::send_device_incarnationAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("send_device_incarnation", attr);
}

void _HostRecvOp::recv_deviceAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("recv_device", attr);
}

void _HostRecvOp::client_terminatedAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("client_terminated", attr);
}

void _HostRecvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tensor, ::mlir::StringAttr tensor_name, ::mlir::StringAttr send_device, ::mlir::IntegerAttr send_device_incarnation, ::mlir::StringAttr recv_device, ::mlir::BoolAttr client_terminated) {
  odsState.addAttribute("tensor_name", tensor_name);
  odsState.addAttribute("send_device", send_device);
  odsState.addAttribute("send_device_incarnation", send_device_incarnation);
  odsState.addAttribute("recv_device", recv_device);
  odsState.addAttribute("client_terminated", client_terminated);
  odsState.addTypes(tensor);
}

void _HostRecvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr tensor_name, ::mlir::StringAttr send_device, ::mlir::IntegerAttr send_device_incarnation, ::mlir::StringAttr recv_device, ::mlir::BoolAttr client_terminated) {
  odsState.addAttribute("tensor_name", tensor_name);
  odsState.addAttribute("send_device", send_device);
  odsState.addAttribute("send_device_incarnation", send_device_incarnation);
  odsState.addAttribute("recv_device", recv_device);
  odsState.addAttribute("client_terminated", client_terminated);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _HostRecvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tensor, ::llvm::StringRef tensor_name, ::llvm::StringRef send_device, uint64_t send_device_incarnation, ::llvm::StringRef recv_device, bool client_terminated) {
  odsState.addAttribute("tensor_name", odsBuilder.getStringAttr(tensor_name));
  odsState.addAttribute("send_device", odsBuilder.getStringAttr(send_device));
  odsState.addAttribute("send_device_incarnation", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), send_device_incarnation));
  odsState.addAttribute("recv_device", odsBuilder.getStringAttr(recv_device));
  odsState.addAttribute("client_terminated", odsBuilder.getBoolAttr(client_terminated));
  odsState.addTypes(tensor);
}

void _HostRecvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef tensor_name, ::llvm::StringRef send_device, uint64_t send_device_incarnation, ::llvm::StringRef recv_device, bool client_terminated) {
  odsState.addAttribute("tensor_name", odsBuilder.getStringAttr(tensor_name));
  odsState.addAttribute("send_device", odsBuilder.getStringAttr(send_device));
  odsState.addAttribute("send_device_incarnation", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), send_device_incarnation));
  odsState.addAttribute("recv_device", odsBuilder.getStringAttr(recv_device));
  odsState.addAttribute("client_terminated", odsBuilder.getBoolAttr(client_terminated));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _HostRecvOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _HostRecvOp::verify() {
  if (failed(_HostRecvOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops8(getOperation(), v.getType(), "result", index)))
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
// ::mlir::TF::_HostSendOp definitions
//===----------------------------------------------------------------------===//

_HostSendOpAdaptor::_HostSendOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_HostSendOpAdaptor::_HostSendOpAdaptor(_HostSendOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _HostSendOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _HostSendOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange _HostSendOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _HostSendOpAdaptor::tensor() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr _HostSendOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr _HostSendOpAdaptor::tensor_name() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("tensor_name").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::StringAttr _HostSendOpAdaptor::send_device() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("send_device").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::IntegerAttr _HostSendOpAdaptor::send_device_incarnation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("send_device_incarnation").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::StringAttr _HostSendOpAdaptor::recv_device() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("recv_device").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::BoolAttr _HostSendOpAdaptor::client_terminated() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("client_terminated").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::LogicalResult _HostSendOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_tensor_name = odsAttrs.get("tensor_name");
  if (!tblgen_tensor_name) return emitError(loc, "'tf._HostSend' op ""requires attribute 'tensor_name'");
    if (!((tblgen_tensor_name.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._HostSend' op ""attribute 'tensor_name' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_send_device = odsAttrs.get("send_device");
  if (!tblgen_send_device) return emitError(loc, "'tf._HostSend' op ""requires attribute 'send_device'");
    if (!((tblgen_send_device.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._HostSend' op ""attribute 'send_device' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_send_device_incarnation = odsAttrs.get("send_device_incarnation");
  if (!tblgen_send_device_incarnation) return emitError(loc, "'tf._HostSend' op ""requires attribute 'send_device_incarnation'");
    if (!(((tblgen_send_device_incarnation.isa<::mlir::IntegerAttr>())) && ((tblgen_send_device_incarnation.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'tf._HostSend' op ""attribute 'send_device_incarnation' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_recv_device = odsAttrs.get("recv_device");
  if (!tblgen_recv_device) return emitError(loc, "'tf._HostSend' op ""requires attribute 'recv_device'");
    if (!((tblgen_recv_device.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._HostSend' op ""attribute 'recv_device' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_client_terminated = odsAttrs.get("client_terminated");
  if (tblgen_client_terminated) {
    if (!((tblgen_client_terminated.isa<::mlir::BoolAttr>()))) return emitError(loc, "'tf._HostSend' op ""attribute 'client_terminated' failed to satisfy constraint: bool attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _HostSendOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range _HostSendOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _HostSendOp::tensor() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange _HostSendOp::tensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _HostSendOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _HostSendOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr _HostSendOp::tensor_nameAttr() {
  return (*this)->getAttr("tensor_name").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _HostSendOp::tensor_name() {
  auto attr = tensor_nameAttr();
  return attr.getValue();
}

::mlir::StringAttr _HostSendOp::send_deviceAttr() {
  return (*this)->getAttr("send_device").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _HostSendOp::send_device() {
  auto attr = send_deviceAttr();
  return attr.getValue();
}

::mlir::IntegerAttr _HostSendOp::send_device_incarnationAttr() {
  return (*this)->getAttr("send_device_incarnation").template cast<::mlir::IntegerAttr>();
}

uint64_t _HostSendOp::send_device_incarnation() {
  auto attr = send_device_incarnationAttr();
  return attr.getValue().getZExtValue();
}

::mlir::StringAttr _HostSendOp::recv_deviceAttr() {
  return (*this)->getAttr("recv_device").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _HostSendOp::recv_device() {
  auto attr = recv_deviceAttr();
  return attr.getValue();
}

::mlir::BoolAttr _HostSendOp::client_terminatedAttr() {
  return (*this)->getAttr("client_terminated").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool _HostSendOp::client_terminated() {
  auto attr = client_terminatedAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

Type _HostSendOp::T() {
  return mlir::getElementTypeOrSelf(*getODSOperands(0).begin());
}

bool _HostSendOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "T") return true;
 return false;
}

::mlir::DictionaryAttr _HostSendOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("T", ctx),
::mlir::TypeAttr::get(T())}});
}

void _HostSendOp::tensor_nameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("tensor_name", attr);
}

void _HostSendOp::send_deviceAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("send_device", attr);
}

void _HostSendOp::send_device_incarnationAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("send_device_incarnation", attr);
}

void _HostSendOp::recv_deviceAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("recv_device", attr);
}

void _HostSendOp::client_terminatedAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("client_terminated", attr);
}

void _HostSendOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tensor, ::mlir::StringAttr tensor_name, ::mlir::StringAttr send_device, ::mlir::IntegerAttr send_device_incarnation, ::mlir::StringAttr recv_device, ::mlir::BoolAttr client_terminated) {
  odsState.addOperands(tensor);
  odsState.addAttribute("tensor_name", tensor_name);
  odsState.addAttribute("send_device", send_device);
  odsState.addAttribute("send_device_incarnation", send_device_incarnation);
  odsState.addAttribute("recv_device", recv_device);
  odsState.addAttribute("client_terminated", client_terminated);
}

void _HostSendOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::StringAttr tensor_name, ::mlir::StringAttr send_device, ::mlir::IntegerAttr send_device_incarnation, ::mlir::StringAttr recv_device, ::mlir::BoolAttr client_terminated) {
  odsState.addOperands(tensor);
  odsState.addAttribute("tensor_name", tensor_name);
  odsState.addAttribute("send_device", send_device);
  odsState.addAttribute("send_device_incarnation", send_device_incarnation);
  odsState.addAttribute("recv_device", recv_device);
  odsState.addAttribute("client_terminated", client_terminated);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _HostSendOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tensor, ::llvm::StringRef tensor_name, ::llvm::StringRef send_device, uint64_t send_device_incarnation, ::llvm::StringRef recv_device, bool client_terminated) {
  odsState.addOperands(tensor);
  odsState.addAttribute("tensor_name", odsBuilder.getStringAttr(tensor_name));
  odsState.addAttribute("send_device", odsBuilder.getStringAttr(send_device));
  odsState.addAttribute("send_device_incarnation", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), send_device_incarnation));
  odsState.addAttribute("recv_device", odsBuilder.getStringAttr(recv_device));
  odsState.addAttribute("client_terminated", odsBuilder.getBoolAttr(client_terminated));
}

void _HostSendOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::llvm::StringRef tensor_name, ::llvm::StringRef send_device, uint64_t send_device_incarnation, ::llvm::StringRef recv_device, bool client_terminated) {
  odsState.addOperands(tensor);
  odsState.addAttribute("tensor_name", odsBuilder.getStringAttr(tensor_name));
  odsState.addAttribute("send_device", odsBuilder.getStringAttr(send_device));
  odsState.addAttribute("send_device_incarnation", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), send_device_incarnation));
  odsState.addAttribute("recv_device", odsBuilder.getStringAttr(recv_device));
  odsState.addAttribute("client_terminated", odsBuilder.getBoolAttr(client_terminated));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _HostSendOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _HostSendOp::verify() {
  if (failed(_HostSendOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops8(getOperation(), v.getType(), "operand", index)))
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
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_ListToArrayOp definitions
//===----------------------------------------------------------------------===//

_ListToArrayOpAdaptor::_ListToArrayOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_ListToArrayOpAdaptor::_ListToArrayOpAdaptor(_ListToArrayOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _ListToArrayOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _ListToArrayOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange _ListToArrayOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange _ListToArrayOpAdaptor::input() {
  return getODSOperands(0);
}

::mlir::DictionaryAttr _ListToArrayOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult _ListToArrayOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _ListToArrayOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range _ListToArrayOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range _ListToArrayOp::input() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange _ListToArrayOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _ListToArrayOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range _ListToArrayOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range _ListToArrayOp::output() {
  return getODSResults(0);
}

Type _ListToArrayOp::T() {
  return mlir::getElementTypeOrSelf(*getODSResults(0).begin());
}

mlir::OperandElementTypeRange _ListToArrayOp::Tin() {
  auto values = getODSOperands(0);
return {mlir::OperandElementTypeIterator(values.begin()), mlir::OperandElementTypeIterator(values.end())};
}

size_t _ListToArrayOp::N() {
  auto range = getODSResults(0);
return std::distance(range.begin(), range.end());
}

bool _ListToArrayOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "T") return true;
  if (name == "Tin") return true;
  if (name == "N") return true;
 return false;
}

::mlir::DictionaryAttr _ListToArrayOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("T", ctx),
::mlir::TypeAttr::get(T())},
    {::mlir::Identifier::get("Tin", ctx),
ArrayAttr::get(ctx, 
    [&]() {
      llvm::SmallVector<Attribute, 4> ret;
      for (auto t : Tin())
        ret.push_back(TypeAttr::get(t));
      return ret;
    }())},
    {::mlir::Identifier::get("N", ctx),
odsBuilder.getI64IntegerAttr(N())}});
}

void _ListToArrayOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _ListToArrayOp::verify() {
  if (failed(_ListToArrayOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return ::mlir::success();
}

void _ListToArrayOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_RecvTPUEmbeddingActivationsOp definitions
//===----------------------------------------------------------------------===//

_RecvTPUEmbeddingActivationsOpAdaptor::_RecvTPUEmbeddingActivationsOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_RecvTPUEmbeddingActivationsOpAdaptor::_RecvTPUEmbeddingActivationsOpAdaptor(_RecvTPUEmbeddingActivationsOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _RecvTPUEmbeddingActivationsOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _RecvTPUEmbeddingActivationsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange _RecvTPUEmbeddingActivationsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _RecvTPUEmbeddingActivationsOpAdaptor::deduplication_data() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr _RecvTPUEmbeddingActivationsOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr _RecvTPUEmbeddingActivationsOpAdaptor::config() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("config").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult _RecvTPUEmbeddingActivationsOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_config = odsAttrs.get("config");
  if (!tblgen_config) return emitError(loc, "'tf._RecvTPUEmbeddingActivations' op ""requires attribute 'config'");
    if (!((tblgen_config.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._RecvTPUEmbeddingActivations' op ""attribute 'config' failed to satisfy constraint: string attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _RecvTPUEmbeddingActivationsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range _RecvTPUEmbeddingActivationsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _RecvTPUEmbeddingActivationsOp::deduplication_data() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange _RecvTPUEmbeddingActivationsOp::deduplication_dataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _RecvTPUEmbeddingActivationsOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range _RecvTPUEmbeddingActivationsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range _RecvTPUEmbeddingActivationsOp::outputs() {
  return getODSResults(0);
}

::mlir::StringAttr _RecvTPUEmbeddingActivationsOp::configAttr() {
  return (*this)->getAttr("config").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _RecvTPUEmbeddingActivationsOp::config() {
  auto attr = configAttr();
  return attr.getValue();
}

size_t _RecvTPUEmbeddingActivationsOp::num_tables() {
  auto range = getODSResults(0);
return std::distance(range.begin(), range.end());
}

bool _RecvTPUEmbeddingActivationsOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "num_tables") return true;
 return false;
}

::mlir::DictionaryAttr _RecvTPUEmbeddingActivationsOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("num_tables", ctx),
odsBuilder.getI64IntegerAttr(num_tables())}});
}

void _RecvTPUEmbeddingActivationsOp::configAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("config", attr);
}

void _RecvTPUEmbeddingActivationsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::Value deduplication_data, ::mlir::StringAttr config) {
  odsState.addOperands(deduplication_data);
  odsState.addAttribute("config", config);
  odsState.addTypes(outputs);
}

void _RecvTPUEmbeddingActivationsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::Value deduplication_data, ::llvm::StringRef config) {
  odsState.addOperands(deduplication_data);
  odsState.addAttribute("config", odsBuilder.getStringAttr(config));
  odsState.addTypes(outputs);
}

void _RecvTPUEmbeddingActivationsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _RecvTPUEmbeddingActivationsOp::verify() {
  if (failed(_RecvTPUEmbeddingActivationsOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops9(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops10(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return ::mlir::success();
}

void _RecvTPUEmbeddingActivationsOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::TF::ResourceEffects::TPUEmbedding::get());
}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_RecvTPUEmbeddingDeduplicationDataOp definitions
//===----------------------------------------------------------------------===//

_RecvTPUEmbeddingDeduplicationDataOpAdaptor::_RecvTPUEmbeddingDeduplicationDataOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_RecvTPUEmbeddingDeduplicationDataOpAdaptor::_RecvTPUEmbeddingDeduplicationDataOpAdaptor(_RecvTPUEmbeddingDeduplicationDataOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _RecvTPUEmbeddingDeduplicationDataOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _RecvTPUEmbeddingDeduplicationDataOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange _RecvTPUEmbeddingDeduplicationDataOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr _RecvTPUEmbeddingDeduplicationDataOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr _RecvTPUEmbeddingDeduplicationDataOpAdaptor::config() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("config").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult _RecvTPUEmbeddingDeduplicationDataOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_config = odsAttrs.get("config");
  if (!tblgen_config) return emitError(loc, "'tf._RecvTPUEmbeddingDeduplicationData' op ""requires attribute 'config'");
    if (!((tblgen_config.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._RecvTPUEmbeddingDeduplicationData' op ""attribute 'config' failed to satisfy constraint: string attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _RecvTPUEmbeddingDeduplicationDataOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range _RecvTPUEmbeddingDeduplicationDataOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> _RecvTPUEmbeddingDeduplicationDataOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _RecvTPUEmbeddingDeduplicationDataOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _RecvTPUEmbeddingDeduplicationDataOp::output() {
  return *getODSResults(0).begin();
}

::mlir::StringAttr _RecvTPUEmbeddingDeduplicationDataOp::configAttr() {
  return (*this)->getAttr("config").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _RecvTPUEmbeddingDeduplicationDataOp::config() {
  auto attr = configAttr();
  return attr.getValue();
}

void _RecvTPUEmbeddingDeduplicationDataOp::configAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("config", attr);
}

void _RecvTPUEmbeddingDeduplicationDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::StringAttr config) {
  odsState.addAttribute("config", config);
  odsState.addTypes(output);
}

void _RecvTPUEmbeddingDeduplicationDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr config) {
  odsState.addAttribute("config", config);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _RecvTPUEmbeddingDeduplicationDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::llvm::StringRef config) {
  odsState.addAttribute("config", odsBuilder.getStringAttr(config));
  odsState.addTypes(output);
}

void _RecvTPUEmbeddingDeduplicationDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef config) {
  odsState.addAttribute("config", odsBuilder.getStringAttr(config));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _RecvTPUEmbeddingDeduplicationDataOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _RecvTPUEmbeddingDeduplicationDataOp::verify() {
  if (failed(_RecvTPUEmbeddingDeduplicationDataOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops9(getOperation(), v.getType(), "result", index)))
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
// ::mlir::TF::_SendTPUEmbeddingGradientsOp definitions
//===----------------------------------------------------------------------===//

_SendTPUEmbeddingGradientsOpAdaptor::_SendTPUEmbeddingGradientsOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_SendTPUEmbeddingGradientsOpAdaptor::_SendTPUEmbeddingGradientsOpAdaptor(_SendTPUEmbeddingGradientsOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _SendTPUEmbeddingGradientsOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _SendTPUEmbeddingGradientsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();

  auto sizeAttrValues = sizeAttr.getValues<uint32_t>();
  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += *(sizeAttrValues.begin() + i);
  unsigned size = *(sizeAttrValues.begin() + index);
  return {start, size};
}

::mlir::ValueRange _SendTPUEmbeddingGradientsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange _SendTPUEmbeddingGradientsOpAdaptor::gradients() {
  return getODSOperands(0);
}

::mlir::ValueRange _SendTPUEmbeddingGradientsOpAdaptor::learning_rates() {
  return getODSOperands(1);
}

::mlir::Value _SendTPUEmbeddingGradientsOpAdaptor::deduplication_data() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr _SendTPUEmbeddingGradientsOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr _SendTPUEmbeddingGradientsOpAdaptor::config() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("config").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult _SendTPUEmbeddingGradientsOpAdaptor::verify(::mlir::Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();
    auto numElements = sizeAttr.getType().cast<::mlir::ShapedType>().getNumElements();
    if (numElements != 3)
      return emitError(loc, "'operand_segment_sizes' attribute for specifying operand segments "
                       "must have 3 elements, but got ") << numElements;
  }
    {
  auto tblgen_config = odsAttrs.get("config");
  if (!tblgen_config) return emitError(loc, "'tf._SendTPUEmbeddingGradients' op ""requires attribute 'config'");
    if (!((tblgen_config.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._SendTPUEmbeddingGradients' op ""attribute 'config' failed to satisfy constraint: string attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _SendTPUEmbeddingGradientsOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = (*this)->getAttr("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();

  auto sizeAttrValues = sizeAttr.getValues<uint32_t>();
  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += *(sizeAttrValues.begin() + i);
  unsigned size = *(sizeAttrValues.begin() + index);
  return {start, size};
}

::mlir::Operation::operand_range _SendTPUEmbeddingGradientsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range _SendTPUEmbeddingGradientsOp::gradients() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range _SendTPUEmbeddingGradientsOp::learning_rates() {
  return getODSOperands(1);
}

::mlir::Value _SendTPUEmbeddingGradientsOp::deduplication_data() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange _SendTPUEmbeddingGradientsOp::gradientsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getAttrDictionary().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange _SendTPUEmbeddingGradientsOp::learning_ratesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getAttrDictionary().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange _SendTPUEmbeddingGradientsOp::deduplication_dataMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getAttrDictionary().getNamed("operand_segment_sizes")));
}

std::pair<unsigned, unsigned> _SendTPUEmbeddingGradientsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _SendTPUEmbeddingGradientsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr _SendTPUEmbeddingGradientsOp::configAttr() {
  return (*this)->getAttr("config").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _SendTPUEmbeddingGradientsOp::config() {
  auto attr = configAttr();
  return attr.getValue();
}

size_t _SendTPUEmbeddingGradientsOp::NumTables() {
  auto range = getODSOperands(0);
return std::distance(range.begin(), range.end());
}

size_t _SendTPUEmbeddingGradientsOp::NumLearningRateTags() {
  auto range = getODSOperands(1);
return std::distance(range.begin(), range.end());
}

bool _SendTPUEmbeddingGradientsOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "NumTables") return true;
  if (name == "NumLearningRateTags") return true;
 return false;
}

::mlir::DictionaryAttr _SendTPUEmbeddingGradientsOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("NumTables", ctx),
odsBuilder.getI64IntegerAttr(NumTables())},
    {::mlir::Identifier::get("NumLearningRateTags", ctx),
odsBuilder.getI64IntegerAttr(NumLearningRateTags())}});
}

void _SendTPUEmbeddingGradientsOp::configAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("config", attr);
}

void _SendTPUEmbeddingGradientsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange gradients, ::mlir::ValueRange learning_rates, ::mlir::Value deduplication_data, ::mlir::StringAttr config) {
  odsState.addOperands(gradients);
  odsState.addOperands(learning_rates);
  odsState.addOperands(deduplication_data);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({static_cast<int32_t>(gradients.size()), static_cast<int32_t>(learning_rates.size()), 1}));
  odsState.addAttribute("config", config);
}

void _SendTPUEmbeddingGradientsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange gradients, ::mlir::ValueRange learning_rates, ::mlir::Value deduplication_data, ::mlir::StringAttr config) {
  odsState.addOperands(gradients);
  odsState.addOperands(learning_rates);
  odsState.addOperands(deduplication_data);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({static_cast<int32_t>(gradients.size()), static_cast<int32_t>(learning_rates.size()), 1}));
  odsState.addAttribute("config", config);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _SendTPUEmbeddingGradientsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange gradients, ::mlir::ValueRange learning_rates, ::mlir::Value deduplication_data, ::llvm::StringRef config) {
  odsState.addOperands(gradients);
  odsState.addOperands(learning_rates);
  odsState.addOperands(deduplication_data);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({static_cast<int32_t>(gradients.size()), static_cast<int32_t>(learning_rates.size()), 1}));
  odsState.addAttribute("config", odsBuilder.getStringAttr(config));
}

void _SendTPUEmbeddingGradientsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange gradients, ::mlir::ValueRange learning_rates, ::mlir::Value deduplication_data, ::llvm::StringRef config) {
  odsState.addOperands(gradients);
  odsState.addOperands(learning_rates);
  odsState.addOperands(deduplication_data);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({static_cast<int32_t>(gradients.size()), static_cast<int32_t>(learning_rates.size()), 1}));
  odsState.addAttribute("config", odsBuilder.getStringAttr(config));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _SendTPUEmbeddingGradientsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _SendTPUEmbeddingGradientsOp::verify() {
  if (failed(_SendTPUEmbeddingGradientsOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops9(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void _SendTPUEmbeddingGradientsOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::TF::ResourceEffects::TPUEmbedding::get());
}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_TPUCompileMlirOp definitions
//===----------------------------------------------------------------------===//

_TPUCompileMlirOpAdaptor::_TPUCompileMlirOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_TPUCompileMlirOpAdaptor::_TPUCompileMlirOpAdaptor(_TPUCompileMlirOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _TPUCompileMlirOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _TPUCompileMlirOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange _TPUCompileMlirOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange _TPUCompileMlirOpAdaptor::dynamic_shapes() {
  return getODSOperands(0);
}

::mlir::DictionaryAttr _TPUCompileMlirOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr _TPUCompileMlirOpAdaptor::mlir_module() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("mlir_module").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::StringAttr _TPUCompileMlirOpAdaptor::metadata() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("metadata").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult _TPUCompileMlirOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_mlir_module = odsAttrs.get("mlir_module");
  if (!tblgen_mlir_module) return emitError(loc, "'tf._TPUCompileMlir' op ""requires attribute 'mlir_module'");
    if (!((tblgen_mlir_module.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._TPUCompileMlir' op ""attribute 'mlir_module' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_metadata = odsAttrs.get("metadata");
  if (!tblgen_metadata) return emitError(loc, "'tf._TPUCompileMlir' op ""requires attribute 'metadata'");
    if (!((tblgen_metadata.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._TPUCompileMlir' op ""attribute 'metadata' failed to satisfy constraint: string attribute");
  }
  return ::mlir::success();
}

void _TPUCompileMlirOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!llvm::empty(resultGroup0))
    setNameFn(*resultGroup0.begin(), "compilation_status");
  auto resultGroup1 = getODSResults(1);
  if (!llvm::empty(resultGroup1))
    setNameFn(*resultGroup1.begin(), "program");
}



std::pair<unsigned, unsigned> _TPUCompileMlirOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range _TPUCompileMlirOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range _TPUCompileMlirOp::dynamic_shapes() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange _TPUCompileMlirOp::dynamic_shapesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _TPUCompileMlirOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range _TPUCompileMlirOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _TPUCompileMlirOp::compilation_status() {
  return *getODSResults(0).begin();
}

::mlir::Operation::result_range _TPUCompileMlirOp::program() {
  return getODSResults(1);
}

::mlir::StringAttr _TPUCompileMlirOp::mlir_moduleAttr() {
  return (*this)->getAttr("mlir_module").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _TPUCompileMlirOp::mlir_module() {
  auto attr = mlir_moduleAttr();
  return attr.getValue();
}

::mlir::StringAttr _TPUCompileMlirOp::metadataAttr() {
  return (*this)->getAttr("metadata").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _TPUCompileMlirOp::metadata() {
  auto attr = metadataAttr();
  return attr.getValue();
}

size_t _TPUCompileMlirOp::num_computations() {
  auto range = getODSResults(1);
return std::distance(range.begin(), range.end());
}

size_t _TPUCompileMlirOp::NumDynamicShapes() {
  auto range = getODSOperands(0);
return std::distance(range.begin(), range.end());
}

bool _TPUCompileMlirOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "num_computations") return true;
  if (name == "NumDynamicShapes") return true;
 return false;
}

::mlir::DictionaryAttr _TPUCompileMlirOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("num_computations", ctx),
odsBuilder.getI64IntegerAttr(num_computations())},
    {::mlir::Identifier::get("NumDynamicShapes", ctx),
odsBuilder.getI64IntegerAttr(NumDynamicShapes())}});
}

void _TPUCompileMlirOp::mlir_moduleAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("mlir_module", attr);
}

void _TPUCompileMlirOp::metadataAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("metadata", attr);
}

void _TPUCompileMlirOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type compilation_status, ::mlir::TypeRange program, ::mlir::ValueRange dynamic_shapes, ::mlir::StringAttr mlir_module, ::mlir::StringAttr metadata) {
  odsState.addOperands(dynamic_shapes);
  odsState.addAttribute("mlir_module", mlir_module);
  odsState.addAttribute("metadata", metadata);
  odsState.addTypes(compilation_status);
  odsState.addTypes(program);
}

void _TPUCompileMlirOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange dynamic_shapes, ::mlir::StringAttr mlir_module, ::mlir::StringAttr metadata) {
  odsState.addOperands(dynamic_shapes);
  odsState.addAttribute("mlir_module", mlir_module);
  odsState.addAttribute("metadata", metadata);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _TPUCompileMlirOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type compilation_status, ::mlir::TypeRange program, ::mlir::ValueRange dynamic_shapes, ::llvm::StringRef mlir_module, ::llvm::StringRef metadata) {
  odsState.addOperands(dynamic_shapes);
  odsState.addAttribute("mlir_module", odsBuilder.getStringAttr(mlir_module));
  odsState.addAttribute("metadata", odsBuilder.getStringAttr(metadata));
  odsState.addTypes(compilation_status);
  odsState.addTypes(program);
}

void _TPUCompileMlirOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange dynamic_shapes, ::llvm::StringRef mlir_module, ::llvm::StringRef metadata) {
  odsState.addOperands(dynamic_shapes);
  odsState.addAttribute("mlir_module", odsBuilder.getStringAttr(mlir_module));
  odsState.addAttribute("metadata", odsBuilder.getStringAttr(metadata));
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _TPUCompileMlirOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _TPUCompileMlirOp::verify() {
  if (failed(_TPUCompileMlirOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops11(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops12(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSResults(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops13(getOperation(), v.getType(), "result", index)))
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
// ::mlir::TF::_TPUCompileMlirPlaceholderProgramKeyOp definitions
//===----------------------------------------------------------------------===//

_TPUCompileMlirPlaceholderProgramKeyOpAdaptor::_TPUCompileMlirPlaceholderProgramKeyOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_TPUCompileMlirPlaceholderProgramKeyOpAdaptor::_TPUCompileMlirPlaceholderProgramKeyOpAdaptor(_TPUCompileMlirPlaceholderProgramKeyOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _TPUCompileMlirPlaceholderProgramKeyOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _TPUCompileMlirPlaceholderProgramKeyOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange _TPUCompileMlirPlaceholderProgramKeyOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr _TPUCompileMlirPlaceholderProgramKeyOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult _TPUCompileMlirPlaceholderProgramKeyOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _TPUCompileMlirPlaceholderProgramKeyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range _TPUCompileMlirPlaceholderProgramKeyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> _TPUCompileMlirPlaceholderProgramKeyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _TPUCompileMlirPlaceholderProgramKeyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _TPUCompileMlirPlaceholderProgramKeyOp::program() {
  return *getODSResults(0).begin();
}

void _TPUCompileMlirPlaceholderProgramKeyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type program) {
  odsState.addTypes(program);
}

void _TPUCompileMlirPlaceholderProgramKeyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _TPUCompileMlirPlaceholderProgramKeyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _TPUCompileMlirPlaceholderProgramKeyOp::verify() {
  if (failed(_TPUCompileMlirPlaceholderProgramKeyOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops12(getOperation(), v.getType(), "result", index)))
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
// ::mlir::TF::_TPUDeviceOrdinalPlaceholderOp definitions
//===----------------------------------------------------------------------===//

_TPUDeviceOrdinalPlaceholderOpAdaptor::_TPUDeviceOrdinalPlaceholderOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_TPUDeviceOrdinalPlaceholderOpAdaptor::_TPUDeviceOrdinalPlaceholderOpAdaptor(_TPUDeviceOrdinalPlaceholderOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _TPUDeviceOrdinalPlaceholderOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _TPUDeviceOrdinalPlaceholderOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange _TPUDeviceOrdinalPlaceholderOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr _TPUDeviceOrdinalPlaceholderOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult _TPUDeviceOrdinalPlaceholderOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _TPUDeviceOrdinalPlaceholderOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range _TPUDeviceOrdinalPlaceholderOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> _TPUDeviceOrdinalPlaceholderOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _TPUDeviceOrdinalPlaceholderOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _TPUDeviceOrdinalPlaceholderOp::device_ordinal() {
  return *getODSResults(0).begin();
}

void _TPUDeviceOrdinalPlaceholderOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type device_ordinal) {
  odsState.addTypes(device_ordinal);
}

void _TPUDeviceOrdinalPlaceholderOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _TPUDeviceOrdinalPlaceholderOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _TPUDeviceOrdinalPlaceholderOp::verify() {
  if (failed(_TPUDeviceOrdinalPlaceholderOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops14(getOperation(), v.getType(), "result", index)))
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
// ::mlir::TF::_UnaryOpsCompositionOp definitions
//===----------------------------------------------------------------------===//

_UnaryOpsCompositionOpAdaptor::_UnaryOpsCompositionOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_UnaryOpsCompositionOpAdaptor::_UnaryOpsCompositionOpAdaptor(_UnaryOpsCompositionOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _UnaryOpsCompositionOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _UnaryOpsCompositionOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange _UnaryOpsCompositionOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _UnaryOpsCompositionOpAdaptor::x() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr _UnaryOpsCompositionOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr _UnaryOpsCompositionOpAdaptor::op_names() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("op_names").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult _UnaryOpsCompositionOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_op_names = odsAttrs.get("op_names");
  if (!tblgen_op_names) return emitError(loc, "'tf._UnaryOpsComposition' op ""requires attribute 'op_names'");
    if (!(((tblgen_op_names.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_op_names.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return (attr.isa<::mlir::StringAttr>()); })))) return emitError(loc, "'tf._UnaryOpsComposition' op ""attribute 'op_names' failed to satisfy constraint: string array attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _UnaryOpsCompositionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range _UnaryOpsCompositionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _UnaryOpsCompositionOp::x() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange _UnaryOpsCompositionOp::xMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _UnaryOpsCompositionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _UnaryOpsCompositionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _UnaryOpsCompositionOp::y() {
  return *getODSResults(0).begin();
}

::mlir::ArrayAttr _UnaryOpsCompositionOp::op_namesAttr() {
  return (*this)->getAttr("op_names").template cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr _UnaryOpsCompositionOp::op_names() {
  auto attr = op_namesAttr();
  return attr;
}

Type _UnaryOpsCompositionOp::T() {
  return mlir::getElementTypeOrSelf(*getODSOperands(0).begin());
}

bool _UnaryOpsCompositionOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "T") return true;
 return false;
}

::mlir::DictionaryAttr _UnaryOpsCompositionOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("T", ctx),
::mlir::TypeAttr::get(T())}});
}

void _UnaryOpsCompositionOp::op_namesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr("op_names", attr);
}

void _UnaryOpsCompositionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type y, ::mlir::Value x, ::mlir::ArrayAttr op_names) {
  odsState.addOperands(x);
  odsState.addAttribute("op_names", op_names);
  odsState.addTypes(y);
}

void _UnaryOpsCompositionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::ArrayAttr op_names) {
  odsState.addOperands(x);
  odsState.addAttribute("op_names", op_names);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _UnaryOpsCompositionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _UnaryOpsCompositionOp::verify() {
  if (failed(_UnaryOpsCompositionOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops15(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops15(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return ::mlir::success();
}

void _UnaryOpsCompositionOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_XlaHostComputeMlirOp definitions
//===----------------------------------------------------------------------===//

_XlaHostComputeMlirOpAdaptor::_XlaHostComputeMlirOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_XlaHostComputeMlirOpAdaptor::_XlaHostComputeMlirOpAdaptor(_XlaHostComputeMlirOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _XlaHostComputeMlirOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _XlaHostComputeMlirOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange _XlaHostComputeMlirOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange _XlaHostComputeMlirOpAdaptor::inputs() {
  return getODSOperands(0);
}

::mlir::DictionaryAttr _XlaHostComputeMlirOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr _XlaHostComputeMlirOpAdaptor::send_key() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("send_key").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::StringAttr _XlaHostComputeMlirOpAdaptor::recv_key() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("recv_key").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::IntegerAttr _XlaHostComputeMlirOpAdaptor::tpu_core() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("tpu_core").dyn_cast_or_null<::mlir::IntegerAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0);
  return attr;
}

::mlir::LogicalResult _XlaHostComputeMlirOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_send_key = odsAttrs.get("send_key");
  if (!tblgen_send_key) return emitError(loc, "'tf._XlaHostComputeMlir' op ""requires attribute 'send_key'");
    if (!((tblgen_send_key.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._XlaHostComputeMlir' op ""attribute 'send_key' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_recv_key = odsAttrs.get("recv_key");
  if (!tblgen_recv_key) return emitError(loc, "'tf._XlaHostComputeMlir' op ""requires attribute 'recv_key'");
    if (!((tblgen_recv_key.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._XlaHostComputeMlir' op ""attribute 'recv_key' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_tpu_core = odsAttrs.get("tpu_core");
  if (tblgen_tpu_core) {
    if (!(((tblgen_tpu_core.isa<::mlir::IntegerAttr>())) && ((tblgen_tpu_core.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'tf._XlaHostComputeMlir' op ""attribute 'tpu_core' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _XlaHostComputeMlirOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range _XlaHostComputeMlirOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range _XlaHostComputeMlirOp::inputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange _XlaHostComputeMlirOp::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _XlaHostComputeMlirOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range _XlaHostComputeMlirOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range _XlaHostComputeMlirOp::outputs() {
  return getODSResults(0);
}

::mlir::StringAttr _XlaHostComputeMlirOp::send_keyAttr() {
  return (*this)->getAttr("send_key").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _XlaHostComputeMlirOp::send_key() {
  auto attr = send_keyAttr();
  return attr.getValue();
}

::mlir::StringAttr _XlaHostComputeMlirOp::recv_keyAttr() {
  return (*this)->getAttr("recv_key").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _XlaHostComputeMlirOp::recv_key() {
  auto attr = recv_keyAttr();
  return attr.getValue();
}

::mlir::IntegerAttr _XlaHostComputeMlirOp::tpu_coreAttr() {
  return (*this)->getAttr("tpu_core").template dyn_cast_or_null<::mlir::IntegerAttr>();
}

uint64_t _XlaHostComputeMlirOp::tpu_core() {
  auto attr = tpu_coreAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

mlir::OperandElementTypeRange _XlaHostComputeMlirOp::Tinputs() {
  auto values = getODSOperands(0);
return {mlir::OperandElementTypeIterator(values.begin()), mlir::OperandElementTypeIterator(values.end())};
}

mlir::ResultElementTypeRange _XlaHostComputeMlirOp::Toutputs() {
  auto values = getODSResults(0);
return {mlir::ResultElementTypeIterator(values.begin()), mlir::ResultElementTypeIterator(values.end())};
}

bool _XlaHostComputeMlirOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "Tinputs") return true;
  if (name == "Toutputs") return true;
 return false;
}

::mlir::DictionaryAttr _XlaHostComputeMlirOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("Tinputs", ctx),
ArrayAttr::get(ctx, 
    [&]() {
      llvm::SmallVector<Attribute, 4> ret;
      for (auto t : Tinputs())
        ret.push_back(TypeAttr::get(t));
      return ret;
    }())},
    {::mlir::Identifier::get("Toutputs", ctx),
ArrayAttr::get(ctx, 
    [&]() {
      llvm::SmallVector<Attribute, 4> ret;
      for (auto t : Toutputs())
        ret.push_back(TypeAttr::get(t));
      return ret;
    }())}});
}

void _XlaHostComputeMlirOp::send_keyAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("send_key", attr);
}

void _XlaHostComputeMlirOp::recv_keyAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("recv_key", attr);
}

void _XlaHostComputeMlirOp::tpu_coreAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("tpu_core", attr);
}

void _XlaHostComputeMlirOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::ValueRange inputs, ::mlir::StringAttr send_key, ::mlir::StringAttr recv_key, ::mlir::IntegerAttr tpu_core) {
  odsState.addOperands(inputs);
  odsState.addAttribute("send_key", send_key);
  odsState.addAttribute("recv_key", recv_key);
  odsState.addAttribute("tpu_core", tpu_core);
  odsState.addTypes(outputs);
}

void _XlaHostComputeMlirOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::ValueRange inputs, ::llvm::StringRef send_key, ::llvm::StringRef recv_key, uint64_t tpu_core) {
  odsState.addOperands(inputs);
  odsState.addAttribute("send_key", odsBuilder.getStringAttr(send_key));
  odsState.addAttribute("recv_key", odsBuilder.getStringAttr(recv_key));
  odsState.addAttribute("tpu_core", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), tpu_core));
  odsState.addTypes(outputs);
}

void _XlaHostComputeMlirOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _XlaHostComputeMlirOp::verify() {
  if (failed(_XlaHostComputeMlirOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "result", index)))
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
// ::mlir::TF::_XlaRecvAtHostOp definitions
//===----------------------------------------------------------------------===//

_XlaRecvAtHostOpAdaptor::_XlaRecvAtHostOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_XlaRecvAtHostOpAdaptor::_XlaRecvAtHostOpAdaptor(_XlaRecvAtHostOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _XlaRecvAtHostOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _XlaRecvAtHostOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange _XlaRecvAtHostOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _XlaRecvAtHostOpAdaptor::dynamic_key() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr _XlaRecvAtHostOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr _XlaRecvAtHostOpAdaptor::key() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("key").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::IntegerAttr _XlaRecvAtHostOpAdaptor::device_ordinal() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("device_ordinal").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult _XlaRecvAtHostOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_key = odsAttrs.get("key");
  if (!tblgen_key) return emitError(loc, "'tf._XlaRecvAtHost' op ""requires attribute 'key'");
    if (!((tblgen_key.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._XlaRecvAtHost' op ""attribute 'key' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_device_ordinal = odsAttrs.get("device_ordinal");
  if (!tblgen_device_ordinal) return emitError(loc, "'tf._XlaRecvAtHost' op ""requires attribute 'device_ordinal'");
    if (!(((tblgen_device_ordinal.isa<::mlir::IntegerAttr>())) && ((tblgen_device_ordinal.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'tf._XlaRecvAtHost' op ""attribute 'device_ordinal' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _XlaRecvAtHostOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range _XlaRecvAtHostOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _XlaRecvAtHostOp::dynamic_key() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange _XlaRecvAtHostOp::dynamic_keyMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _XlaRecvAtHostOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range _XlaRecvAtHostOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range _XlaRecvAtHostOp::outputs() {
  return getODSResults(0);
}

::mlir::StringAttr _XlaRecvAtHostOp::keyAttr() {
  return (*this)->getAttr("key").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _XlaRecvAtHostOp::key() {
  auto attr = keyAttr();
  return attr.getValue();
}

::mlir::IntegerAttr _XlaRecvAtHostOp::device_ordinalAttr() {
  return (*this)->getAttr("device_ordinal").template cast<::mlir::IntegerAttr>();
}

uint64_t _XlaRecvAtHostOp::device_ordinal() {
  auto attr = device_ordinalAttr();
  return attr.getValue().getZExtValue();
}

mlir::ResultElementTypeRange _XlaRecvAtHostOp::Toutputs() {
  auto values = getODSResults(0);
return {mlir::ResultElementTypeIterator(values.begin()), mlir::ResultElementTypeIterator(values.end())};
}

bool _XlaRecvAtHostOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "Toutputs") return true;
 return false;
}

::mlir::DictionaryAttr _XlaRecvAtHostOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("Toutputs", ctx),
ArrayAttr::get(ctx, 
    [&]() {
      llvm::SmallVector<Attribute, 4> ret;
      for (auto t : Toutputs())
        ret.push_back(TypeAttr::get(t));
      return ret;
    }())}});
}

void _XlaRecvAtHostOp::keyAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("key", attr);
}

void _XlaRecvAtHostOp::device_ordinalAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("device_ordinal", attr);
}

void _XlaRecvAtHostOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::Value dynamic_key, ::mlir::StringAttr key, ::mlir::IntegerAttr device_ordinal) {
  odsState.addOperands(dynamic_key);
  odsState.addAttribute("key", key);
  odsState.addAttribute("device_ordinal", device_ordinal);
  odsState.addTypes(outputs);
}

void _XlaRecvAtHostOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::Value dynamic_key, ::llvm::StringRef key, uint64_t device_ordinal) {
  odsState.addOperands(dynamic_key);
  odsState.addAttribute("key", odsBuilder.getStringAttr(key));
  odsState.addAttribute("device_ordinal", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), device_ordinal));
  odsState.addTypes(outputs);
}

void _XlaRecvAtHostOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _XlaRecvAtHostOp::verify() {
  if (failed(_XlaRecvAtHostOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops12(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "result", index)))
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
// ::mlir::TF::_XlaRecvAtHostV2Op definitions
//===----------------------------------------------------------------------===//

_XlaRecvAtHostV2OpAdaptor::_XlaRecvAtHostV2OpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_XlaRecvAtHostV2OpAdaptor::_XlaRecvAtHostV2OpAdaptor(_XlaRecvAtHostV2Op&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _XlaRecvAtHostV2OpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _XlaRecvAtHostV2OpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange _XlaRecvAtHostV2OpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _XlaRecvAtHostV2OpAdaptor::dynamic_key() {
  return *getODSOperands(0).begin();
}

::mlir::Value _XlaRecvAtHostV2OpAdaptor::device_ordinal() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr _XlaRecvAtHostV2OpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr _XlaRecvAtHostV2OpAdaptor::key() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("key").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult _XlaRecvAtHostV2OpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_key = odsAttrs.get("key");
  if (!tblgen_key) return emitError(loc, "'tf._XlaRecvAtHostV2' op ""requires attribute 'key'");
    if (!((tblgen_key.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._XlaRecvAtHostV2' op ""attribute 'key' failed to satisfy constraint: string attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _XlaRecvAtHostV2Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range _XlaRecvAtHostV2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value _XlaRecvAtHostV2Op::dynamic_key() {
  return *getODSOperands(0).begin();
}

::mlir::Value _XlaRecvAtHostV2Op::device_ordinal() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange _XlaRecvAtHostV2Op::dynamic_keyMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _XlaRecvAtHostV2Op::device_ordinalMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _XlaRecvAtHostV2Op::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range _XlaRecvAtHostV2Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range _XlaRecvAtHostV2Op::outputs() {
  return getODSResults(0);
}

::mlir::StringAttr _XlaRecvAtHostV2Op::keyAttr() {
  return (*this)->getAttr("key").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _XlaRecvAtHostV2Op::key() {
  auto attr = keyAttr();
  return attr.getValue();
}

mlir::ResultElementTypeRange _XlaRecvAtHostV2Op::Toutputs() {
  auto values = getODSResults(0);
return {mlir::ResultElementTypeIterator(values.begin()), mlir::ResultElementTypeIterator(values.end())};
}

bool _XlaRecvAtHostV2Op::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "Toutputs") return true;
 return false;
}

::mlir::DictionaryAttr _XlaRecvAtHostV2Op::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("Toutputs", ctx),
ArrayAttr::get(ctx, 
    [&]() {
      llvm::SmallVector<Attribute, 4> ret;
      for (auto t : Toutputs())
        ret.push_back(TypeAttr::get(t));
      return ret;
    }())}});
}

void _XlaRecvAtHostV2Op::keyAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("key", attr);
}

void _XlaRecvAtHostV2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::Value dynamic_key, ::mlir::Value device_ordinal, ::mlir::StringAttr key) {
  odsState.addOperands(dynamic_key);
  odsState.addOperands(device_ordinal);
  odsState.addAttribute("key", key);
  odsState.addTypes(outputs);
}

void _XlaRecvAtHostV2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::Value dynamic_key, ::mlir::Value device_ordinal, ::llvm::StringRef key) {
  odsState.addOperands(dynamic_key);
  odsState.addOperands(device_ordinal);
  odsState.addAttribute("key", odsBuilder.getStringAttr(key));
  odsState.addTypes(outputs);
}

void _XlaRecvAtHostV2Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _XlaRecvAtHostV2Op::verify() {
  if (failed(_XlaRecvAtHostV2OpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops12(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops14(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "result", index)))
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
// ::mlir::TF::_XlaSendFromHostOp definitions
//===----------------------------------------------------------------------===//

_XlaSendFromHostOpAdaptor::_XlaSendFromHostOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_XlaSendFromHostOpAdaptor::_XlaSendFromHostOpAdaptor(_XlaSendFromHostOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _XlaSendFromHostOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _XlaSendFromHostOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange _XlaSendFromHostOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange _XlaSendFromHostOpAdaptor::inputs() {
  return getODSOperands(0);
}

::mlir::Value _XlaSendFromHostOpAdaptor::dynamic_key() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr _XlaSendFromHostOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr _XlaSendFromHostOpAdaptor::key() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("key").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::IntegerAttr _XlaSendFromHostOpAdaptor::device_ordinal() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("device_ordinal").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult _XlaSendFromHostOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_key = odsAttrs.get("key");
  if (!tblgen_key) return emitError(loc, "'tf._XlaSendFromHost' op ""requires attribute 'key'");
    if (!((tblgen_key.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._XlaSendFromHost' op ""attribute 'key' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_device_ordinal = odsAttrs.get("device_ordinal");
  if (!tblgen_device_ordinal) return emitError(loc, "'tf._XlaSendFromHost' op ""requires attribute 'device_ordinal'");
    if (!(((tblgen_device_ordinal.isa<::mlir::IntegerAttr>())) && ((tblgen_device_ordinal.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'tf._XlaSendFromHost' op ""attribute 'device_ordinal' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _XlaSendFromHostOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range _XlaSendFromHostOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range _XlaSendFromHostOp::inputs() {
  return getODSOperands(0);
}

::mlir::Value _XlaSendFromHostOp::dynamic_key() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange _XlaSendFromHostOp::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _XlaSendFromHostOp::dynamic_keyMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _XlaSendFromHostOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _XlaSendFromHostOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr _XlaSendFromHostOp::keyAttr() {
  return (*this)->getAttr("key").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _XlaSendFromHostOp::key() {
  auto attr = keyAttr();
  return attr.getValue();
}

::mlir::IntegerAttr _XlaSendFromHostOp::device_ordinalAttr() {
  return (*this)->getAttr("device_ordinal").template cast<::mlir::IntegerAttr>();
}

uint64_t _XlaSendFromHostOp::device_ordinal() {
  auto attr = device_ordinalAttr();
  return attr.getValue().getZExtValue();
}

mlir::OperandElementTypeRange _XlaSendFromHostOp::Tinputs() {
  auto values = getODSOperands(0);
return {mlir::OperandElementTypeIterator(values.begin()), mlir::OperandElementTypeIterator(values.end())};
}

bool _XlaSendFromHostOp::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "Tinputs") return true;
 return false;
}

::mlir::DictionaryAttr _XlaSendFromHostOp::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("Tinputs", ctx),
ArrayAttr::get(ctx, 
    [&]() {
      llvm::SmallVector<Attribute, 4> ret;
      for (auto t : Tinputs())
        ret.push_back(TypeAttr::get(t));
      return ret;
    }())}});
}

void _XlaSendFromHostOp::keyAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("key", attr);
}

void _XlaSendFromHostOp::device_ordinalAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("device_ordinal", attr);
}

void _XlaSendFromHostOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange inputs, ::mlir::Value dynamic_key, ::mlir::StringAttr key, ::mlir::IntegerAttr device_ordinal) {
  odsState.addOperands(inputs);
  odsState.addOperands(dynamic_key);
  odsState.addAttribute("key", key);
  odsState.addAttribute("device_ordinal", device_ordinal);
}

void _XlaSendFromHostOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::Value dynamic_key, ::mlir::StringAttr key, ::mlir::IntegerAttr device_ordinal) {
  odsState.addOperands(inputs);
  odsState.addOperands(dynamic_key);
  odsState.addAttribute("key", key);
  odsState.addAttribute("device_ordinal", device_ordinal);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _XlaSendFromHostOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange inputs, ::mlir::Value dynamic_key, ::llvm::StringRef key, uint64_t device_ordinal) {
  odsState.addOperands(inputs);
  odsState.addOperands(dynamic_key);
  odsState.addAttribute("key", odsBuilder.getStringAttr(key));
  odsState.addAttribute("device_ordinal", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), device_ordinal));
}

void _XlaSendFromHostOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::Value dynamic_key, ::llvm::StringRef key, uint64_t device_ordinal) {
  odsState.addOperands(inputs);
  odsState.addOperands(dynamic_key);
  odsState.addAttribute("key", odsBuilder.getStringAttr(key));
  odsState.addAttribute("device_ordinal", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), device_ordinal));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _XlaSendFromHostOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _XlaSendFromHostOp::verify() {
  if (failed(_XlaSendFromHostOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops12(getOperation(), v.getType(), "operand", index)))
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
namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_XlaSendFromHostV2Op definitions
//===----------------------------------------------------------------------===//

_XlaSendFromHostV2OpAdaptor::_XlaSendFromHostV2OpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

_XlaSendFromHostV2OpAdaptor::_XlaSendFromHostV2OpAdaptor(_XlaSendFromHostV2Op&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange _XlaSendFromHostV2OpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> _XlaSendFromHostV2OpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false};
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

::mlir::ValueRange _XlaSendFromHostV2OpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange _XlaSendFromHostV2OpAdaptor::inputs() {
  return getODSOperands(0);
}

::mlir::Value _XlaSendFromHostV2OpAdaptor::dynamic_key() {
  return *getODSOperands(1).begin();
}

::mlir::Value _XlaSendFromHostV2OpAdaptor::device_ordinal() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr _XlaSendFromHostV2OpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr _XlaSendFromHostV2OpAdaptor::key() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("key").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult _XlaSendFromHostV2OpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_key = odsAttrs.get("key");
  if (!tblgen_key) return emitError(loc, "'tf._XlaSendFromHostV2' op ""requires attribute 'key'");
    if (!((tblgen_key.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf._XlaSendFromHostV2' op ""attribute 'key' failed to satisfy constraint: string attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> _XlaSendFromHostV2Op::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false};
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

::mlir::Operation::operand_range _XlaSendFromHostV2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range _XlaSendFromHostV2Op::inputs() {
  return getODSOperands(0);
}

::mlir::Value _XlaSendFromHostV2Op::dynamic_key() {
  return *getODSOperands(1).begin();
}

::mlir::Value _XlaSendFromHostV2Op::device_ordinal() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange _XlaSendFromHostV2Op::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _XlaSendFromHostV2Op::dynamic_keyMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange _XlaSendFromHostV2Op::device_ordinalMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> _XlaSendFromHostV2Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range _XlaSendFromHostV2Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr _XlaSendFromHostV2Op::keyAttr() {
  return (*this)->getAttr("key").template cast<::mlir::StringAttr>();
}

::llvm::StringRef _XlaSendFromHostV2Op::key() {
  auto attr = keyAttr();
  return attr.getValue();
}

mlir::OperandElementTypeRange _XlaSendFromHostV2Op::Tinputs() {
  auto values = getODSOperands(0);
return {mlir::OperandElementTypeIterator(values.begin()), mlir::OperandElementTypeIterator(values.end())};
}

bool _XlaSendFromHostV2Op::isDerivedAttribute(::llvm::StringRef name) {
  if (name == "Tinputs") return true;
 return false;
}

::mlir::DictionaryAttr _XlaSendFromHostV2Op::materializeDerivedAttributes() {
  ::mlir::MLIRContext* ctx = getContext();
  ::mlir::Builder odsBuilder(ctx); (void)odsBuilder;
  return ::mlir::DictionaryAttr::get(  ctx, {
    {::mlir::Identifier::get("Tinputs", ctx),
ArrayAttr::get(ctx, 
    [&]() {
      llvm::SmallVector<Attribute, 4> ret;
      for (auto t : Tinputs())
        ret.push_back(TypeAttr::get(t));
      return ret;
    }())}});
}

void _XlaSendFromHostV2Op::keyAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("key", attr);
}

void _XlaSendFromHostV2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange inputs, ::mlir::Value dynamic_key, ::mlir::Value device_ordinal, ::mlir::StringAttr key) {
  odsState.addOperands(inputs);
  odsState.addOperands(dynamic_key);
  odsState.addOperands(device_ordinal);
  odsState.addAttribute("key", key);
}

void _XlaSendFromHostV2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::Value dynamic_key, ::mlir::Value device_ordinal, ::mlir::StringAttr key) {
  odsState.addOperands(inputs);
  odsState.addOperands(dynamic_key);
  odsState.addOperands(device_ordinal);
  odsState.addAttribute("key", key);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _XlaSendFromHostV2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange inputs, ::mlir::Value dynamic_key, ::mlir::Value device_ordinal, ::llvm::StringRef key) {
  odsState.addOperands(inputs);
  odsState.addOperands(dynamic_key);
  odsState.addOperands(device_ordinal);
  odsState.addAttribute("key", odsBuilder.getStringAttr(key));
}

void _XlaSendFromHostV2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::Value dynamic_key, ::mlir::Value device_ordinal, ::llvm::StringRef key) {
  odsState.addOperands(inputs);
  odsState.addOperands(dynamic_key);
  odsState.addOperands(device_ordinal);
  odsState.addAttribute("key", odsBuilder.getStringAttr(key));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void _XlaSendFromHostV2Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult _XlaSendFromHostV2Op::verify() {
  if (failed(_XlaSendFromHostV2OpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops12(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_tf_ops14(getOperation(), v.getType(), "operand", index)))
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

