/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::chlo::AcosOp,
::mlir::chlo::AcoshOp,
::mlir::chlo::AsinOp,
::mlir::chlo::AsinhOp,
::mlir::chlo::AtanOp,
::mlir::chlo::AtanhOp,
::mlir::chlo::BroadcastAddOp,
::mlir::chlo::BroadcastAndOp,
::mlir::chlo::BroadcastAtan2Op,
::mlir::chlo::BroadcastCompareOp,
::mlir::chlo::BroadcastComplexOp,
::mlir::chlo::BroadcastDivOp,
::mlir::chlo::BroadcastMaxOp,
::mlir::chlo::BroadcastMinOp,
::mlir::chlo::BroadcastMulOp,
::mlir::chlo::BroadcastOrOp,
::mlir::chlo::BroadcastPolygammaOp,
::mlir::chlo::BroadcastPowOp,
::mlir::chlo::BroadcastRemOp,
::mlir::chlo::BroadcastSelectOp,
::mlir::chlo::BroadcastShiftLeftOp,
::mlir::chlo::BroadcastShiftRightArithmeticOp,
::mlir::chlo::BroadcastShiftRightLogicalOp,
::mlir::chlo::BroadcastSubOp,
::mlir::chlo::BroadcastXorOp,
::mlir::chlo::BroadcastZetaOp,
::mlir::chlo::ConjOp,
::mlir::chlo::ConstantLikeOp,
::mlir::chlo::CoshOp,
::mlir::chlo::DigammaOp,
::mlir::chlo::ErfOp,
::mlir::chlo::ErfcOp,
::mlir::chlo::IsInfOp,
::mlir::chlo::IsNegInfOp,
::mlir::chlo::IsPosInfOp,
::mlir::chlo::LgammaOp,
::mlir::chlo::MinimumBroadcastShapesOp,
::mlir::chlo::PolygammaOp,
::mlir::chlo::SinhOp,
::mlir::chlo::TanOp,
::mlir::chlo::ZetaOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace chlo {
static ::mlir::LogicalResult __mlir_ods_local_type_constraint_chlo_ops0(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && (((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of floating-point or complex type with 32-bit float or 64-bit float elements values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_chlo_ops1(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || (((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && (((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_chlo_ops2(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64)))))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_chlo_ops3(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of pred (AKA boolean or 1-bit integer) values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_chlo_ops4(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && ((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of floating-point values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_chlo_ops5(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::TensorType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && (((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || ((type.cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64())))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be tensor of complex type with 32-bit float or 64-bit float elements values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_chlo_ops6(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!((((type.isa<::mlir::TensorType>())) && ((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::IndexType>()))) && (((type.cast<::mlir::ShapedType>().hasRank())) && ((type.cast<::mlir::ShapedType>().getRank()
                         == 1))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be 1D tensor of index values, but got " << type;
  }
  return ::mlir::success();
}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AcosOp definitions
//===----------------------------------------------------------------------===//

AcosOpAdaptor::AcosOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AcosOpAdaptor::AcosOpAdaptor(AcosOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AcosOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AcosOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AcosOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AcosOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr AcosOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult AcosOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AcosOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AcosOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AcosOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AcosOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AcosOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AcosOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AcosOp::result() {
  return *getODSResults(0).begin();
}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AcosOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void AcosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult AcosOp::verify() {
  if (failed(AcosOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult AcosOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AcosOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.acos";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void AcosOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AcoshOp definitions
//===----------------------------------------------------------------------===//

AcoshOpAdaptor::AcoshOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AcoshOpAdaptor::AcoshOpAdaptor(AcoshOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AcoshOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AcoshOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AcoshOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AcoshOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr AcoshOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult AcoshOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AcoshOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AcoshOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AcoshOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AcoshOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AcoshOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AcoshOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AcoshOp::result() {
  return *getODSResults(0).begin();
}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AcoshOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void AcoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult AcoshOp::verify() {
  if (failed(AcoshOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult AcoshOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AcoshOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.acosh";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void AcoshOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AsinOp definitions
//===----------------------------------------------------------------------===//

AsinOpAdaptor::AsinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AsinOpAdaptor::AsinOpAdaptor(AsinOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AsinOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AsinOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AsinOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AsinOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr AsinOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult AsinOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AsinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AsinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AsinOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AsinOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AsinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AsinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AsinOp::result() {
  return *getODSResults(0).begin();
}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsinOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void AsinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult AsinOp::verify() {
  if (failed(AsinOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult AsinOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AsinOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.asin";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void AsinOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AsinhOp definitions
//===----------------------------------------------------------------------===//

AsinhOpAdaptor::AsinhOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AsinhOpAdaptor::AsinhOpAdaptor(AsinhOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AsinhOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AsinhOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AsinhOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AsinhOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr AsinhOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult AsinhOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AsinhOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AsinhOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AsinhOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AsinhOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AsinhOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AsinhOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AsinhOp::result() {
  return *getODSResults(0).begin();
}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsinhOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void AsinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult AsinhOp::verify() {
  if (failed(AsinhOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult AsinhOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AsinhOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.asinh";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void AsinhOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AtanOp definitions
//===----------------------------------------------------------------------===//

AtanOpAdaptor::AtanOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AtanOpAdaptor::AtanOpAdaptor(AtanOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AtanOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AtanOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AtanOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtanOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr AtanOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult AtanOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AtanOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AtanOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtanOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AtanOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AtanOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AtanOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtanOp::result() {
  return *getODSResults(0).begin();
}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtanOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void AtanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult AtanOp::verify() {
  if (failed(AtanOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult AtanOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtanOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.atan";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void AtanOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AtanhOp definitions
//===----------------------------------------------------------------------===//

AtanhOpAdaptor::AtanhOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AtanhOpAdaptor::AtanhOpAdaptor(AtanhOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AtanhOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AtanhOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AtanhOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtanhOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr AtanhOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult AtanhOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AtanhOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AtanhOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtanhOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AtanhOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AtanhOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AtanhOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AtanhOp::result() {
  return *getODSResults(0).begin();
}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtanhOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void AtanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult AtanhOp::verify() {
  if (failed(AtanhOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult AtanhOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtanhOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.atanh";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void AtanhOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastAddOp definitions
//===----------------------------------------------------------------------===//

BroadcastAddOpAdaptor::BroadcastAddOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastAddOpAdaptor::BroadcastAddOpAdaptor(BroadcastAddOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastAddOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastAddOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastAddOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastAddOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastAddOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastAddOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastAddOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastAddOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_add' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastAddOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastAddOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastAddOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastAddOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastAddOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastAddOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastAddOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastAddOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastAddOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastAddOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastAddOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastAddOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastAddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastAddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastAddOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastAddOp::verify() {
  if (failed(BroadcastAddOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastAddOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastAddOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_add";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastAddOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastAndOp definitions
//===----------------------------------------------------------------------===//

BroadcastAndOpAdaptor::BroadcastAndOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastAndOpAdaptor::BroadcastAndOpAdaptor(BroadcastAndOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastAndOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastAndOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastAndOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastAndOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastAndOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastAndOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastAndOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastAndOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_and' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastAndOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastAndOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastAndOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastAndOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastAndOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastAndOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastAndOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastAndOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastAndOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastAndOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastAndOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastAndOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastAndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastAndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastAndOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastAndOp::verify() {
  if (failed(BroadcastAndOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastAndOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastAndOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_and";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastAndOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastAtan2Op definitions
//===----------------------------------------------------------------------===//

BroadcastAtan2OpAdaptor::BroadcastAtan2OpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastAtan2OpAdaptor::BroadcastAtan2OpAdaptor(BroadcastAtan2Op&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastAtan2OpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastAtan2OpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastAtan2OpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastAtan2OpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastAtan2OpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastAtan2OpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastAtan2OpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastAtan2OpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_atan2' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastAtan2Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastAtan2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastAtan2Op::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastAtan2Op::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastAtan2Op::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastAtan2Op::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastAtan2Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastAtan2Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastAtan2Op::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastAtan2Op::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastAtan2Op::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastAtan2Op::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastAtan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastAtan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastAtan2Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastAtan2Op::verify() {
  if (failed(BroadcastAtan2OpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastAtan2Op::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastAtan2Op::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_atan2";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastAtan2Op::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastCompareOp definitions
//===----------------------------------------------------------------------===//

BroadcastCompareOpAdaptor::BroadcastCompareOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastCompareOpAdaptor::BroadcastCompareOpAdaptor(BroadcastCompareOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastCompareOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastCompareOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastCompareOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastCompareOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastCompareOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastCompareOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastCompareOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::StringAttr BroadcastCompareOpAdaptor::comparison_direction() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("comparison_direction").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::StringAttr BroadcastCompareOpAdaptor::compare_type() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("compare_type").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastCompareOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_compare' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  {
  auto tblgen_comparison_direction = odsAttrs.get("comparison_direction");
  if (!tblgen_comparison_direction) return emitError(loc, "'chlo.broadcast_compare' op ""requires attribute 'comparison_direction'");
    if (!(((tblgen_comparison_direction.isa<::mlir::StringAttr>())) && (((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "EQ")) || ((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "NE")) || ((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "GE")) || ((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "GT")) || ((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "LE")) || ((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "LT"))))) return emitError(loc, "'chlo.broadcast_compare' op ""attribute 'comparison_direction' failed to satisfy constraint: Which comparison operation to perform.");
  }
  {
  auto tblgen_compare_type = odsAttrs.get("compare_type");
  if (tblgen_compare_type) {
    if (!(((tblgen_compare_type.isa<::mlir::StringAttr>())) && (((tblgen_compare_type.cast<::mlir::StringAttr>().getValue() == "FLOAT")) || ((tblgen_compare_type.cast<::mlir::StringAttr>().getValue() == "TOTALORDER")) || ((tblgen_compare_type.cast<::mlir::StringAttr>().getValue() == "SIGNED")) || ((tblgen_compare_type.cast<::mlir::StringAttr>().getValue() == "UNSIGNED"))))) return emitError(loc, "'chlo.broadcast_compare' op ""attribute 'compare_type' failed to satisfy constraint: Which comparison type to use.");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastCompareOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastCompareOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastCompareOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastCompareOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastCompareOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastCompareOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastCompareOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastCompareOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastCompareOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastCompareOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

::mlir::StringAttr BroadcastCompareOp::comparison_directionAttr() {
  return (*this)->getAttr("comparison_direction").template cast<::mlir::StringAttr>();
}

::llvm::StringRef BroadcastCompareOp::comparison_direction() {
  auto attr = comparison_directionAttr();
  return attr.getValue();
}

::mlir::StringAttr BroadcastCompareOp::compare_typeAttr() {
  return (*this)->getAttr("compare_type").template dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > BroadcastCompareOp::compare_type() {
  auto attr = compare_typeAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

void BroadcastCompareOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

void BroadcastCompareOp::comparison_directionAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("comparison_direction", attr);
}

void BroadcastCompareOp::compare_typeAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("compare_type", attr);
}

::mlir::Attribute BroadcastCompareOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

::mlir::Attribute BroadcastCompareOp::removeCompare_typeAttr() {
  return (*this)->removeAttr("compare_type");
}



void BroadcastCompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions, ::mlir::StringAttr comparison_direction, /*optional*/::mlir::StringAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addAttribute("comparison_direction", comparison_direction);
  if (compare_type) {
  odsState.addAttribute("compare_type", compare_type);
  }
  odsState.addTypes(resultType0);
}

void BroadcastCompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions, ::mlir::StringAttr comparison_direction, /*optional*/::mlir::StringAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addAttribute("comparison_direction", comparison_direction);
  if (compare_type) {
  odsState.addAttribute("compare_type", compare_type);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastCompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions, ::llvm::StringRef comparison_direction, /*optional*/::mlir::StringAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addAttribute("comparison_direction", odsBuilder.getStringAttr(comparison_direction));
  if (compare_type) {
  odsState.addAttribute("compare_type", compare_type);
  }
  odsState.addTypes(resultType0);
}

void BroadcastCompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions, ::llvm::StringRef comparison_direction, /*optional*/::mlir::StringAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addAttribute("comparison_direction", odsBuilder.getStringAttr(comparison_direction));
  if (compare_type) {
  odsState.addAttribute("compare_type", compare_type);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastCompareOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastCompareOp::verify() {
  if (failed(BroadcastCompareOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops3(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastCompareOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastCompareOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_compare";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastCompareOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastComplexOp definitions
//===----------------------------------------------------------------------===//

BroadcastComplexOpAdaptor::BroadcastComplexOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastComplexOpAdaptor::BroadcastComplexOpAdaptor(BroadcastComplexOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastComplexOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastComplexOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastComplexOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastComplexOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastComplexOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastComplexOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastComplexOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastComplexOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_complex' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastComplexOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastComplexOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastComplexOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastComplexOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastComplexOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastComplexOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastComplexOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastComplexOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastComplexOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastComplexOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastComplexOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastComplexOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastComplexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastComplexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastComplexOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastComplexOp::verify() {
  if (failed(BroadcastComplexOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops5(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastComplexOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastComplexOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_complex";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastComplexOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastDivOp definitions
//===----------------------------------------------------------------------===//

BroadcastDivOpAdaptor::BroadcastDivOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastDivOpAdaptor::BroadcastDivOpAdaptor(BroadcastDivOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastDivOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastDivOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastDivOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastDivOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastDivOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastDivOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastDivOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastDivOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_divide' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastDivOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastDivOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastDivOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastDivOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastDivOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastDivOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastDivOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastDivOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastDivOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastDivOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastDivOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastDivOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastDivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastDivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastDivOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastDivOp::verify() {
  if (failed(BroadcastDivOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastDivOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastDivOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_divide";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastDivOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastMaxOp definitions
//===----------------------------------------------------------------------===//

BroadcastMaxOpAdaptor::BroadcastMaxOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastMaxOpAdaptor::BroadcastMaxOpAdaptor(BroadcastMaxOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastMaxOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastMaxOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastMaxOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastMaxOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastMaxOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastMaxOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastMaxOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastMaxOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_maximum' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastMaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastMaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastMaxOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastMaxOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastMaxOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastMaxOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastMaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastMaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastMaxOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastMaxOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastMaxOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastMaxOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastMaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastMaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastMaxOp::verify() {
  if (failed(BroadcastMaxOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastMaxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastMaxOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_maximum";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastMaxOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastMinOp definitions
//===----------------------------------------------------------------------===//

BroadcastMinOpAdaptor::BroadcastMinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastMinOpAdaptor::BroadcastMinOpAdaptor(BroadcastMinOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastMinOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastMinOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastMinOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastMinOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastMinOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastMinOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastMinOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastMinOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_minimum' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastMinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastMinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastMinOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastMinOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastMinOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastMinOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastMinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastMinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastMinOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastMinOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastMinOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastMinOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastMinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastMinOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastMinOp::verify() {
  if (failed(BroadcastMinOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastMinOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastMinOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_minimum";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastMinOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastMulOp definitions
//===----------------------------------------------------------------------===//

BroadcastMulOpAdaptor::BroadcastMulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastMulOpAdaptor::BroadcastMulOpAdaptor(BroadcastMulOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastMulOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastMulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastMulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastMulOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastMulOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastMulOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastMulOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastMulOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_multiply' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastMulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastMulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastMulOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastMulOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastMulOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastMulOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastMulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastMulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastMulOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastMulOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastMulOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastMulOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastMulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastMulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastMulOp::verify() {
  if (failed(BroadcastMulOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastMulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastMulOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_multiply";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastMulOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastOrOp definitions
//===----------------------------------------------------------------------===//

BroadcastOrOpAdaptor::BroadcastOrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastOrOpAdaptor::BroadcastOrOpAdaptor(BroadcastOrOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastOrOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastOrOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastOrOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastOrOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastOrOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastOrOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastOrOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastOrOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_or' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastOrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastOrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastOrOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastOrOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastOrOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastOrOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastOrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastOrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastOrOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastOrOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastOrOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastOrOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastOrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastOrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastOrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastOrOp::verify() {
  if (failed(BroadcastOrOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastOrOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastOrOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_or";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastOrOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastPolygammaOp definitions
//===----------------------------------------------------------------------===//

BroadcastPolygammaOpAdaptor::BroadcastPolygammaOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastPolygammaOpAdaptor::BroadcastPolygammaOpAdaptor(BroadcastPolygammaOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastPolygammaOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastPolygammaOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastPolygammaOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastPolygammaOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastPolygammaOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastPolygammaOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastPolygammaOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastPolygammaOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_polygamma' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastPolygammaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastPolygammaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastPolygammaOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastPolygammaOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastPolygammaOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastPolygammaOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastPolygammaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastPolygammaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastPolygammaOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastPolygammaOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastPolygammaOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastPolygammaOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastPolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastPolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastPolygammaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastPolygammaOp::verify() {
  if (failed(BroadcastPolygammaOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastPolygammaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastPolygammaOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_polygamma";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastPolygammaOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastPowOp definitions
//===----------------------------------------------------------------------===//

BroadcastPowOpAdaptor::BroadcastPowOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastPowOpAdaptor::BroadcastPowOpAdaptor(BroadcastPowOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastPowOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastPowOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastPowOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastPowOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastPowOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastPowOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastPowOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastPowOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_power' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastPowOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastPowOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastPowOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastPowOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastPowOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastPowOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastPowOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastPowOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastPowOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastPowOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastPowOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastPowOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastPowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastPowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastPowOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastPowOp::verify() {
  if (failed(BroadcastPowOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastPowOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastPowOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_power";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastPowOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastRemOp definitions
//===----------------------------------------------------------------------===//

BroadcastRemOpAdaptor::BroadcastRemOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastRemOpAdaptor::BroadcastRemOpAdaptor(BroadcastRemOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastRemOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastRemOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastRemOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastRemOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastRemOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastRemOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastRemOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastRemOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_remainder' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastRemOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastRemOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastRemOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastRemOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastRemOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastRemOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastRemOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastRemOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastRemOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastRemOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastRemOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastRemOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastRemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastRemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastRemOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastRemOp::verify() {
  if (failed(BroadcastRemOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastRemOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastRemOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_remainder";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastRemOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastSelectOp definitions
//===----------------------------------------------------------------------===//

BroadcastSelectOpAdaptor::BroadcastSelectOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastSelectOpAdaptor::BroadcastSelectOpAdaptor(BroadcastSelectOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastSelectOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastSelectOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastSelectOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastSelectOpAdaptor::pred() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastSelectOpAdaptor::on_true() {
  return *getODSOperands(1).begin();
}

::mlir::Value BroadcastSelectOpAdaptor::on_false() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr BroadcastSelectOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult BroadcastSelectOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastSelectOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastSelectOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastSelectOp::pred() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastSelectOp::on_true() {
  return *getODSOperands(1).begin();
}

::mlir::Value BroadcastSelectOp::on_false() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange BroadcastSelectOp::predMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastSelectOp::on_trueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastSelectOp::on_falseMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastSelectOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastSelectOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void BroadcastSelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false) {
  odsState.addOperands(pred);
  odsState.addOperands(on_true);
  odsState.addOperands(on_false);
  odsState.addTypes(resultType0);
}

void BroadcastSelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false) {
  odsState.addOperands(pred);
  odsState.addOperands(on_true);
  odsState.addOperands(on_false);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastSelectOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastSelectOp::verify() {
  if (failed(BroadcastSelectOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}



::mlir::ParseResult BroadcastSelectOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType predRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> predOperands(predRawOperands);  ::llvm::SMLoc predOperandsLoc;
  (void)predOperandsLoc;
  ::mlir::OpAsmParser::OperandType on_trueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> on_trueOperands(on_trueRawOperands);  ::llvm::SMLoc on_trueOperandsLoc;
  (void)on_trueOperandsLoc;
  ::mlir::OpAsmParser::OperandType on_falseRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> on_falseOperands(on_falseRawOperands);  ::llvm::SMLoc on_falseOperandsLoc;
  (void)on_falseOperandsLoc;
  ::mlir::Type predRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> predTypes(predRawTypes);
  ::mlir::Type on_trueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> on_trueTypes(on_trueRawTypes);
  ::mlir::Type on_falseRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> on_falseTypes(on_falseRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  predOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(predRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  on_trueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(on_trueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  on_falseOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(on_falseRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(predRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(on_trueRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(on_falseRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(predOperands, predTypes, predOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(on_trueOperands, on_trueTypes, on_trueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(on_falseOperands, on_falseTypes, on_falseOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastSelectOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_select";
  p << ' ';
  p << pred();
  p << ",";
  p << ' ';
  p << on_true();
  p << ",";
  p << ' ';
  p << on_false();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(pred().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(on_true().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(on_false().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastSelectOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastShiftLeftOp definitions
//===----------------------------------------------------------------------===//

BroadcastShiftLeftOpAdaptor::BroadcastShiftLeftOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastShiftLeftOpAdaptor::BroadcastShiftLeftOpAdaptor(BroadcastShiftLeftOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastShiftLeftOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastShiftLeftOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastShiftLeftOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastShiftLeftOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastShiftLeftOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastShiftLeftOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastShiftLeftOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastShiftLeftOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_shift_left' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastShiftLeftOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastShiftLeftOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastShiftLeftOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastShiftLeftOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastShiftLeftOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastShiftLeftOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastShiftLeftOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastShiftLeftOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastShiftLeftOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastShiftLeftOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastShiftLeftOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastShiftLeftOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastShiftLeftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastShiftLeftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastShiftLeftOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastShiftLeftOp::verify() {
  if (failed(BroadcastShiftLeftOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastShiftLeftOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastShiftLeftOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_shift_left";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastShiftLeftOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastShiftRightArithmeticOp definitions
//===----------------------------------------------------------------------===//

BroadcastShiftRightArithmeticOpAdaptor::BroadcastShiftRightArithmeticOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastShiftRightArithmeticOpAdaptor::BroadcastShiftRightArithmeticOpAdaptor(BroadcastShiftRightArithmeticOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastShiftRightArithmeticOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastShiftRightArithmeticOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastShiftRightArithmeticOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastShiftRightArithmeticOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastShiftRightArithmeticOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastShiftRightArithmeticOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastShiftRightArithmeticOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastShiftRightArithmeticOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_shift_right_arithmetic' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastShiftRightArithmeticOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastShiftRightArithmeticOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastShiftRightArithmeticOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastShiftRightArithmeticOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastShiftRightArithmeticOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastShiftRightArithmeticOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastShiftRightArithmeticOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastShiftRightArithmeticOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastShiftRightArithmeticOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastShiftRightArithmeticOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastShiftRightArithmeticOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastShiftRightArithmeticOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastShiftRightArithmeticOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastShiftRightArithmeticOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastShiftRightArithmeticOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastShiftRightArithmeticOp::verify() {
  if (failed(BroadcastShiftRightArithmeticOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastShiftRightArithmeticOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastShiftRightArithmeticOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_shift_right_arithmetic";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastShiftRightArithmeticOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastShiftRightLogicalOp definitions
//===----------------------------------------------------------------------===//

BroadcastShiftRightLogicalOpAdaptor::BroadcastShiftRightLogicalOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastShiftRightLogicalOpAdaptor::BroadcastShiftRightLogicalOpAdaptor(BroadcastShiftRightLogicalOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastShiftRightLogicalOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastShiftRightLogicalOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastShiftRightLogicalOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastShiftRightLogicalOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastShiftRightLogicalOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastShiftRightLogicalOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastShiftRightLogicalOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastShiftRightLogicalOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_shift_right_logical' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastShiftRightLogicalOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastShiftRightLogicalOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastShiftRightLogicalOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastShiftRightLogicalOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastShiftRightLogicalOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastShiftRightLogicalOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastShiftRightLogicalOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastShiftRightLogicalOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastShiftRightLogicalOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastShiftRightLogicalOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastShiftRightLogicalOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastShiftRightLogicalOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastShiftRightLogicalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastShiftRightLogicalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastShiftRightLogicalOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastShiftRightLogicalOp::verify() {
  if (failed(BroadcastShiftRightLogicalOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastShiftRightLogicalOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastShiftRightLogicalOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_shift_right_logical";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastShiftRightLogicalOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastSubOp definitions
//===----------------------------------------------------------------------===//

BroadcastSubOpAdaptor::BroadcastSubOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastSubOpAdaptor::BroadcastSubOpAdaptor(BroadcastSubOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastSubOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastSubOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastSubOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastSubOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastSubOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastSubOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastSubOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastSubOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_subtract' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastSubOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastSubOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastSubOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastSubOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastSubOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastSubOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastSubOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastSubOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastSubOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastSubOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastSubOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastSubOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastSubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastSubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastSubOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastSubOp::verify() {
  if (failed(BroadcastSubOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastSubOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastSubOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_subtract";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastSubOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastXorOp definitions
//===----------------------------------------------------------------------===//

BroadcastXorOpAdaptor::BroadcastXorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastXorOpAdaptor::BroadcastXorOpAdaptor(BroadcastXorOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastXorOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastXorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastXorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastXorOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastXorOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastXorOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastXorOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastXorOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_xor' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastXorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastXorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastXorOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastXorOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastXorOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastXorOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastXorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastXorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastXorOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastXorOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastXorOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastXorOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastXorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastXorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastXorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastXorOp::verify() {
  if (failed(BroadcastXorOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastXorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastXorOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_xor";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastXorOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastZetaOp definitions
//===----------------------------------------------------------------------===//

BroadcastZetaOpAdaptor::BroadcastZetaOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastZetaOpAdaptor::BroadcastZetaOpAdaptor(BroadcastZetaOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastZetaOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastZetaOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastZetaOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastZetaOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastZetaOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastZetaOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastZetaOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastZetaOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'chlo.broadcast_zeta' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastZetaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastZetaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastZetaOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastZetaOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastZetaOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastZetaOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastZetaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastZetaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastZetaOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > BroadcastZetaOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void BroadcastZetaOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute BroadcastZetaOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}



void BroadcastZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addTypes(resultType0);
}

void BroadcastZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastZetaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastZetaOp::verify() {
  if (failed(BroadcastZetaOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





::mlir::ParseResult BroadcastZetaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::OperandType rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::Type lhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> lhsTypes(lhsRawTypes);
  ::mlir::Type rhsRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> rhsTypes(rhsRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseType(lhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(rhsRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastZetaOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.broadcast_zeta";
  p << ' ';
  p << lhs();
  p << ",";
  p << ' ';
  p << rhs();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ' << "(";
  p << ::llvm::ArrayRef<::mlir::Type>(lhs().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(rhs().getType());
  p << ")";
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void BroadcastZetaOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ConjOp definitions
//===----------------------------------------------------------------------===//

ConjOpAdaptor::ConjOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ConjOpAdaptor::ConjOpAdaptor(ConjOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ConjOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ConjOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ConjOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConjOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr ConjOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ConjOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ConjOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConjOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConjOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ConjOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConjOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConjOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConjOp::result() {
  return *getODSResults(0).begin();
}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConjOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void ConjOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult ConjOp::verify() {
  if (failed(ConjOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult ConjOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConjOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.conj";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void ConjOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ConstantLikeOp definitions
//===----------------------------------------------------------------------===//

ConstantLikeOpAdaptor::ConstantLikeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ConstantLikeOpAdaptor::ConstantLikeOpAdaptor(ConstantLikeOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ConstantLikeOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ConstantLikeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ConstantLikeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConstantLikeOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr ConstantLikeOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute ConstantLikeOpAdaptor::value() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::Attribute attr = odsAttrs.get("value").cast<::mlir::Attribute>();
  return attr;
}

::mlir::LogicalResult ConstantLikeOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_value = odsAttrs.get("value");
  if (!tblgen_value) return emitError(loc, "'chlo.constant_like' op ""requires attribute 'value'");
    if (!((true))) return emitError(loc, "'chlo.constant_like' op ""attribute 'value' failed to satisfy constraint: any attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ConstantLikeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConstantLikeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConstantLikeOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ConstantLikeOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConstantLikeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConstantLikeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Attribute ConstantLikeOp::valueAttr() {
  return (*this)->getAttr("value").template cast<::mlir::Attribute>();
}

::mlir::Attribute ConstantLikeOp::value() {
  auto attr = valueAttr();
  return attr;
}

void ConstantLikeOp::valueAttr(::mlir::Attribute attr) {
  (*this)->setAttr("value", attr);
}

void ConstantLikeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Attribute value, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addAttribute("value", value);
  odsState.addTypes(resultType0);
}

void ConstantLikeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Attribute value, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addAttribute("value", value);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(ConstantLikeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstantLikeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Attribute value, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addAttribute("value", value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstantLikeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstantLikeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(ConstantLikeOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult ConstantLikeOp::verify() {
  if (failed(ConstantLikeOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops1(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}





void ConstantLikeOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::CoshOp definitions
//===----------------------------------------------------------------------===//

CoshOpAdaptor::CoshOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

CoshOpAdaptor::CoshOpAdaptor(CoshOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange CoshOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CoshOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CoshOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CoshOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr CoshOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult CoshOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> CoshOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CoshOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CoshOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange CoshOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CoshOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CoshOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CoshOp::result() {
  return *getODSResults(0).begin();
}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CoshOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void CoshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult CoshOp::verify() {
  if (failed(CoshOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult CoshOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CoshOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.cosh";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void CoshOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::DigammaOp definitions
//===----------------------------------------------------------------------===//

DigammaOpAdaptor::DigammaOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

DigammaOpAdaptor::DigammaOpAdaptor(DigammaOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange DigammaOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> DigammaOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange DigammaOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DigammaOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr DigammaOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult DigammaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> DigammaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DigammaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DigammaOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange DigammaOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DigammaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DigammaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DigammaOp::result() {
  return *getODSResults(0).begin();
}

void DigammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void DigammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DigammaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void DigammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void DigammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult DigammaOp::verify() {
  if (failed(DigammaOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult DigammaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DigammaOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.digamma";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void DigammaOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ErfOp definitions
//===----------------------------------------------------------------------===//

ErfOpAdaptor::ErfOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ErfOpAdaptor::ErfOpAdaptor(ErfOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ErfOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ErfOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ErfOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ErfOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr ErfOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ErfOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ErfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ErfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ErfOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ErfOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ErfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ErfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ErfOp::result() {
  return *getODSResults(0).begin();
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ErfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void ErfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult ErfOp::verify() {
  if (failed(ErfOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult ErfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ErfOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.erf";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void ErfOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ErfcOp definitions
//===----------------------------------------------------------------------===//

ErfcOpAdaptor::ErfcOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ErfcOpAdaptor::ErfcOpAdaptor(ErfcOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ErfcOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ErfcOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ErfcOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ErfcOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr ErfcOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ErfcOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ErfcOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ErfcOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ErfcOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ErfcOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ErfcOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ErfcOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ErfcOp::result() {
  return *getODSResults(0).begin();
}

void ErfcOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void ErfcOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ErfcOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ErfcOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void ErfcOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult ErfcOp::verify() {
  if (failed(ErfcOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult ErfcOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ErfcOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.erfc";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void ErfcOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::IsInfOp definitions
//===----------------------------------------------------------------------===//

IsInfOpAdaptor::IsInfOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

IsInfOpAdaptor::IsInfOpAdaptor(IsInfOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange IsInfOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> IsInfOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange IsInfOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsInfOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr IsInfOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult IsInfOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> IsInfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IsInfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsInfOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange IsInfOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> IsInfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IsInfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsInfOp::result() {
  return *getODSResults(0).begin();
}

void IsInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void IsInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(IsInfOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void IsInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IsInfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void IsInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(IsInfOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult IsInfOp::verify() {
  if (failed(IsInfOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops3(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}



::mlir::ParseResult IsInfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void IsInfOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.is_inf";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void IsInfOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::IsNegInfOp definitions
//===----------------------------------------------------------------------===//

IsNegInfOpAdaptor::IsNegInfOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

IsNegInfOpAdaptor::IsNegInfOpAdaptor(IsNegInfOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange IsNegInfOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> IsNegInfOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange IsNegInfOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsNegInfOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr IsNegInfOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult IsNegInfOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> IsNegInfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IsNegInfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsNegInfOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange IsNegInfOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> IsNegInfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IsNegInfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsNegInfOp::result() {
  return *getODSResults(0).begin();
}

void IsNegInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void IsNegInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(IsNegInfOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void IsNegInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IsNegInfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void IsNegInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(IsNegInfOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult IsNegInfOp::verify() {
  if (failed(IsNegInfOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops3(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}



::mlir::ParseResult IsNegInfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void IsNegInfOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.is_neg_inf";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void IsNegInfOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::IsPosInfOp definitions
//===----------------------------------------------------------------------===//

IsPosInfOpAdaptor::IsPosInfOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

IsPosInfOpAdaptor::IsPosInfOpAdaptor(IsPosInfOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange IsPosInfOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> IsPosInfOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange IsPosInfOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsPosInfOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr IsPosInfOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult IsPosInfOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> IsPosInfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IsPosInfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsPosInfOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange IsPosInfOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> IsPosInfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IsPosInfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsPosInfOp::result() {
  return *getODSResults(0).begin();
}

void IsPosInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void IsPosInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (succeeded(IsPosInfOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void IsPosInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IsPosInfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void IsPosInfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    ::mlir::SmallVector<::mlir::Type, 2> inferredReturnTypes;
    if (succeeded(IsPosInfOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      ::llvm::report_fatal_error("Failed to infer result type(s).");
}

::mlir::LogicalResult IsPosInfOp::verify() {
  if (failed(IsPosInfOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops3(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}



::mlir::ParseResult IsPosInfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void IsPosInfOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.is_pos_inf";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void IsPosInfOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::LgammaOp definitions
//===----------------------------------------------------------------------===//

LgammaOpAdaptor::LgammaOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

LgammaOpAdaptor::LgammaOpAdaptor(LgammaOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange LgammaOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> LgammaOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange LgammaOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LgammaOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr LgammaOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult LgammaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> LgammaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LgammaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LgammaOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange LgammaOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> LgammaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LgammaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LgammaOp::result() {
  return *getODSResults(0).begin();
}

void LgammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void LgammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LgammaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LgammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void LgammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult LgammaOp::verify() {
  if (failed(LgammaOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult LgammaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LgammaOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.lgamma";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void LgammaOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::MinimumBroadcastShapesOp definitions
//===----------------------------------------------------------------------===//

MinimumBroadcastShapesOpAdaptor::MinimumBroadcastShapesOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

MinimumBroadcastShapesOpAdaptor::MinimumBroadcastShapesOpAdaptor(MinimumBroadcastShapesOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange MinimumBroadcastShapesOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> MinimumBroadcastShapesOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange MinimumBroadcastShapesOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange MinimumBroadcastShapesOpAdaptor::shapes() {
  return getODSOperands(0);
}

::mlir::DictionaryAttr MinimumBroadcastShapesOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult MinimumBroadcastShapesOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> MinimumBroadcastShapesOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range MinimumBroadcastShapesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range MinimumBroadcastShapesOp::shapes() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange MinimumBroadcastShapesOp::shapesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MinimumBroadcastShapesOp::getODSResultIndexAndLength(unsigned index) {
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

::mlir::Operation::result_range MinimumBroadcastShapesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range MinimumBroadcastShapesOp::results() {
  return getODSResults(0);
}

void MinimumBroadcastShapesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MinimumBroadcastShapesOp::verify() {
  if (failed(MinimumBroadcastShapesOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops6(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops6(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult MinimumBroadcastShapesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SmallVector<::mlir::OpAsmParser::OperandType, 4> shapesOperands;
  ::llvm::SMLoc shapesOperandsLoc;
  (void)shapesOperandsLoc;
  ::mlir::SmallVector<::mlir::Type, 1> shapesTypes;
  ::mlir::SmallVector<::mlir::Type, 1> resultsTypes;

  shapesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(shapesOperands))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(shapesTypes))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(resultsTypes))
    return ::mlir::failure();
  result.addTypes(resultsTypes);
  if (parser.resolveOperands(shapesOperands, shapesTypes, shapesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MinimumBroadcastShapesOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.minimum_broadcast_shapes";
  p << ' ';
  p << shapes();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << shapes().getTypes();
  p << ' ' << "->";
  p << ' ';
  p << results().getTypes();
}

void MinimumBroadcastShapesOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::PolygammaOp definitions
//===----------------------------------------------------------------------===//

PolygammaOpAdaptor::PolygammaOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

PolygammaOpAdaptor::PolygammaOpAdaptor(PolygammaOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange PolygammaOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> PolygammaOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange PolygammaOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PolygammaOpAdaptor::n() {
  return *getODSOperands(0).begin();
}

::mlir::Value PolygammaOpAdaptor::x() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr PolygammaOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult PolygammaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> PolygammaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PolygammaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PolygammaOp::n() {
  return *getODSOperands(0).begin();
}

::mlir::Value PolygammaOp::x() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange PolygammaOp::nMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PolygammaOp::xMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PolygammaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PolygammaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PolygammaOp::result() {
  return *getODSResults(0).begin();
}

void PolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value n, ::mlir::Value x) {
  odsState.addOperands(n);
  odsState.addOperands(x);
  odsState.addTypes(result);
}

void PolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value n, ::mlir::Value x) {
  odsState.addOperands(n);
  odsState.addOperands(x);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PolygammaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value n, ::mlir::Value x) {
  odsState.addOperands(n);
  odsState.addOperands(x);
  odsState.addTypes({n.getType()});

}

void PolygammaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult PolygammaOp::verify() {
  if (failed(PolygammaOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult PolygammaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType nRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> nOperands(nRawOperands);  ::llvm::SMLoc nOperandsLoc;
  (void)nOperandsLoc;
  ::mlir::OpAsmParser::OperandType xRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> xOperands(xRawOperands);  ::llvm::SMLoc xOperandsLoc;
  (void)xOperandsLoc;
  ::mlir::Type nRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> nTypes(nRawTypes);
  ::mlir::Type xRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> xTypes(xRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  nOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(nRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  xOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(xRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(nRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(xRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(nOperands, nTypes, nOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(xOperands, xTypes, xOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PolygammaOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.polygamma";
  p << ' ';
  p << n();
  p << ",";
  p << ' ';
  p << x();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(n().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(x().getType());
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void PolygammaOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::SinhOp definitions
//===----------------------------------------------------------------------===//

SinhOpAdaptor::SinhOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

SinhOpAdaptor::SinhOpAdaptor(SinhOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange SinhOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SinhOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SinhOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SinhOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr SinhOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult SinhOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> SinhOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SinhOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SinhOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SinhOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SinhOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SinhOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SinhOp::result() {
  return *getODSResults(0).begin();
}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SinhOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void SinhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult SinhOp::verify() {
  if (failed(SinhOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult SinhOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SinhOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.sinh";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void SinhOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::TanOp definitions
//===----------------------------------------------------------------------===//

TanOpAdaptor::TanOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

TanOpAdaptor::TanOpAdaptor(TanOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange TanOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> TanOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange TanOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TanOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr TanOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult TanOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> TanOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TanOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TanOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TanOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TanOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TanOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TanOp::result() {
  return *getODSResults(0).begin();
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(result);
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TanOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void TanOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult TanOp::verify() {
  if (failed(TanOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops0(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult TanOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(operandRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseType(resultRawTypes[0]))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TanOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.tan";
  p << ' ';
  p << operand();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(operand().getType());
  p << ' ' << "->";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(result().getType());
}

void TanOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ZetaOp definitions
//===----------------------------------------------------------------------===//

ZetaOpAdaptor::ZetaOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ZetaOpAdaptor::ZetaOpAdaptor(ZetaOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ZetaOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ZetaOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ZetaOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ZetaOpAdaptor::x() {
  return *getODSOperands(0).begin();
}

::mlir::Value ZetaOpAdaptor::q() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr ZetaOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ZetaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ZetaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ZetaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ZetaOp::x() {
  return *getODSOperands(0).begin();
}

::mlir::Value ZetaOp::q() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ZetaOp::xMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ZetaOp::qMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ZetaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ZetaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ZetaOp::result() {
  return *getODSResults(0).begin();
}

void ZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value x, ::mlir::Value q) {
  odsState.addOperands(x);
  odsState.addOperands(q);
  odsState.addTypes(result);
}

void ZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value q) {
  odsState.addOperands(x);
  odsState.addOperands(q);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ZetaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value q) {
  odsState.addOperands(x);
  odsState.addOperands(q);
  odsState.addTypes({x.getType()});

}

void ZetaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

::mlir::LogicalResult ZetaOp::verify() {
  if (failed(ZetaOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_chlo_ops4(getOperation(), v.getType(), "result", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  return Verify(*this);
}

::mlir::ParseResult ZetaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::OperandType xRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> xOperands(xRawOperands);  ::llvm::SMLoc xOperandsLoc;
  (void)xOperandsLoc;
  ::mlir::OpAsmParser::OperandType qRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::OperandType> qOperands(qRawOperands);  ::llvm::SMLoc qOperandsLoc;
  (void)qOperandsLoc;
  ::mlir::Type xRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> xTypes(xRawTypes);
  ::mlir::Type qRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> qTypes(qRawTypes);
  ::mlir::SmallVector<::mlir::Type, 1> allResultTypes;

  xOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(xRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  qOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(qRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(xRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseType(qRawTypes[0]))
    return ::mlir::failure();
  if (parser.parseArrow())
    return ::mlir::failure();

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(xOperands, xTypes, xOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(qOperands, qTypes, qOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ZetaOp::print(::mlir::OpAsmPrinter &p) {
  p << "chlo.zeta";
  p << ' ';
  p << x();
  p << ",";
  p << ' ';
  p << q();
  p.printOptionalAttrDict((*this)->getAttrs(), /*elidedAttrs=*/{});
  p << ' ' << ":";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(x().getType());
  p << ",";
  p << ' ';
  p << ::llvm::ArrayRef<::mlir::Type>(q().getType());
  p << ' ' << "->";
  p << ' ';
  p << getOperation()->getResultTypes();
}

void ZetaOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {

}

} // namespace chlo
} // namespace mlir

#endif  // GET_OP_CLASSES

