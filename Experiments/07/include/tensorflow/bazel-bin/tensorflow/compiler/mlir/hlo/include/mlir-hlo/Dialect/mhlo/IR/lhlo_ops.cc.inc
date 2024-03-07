/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::lmhlo::FusionOp,
::mlir::lmhlo::AbsOp,
::mlir::lmhlo::AddOp,
::mlir::lmhlo::AllGatherOp,
::mlir::lmhlo::AllReduceOp,
::mlir::lmhlo::AllToAllOp,
::mlir::lmhlo::AndOp,
::mlir::lmhlo::Atan2Op,
::mlir::lmhlo::BatchNormGradOp,
::mlir::lmhlo::BatchNormInferenceOp,
::mlir::lmhlo::BatchNormTrainingOp,
::mlir::lmhlo::BitcastConvertOp,
::mlir::lmhlo::BroadcastInDimOp,
::mlir::lmhlo::BroadcastOp,
::mlir::lmhlo::CaseOp,
::mlir::lmhlo::CbrtOp,
::mlir::lmhlo::CeilOp,
::mlir::lmhlo::CholeskyOp,
::mlir::lmhlo::ClampOp,
::mlir::lmhlo::ClzOp,
::mlir::lmhlo::CollectivePermuteOp,
::mlir::lmhlo::CompareOp,
::mlir::lmhlo::ComplexOp,
::mlir::lmhlo::ConcatenateOp,
::mlir::lmhlo::ConstOp,
::mlir::lmhlo::ConvOp,
::mlir::lmhlo::ConvertOp,
::mlir::lmhlo::CopyOp,
::mlir::lmhlo::CosOp,
::mlir::lmhlo::CustomCallOp,
::mlir::lmhlo::DivOp,
::mlir::lmhlo::DotOp,
::mlir::lmhlo::DynamicSliceOp,
::mlir::lmhlo::DynamicUpdateSliceOp,
::mlir::lmhlo::ExpOp,
::mlir::lmhlo::Expm1Op,
::mlir::lmhlo::FftOp,
::mlir::lmhlo::FloorOp,
::mlir::lmhlo::GatherOp,
::mlir::lmhlo::ImagOp,
::mlir::lmhlo::InfeedOp,
::mlir::lmhlo::IotaOp,
::mlir::lmhlo::IsFiniteOp,
::mlir::lmhlo::Log1pOp,
::mlir::lmhlo::LogOp,
::mlir::lmhlo::LogisticOp,
::mlir::lmhlo::MapOp,
::mlir::lmhlo::MaxOp,
::mlir::lmhlo::MinOp,
::mlir::lmhlo::MulOp,
::mlir::lmhlo::NegOp,
::mlir::lmhlo::NotOp,
::mlir::lmhlo::OrOp,
::mlir::lmhlo::OutfeedOp,
::mlir::lmhlo::PadOp,
::mlir::lmhlo::PartitionIdOp,
::mlir::lmhlo::PopulationCountOp,
::mlir::lmhlo::PowOp,
::mlir::lmhlo::RealOp,
::mlir::lmhlo::ReduceOp,
::mlir::lmhlo::ReducePrecisionOp,
::mlir::lmhlo::ReduceWindowOp,
::mlir::lmhlo::RemOp,
::mlir::lmhlo::ReplicaIdOp,
::mlir::lmhlo::ReshapeOp,
::mlir::lmhlo::ReverseOp,
::mlir::lmhlo::RngGetAndUpdateStateOp,
::mlir::lmhlo::RoundOp,
::mlir::lmhlo::RsqrtOp,
::mlir::lmhlo::ScatterOp,
::mlir::lmhlo::SelectAndScatterOp,
::mlir::lmhlo::SelectOp,
::mlir::lmhlo::ShiftLeftOp,
::mlir::lmhlo::ShiftRightArithmeticOp,
::mlir::lmhlo::ShiftRightLogicalOp,
::mlir::lmhlo::SignOp,
::mlir::lmhlo::SinOp,
::mlir::lmhlo::SliceOp,
::mlir::lmhlo::SortOp,
::mlir::lmhlo::SqrtOp,
::mlir::lmhlo::SubOp,
::mlir::lmhlo::TanhOp,
::mlir::lmhlo::TransposeOp,
::mlir::lmhlo::TriangularSolveOp,
::mlir::lmhlo::WhileOp,
::mlir::lmhlo::XorOp,
::mlir::lmhlo::TerminatorOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace lmhlo {
static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops0(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::IntegerType>())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of floating-point or integer or complex-type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops1(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::IntegerType>())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of floating-point or integer or complex-type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops2(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && (((((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1)))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or pred (AKA boolean or 1-bit integer) values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops3(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && (((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || ((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of floating-point or complex-type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops4(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && ((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of floating-point values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops5(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && ((((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops6(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of pred (AKA boolean or 1-bit integer) values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops7(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && ((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of complex-type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops8(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of 32-bit unsigned integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops9(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && (((((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || (((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((type.cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>()))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or floating-point values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops10(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && ((type.cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of 64-bit unsigned integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_lhlo_ops11(::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind, unsigned valueGroupStartIndex) {
  if (!(((type.isa<::mlir::MemRefType>())) && ((type.cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))))) {
    return op->emitOpError(valueKind) << " #" << valueGroupStartIndex << " must be memref of pred (AKA boolean or 1-bit integer) values, but got " << type;
  }
  return ::mlir::success();
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::FusionOp definitions
//===----------------------------------------------------------------------===//

FusionOpAdaptor::FusionOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

FusionOpAdaptor::FusionOpAdaptor(FusionOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange FusionOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> FusionOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange FusionOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr FusionOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::RegionRange FusionOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &FusionOpAdaptor::region() {
  return *odsRegions[0];
}

::mlir::LogicalResult FusionOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> FusionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FusionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> FusionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FusionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &FusionOp::region() {
  return (*this)->getRegion(0);
}



::mlir::LogicalResult FusionOp::verify() {
  if (failed(FusionOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>((*this)->getRegion(0))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('region') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::mlir::success();
}

void FusionOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::AbsOp definitions
//===----------------------------------------------------------------------===//

AbsOpAdaptor::AbsOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AbsOpAdaptor::AbsOpAdaptor(AbsOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AbsOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AbsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AbsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AbsOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value AbsOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr AbsOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult AbsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AbsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AbsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AbsOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value AbsOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange AbsOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AbsOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AbsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AbsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AbsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void AbsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AbsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AbsOp::verify() {
  if (failed(AbsOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void AbsOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::AddOp definitions
//===----------------------------------------------------------------------===//

AddOpAdaptor::AddOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AddOpAdaptor::AddOpAdaptor(AddOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AddOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AddOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AddOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value AddOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value AddOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr AddOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr AddOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult AddOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.add' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AddOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AddOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AddOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value AddOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value AddOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange AddOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AddOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AddOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AddOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AddOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr AddOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > AddOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void AddOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute AddOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void AddOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AddOp::verify() {
  if (failed(AddOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void AddOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::AllGatherOp definitions
//===----------------------------------------------------------------------===//

AllGatherOpAdaptor::AllGatherOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AllGatherOpAdaptor::AllGatherOpAdaptor(AllGatherOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AllGatherOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AllGatherOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange AllGatherOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange AllGatherOpAdaptor::operands() {
  return getODSOperands(0);
}

::mlir::ValueRange AllGatherOpAdaptor::results() {
  return getODSOperands(1);
}

::mlir::DictionaryAttr AllGatherOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr AllGatherOpAdaptor::replica_groups() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("replica_groups").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::BoolAttr AllGatherOpAdaptor::constrain_layout() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("constrain_layout").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::mhlo::ChannelHandle AllGatherOpAdaptor::channel_id() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::mhlo::ChannelHandle attr = odsAttrs.get("channel_id").dyn_cast_or_null<::mlir::mhlo::ChannelHandle>();
  return attr;
}

::mlir::BoolAttr AllGatherOpAdaptor::use_global_device_ids() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("use_global_device_ids").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::IntegerAttr AllGatherOpAdaptor::all_gather_dimension() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("all_gather_dimension").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult AllGatherOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_replica_groups = odsAttrs.get("replica_groups");
  if (!tblgen_replica_groups) return emitError(loc, "'lmhlo.all_gather' op ""requires attribute 'replica_groups'");
    if (!(((tblgen_replica_groups.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_replica_groups.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.all_gather' op ""attribute 'replica_groups' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  {
  auto tblgen_constrain_layout = odsAttrs.get("constrain_layout");
  if (tblgen_constrain_layout) {
    if (!((tblgen_constrain_layout.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.all_gather' op ""attribute 'constrain_layout' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_channel_id = odsAttrs.get("channel_id");
  if (tblgen_channel_id) {
    if (!((tblgen_channel_id.isa<::mlir::mhlo::ChannelHandle>()))) return emitError(loc, "'lmhlo.all_gather' op ""attribute 'channel_id' failed to satisfy constraint: two 64-bit integers 'handle' and 'type'");
  }
  }
  {
  auto tblgen_use_global_device_ids = odsAttrs.get("use_global_device_ids");
  if (tblgen_use_global_device_ids) {
    if (!((tblgen_use_global_device_ids.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.all_gather' op ""attribute 'use_global_device_ids' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_all_gather_dimension = odsAttrs.get("all_gather_dimension");
  if (!tblgen_all_gather_dimension) return emitError(loc, "'lmhlo.all_gather' op ""requires attribute 'all_gather_dimension'");
    if (!(((tblgen_all_gather_dimension.isa<::mlir::IntegerAttr>())) && ((tblgen_all_gather_dimension.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.all_gather' op ""attribute 'all_gather_dimension' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AllGatherOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range AllGatherOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range AllGatherOp::operands() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range AllGatherOp::results() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange AllGatherOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AllGatherOp::resultsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AllGatherOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllGatherOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr AllGatherOp::replica_groupsAttr() {
  return (*this)->getAttr("replica_groups").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr AllGatherOp::replica_groups() {
  auto attr = replica_groupsAttr();
  return attr;
}

::mlir::BoolAttr AllGatherOp::constrain_layoutAttr() {
  return (*this)->getAttr("constrain_layout").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool AllGatherOp::constrain_layout() {
  auto attr = constrain_layoutAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::mhlo::ChannelHandle AllGatherOp::channel_idAttr() {
  return (*this)->getAttr("channel_id").template dyn_cast_or_null<::mlir::mhlo::ChannelHandle>();
}

::llvm::Optional<::mlir::mhlo::ChannelHandle> AllGatherOp::channel_id() {
  auto attr = channel_idAttr();
  return attr ? ::llvm::Optional<::mlir::mhlo::ChannelHandle>(attr) : (::llvm::None);
}

::mlir::BoolAttr AllGatherOp::use_global_device_idsAttr() {
  return (*this)->getAttr("use_global_device_ids").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool AllGatherOp::use_global_device_ids() {
  auto attr = use_global_device_idsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::IntegerAttr AllGatherOp::all_gather_dimensionAttr() {
  return (*this)->getAttr("all_gather_dimension").template cast<::mlir::IntegerAttr>();
}

uint64_t AllGatherOp::all_gather_dimension() {
  auto attr = all_gather_dimensionAttr();
  return attr.getValue().getZExtValue();
}

void AllGatherOp::replica_groupsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("replica_groups", attr);
}

void AllGatherOp::constrain_layoutAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("constrain_layout", attr);
}

void AllGatherOp::channel_idAttr(::mlir::mhlo::ChannelHandle attr) {
  (*this)->setAttr("channel_id", attr);
}

void AllGatherOp::use_global_device_idsAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("use_global_device_ids", attr);
}

void AllGatherOp::all_gather_dimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("all_gather_dimension", attr);
}

::mlir::Attribute AllGatherOp::removeChannel_idAttr() {
  return (*this)->removeAttr("channel_id");
}

void AllGatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, ::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, ::mlir::BoolAttr use_global_device_ids, ::mlir::IntegerAttr all_gather_dimension) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", constrain_layout);
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", use_global_device_ids);
  odsState.addAttribute("all_gather_dimension", all_gather_dimension);
}

void AllGatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, ::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, ::mlir::BoolAttr use_global_device_ids, ::mlir::IntegerAttr all_gather_dimension) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", constrain_layout);
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", use_global_device_ids);
  odsState.addAttribute("all_gather_dimension", all_gather_dimension);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllGatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, bool use_global_device_ids, uint64_t all_gather_dimension) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", odsBuilder.getBoolAttr(constrain_layout));
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", odsBuilder.getBoolAttr(use_global_device_ids));
  odsState.addAttribute("all_gather_dimension", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), all_gather_dimension));
}

void AllGatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, bool use_global_device_ids, uint64_t all_gather_dimension) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", odsBuilder.getBoolAttr(constrain_layout));
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", odsBuilder.getBoolAttr(use_global_device_ids));
  odsState.addAttribute("all_gather_dimension", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), all_gather_dimension));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllGatherOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AllGatherOp::verify() {
  if (failed(AllGatherOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return Verify(*this);
}

void AllGatherOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::AllReduceOp definitions
//===----------------------------------------------------------------------===//

AllReduceOpAdaptor::AllReduceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AllReduceOpAdaptor::AllReduceOpAdaptor(AllReduceOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AllReduceOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AllReduceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange AllReduceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange AllReduceOpAdaptor::operands() {
  return getODSOperands(0);
}

::mlir::ValueRange AllReduceOpAdaptor::results() {
  return getODSOperands(1);
}

::mlir::DictionaryAttr AllReduceOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr AllReduceOpAdaptor::replica_groups() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("replica_groups").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::BoolAttr AllReduceOpAdaptor::constrain_layout() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("constrain_layout").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::mhlo::ChannelHandle AllReduceOpAdaptor::channel_id() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::mhlo::ChannelHandle attr = odsAttrs.get("channel_id").dyn_cast_or_null<::mlir::mhlo::ChannelHandle>();
  return attr;
}

::mlir::BoolAttr AllReduceOpAdaptor::use_global_device_ids() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("use_global_device_ids").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::RegionRange AllReduceOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &AllReduceOpAdaptor::computation() {
  return *odsRegions[0];
}

::mlir::LogicalResult AllReduceOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_replica_groups = odsAttrs.get("replica_groups");
  if (!tblgen_replica_groups) return emitError(loc, "'lmhlo.all_reduce' op ""requires attribute 'replica_groups'");
    if (!(((tblgen_replica_groups.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_replica_groups.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.all_reduce' op ""attribute 'replica_groups' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  {
  auto tblgen_constrain_layout = odsAttrs.get("constrain_layout");
  if (tblgen_constrain_layout) {
    if (!((tblgen_constrain_layout.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.all_reduce' op ""attribute 'constrain_layout' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_channel_id = odsAttrs.get("channel_id");
  if (tblgen_channel_id) {
    if (!((tblgen_channel_id.isa<::mlir::mhlo::ChannelHandle>()))) return emitError(loc, "'lmhlo.all_reduce' op ""attribute 'channel_id' failed to satisfy constraint: two 64-bit integers 'handle' and 'type'");
  }
  }
  {
  auto tblgen_use_global_device_ids = odsAttrs.get("use_global_device_ids");
  if (tblgen_use_global_device_ids) {
    if (!((tblgen_use_global_device_ids.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.all_reduce' op ""attribute 'use_global_device_ids' failed to satisfy constraint: bool attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AllReduceOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range AllReduceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range AllReduceOp::operands() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range AllReduceOp::results() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange AllReduceOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AllReduceOp::resultsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AllReduceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllReduceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &AllReduceOp::computation() {
  return (*this)->getRegion(0);
}

::mlir::DenseIntElementsAttr AllReduceOp::replica_groupsAttr() {
  return (*this)->getAttr("replica_groups").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr AllReduceOp::replica_groups() {
  auto attr = replica_groupsAttr();
  return attr;
}

::mlir::BoolAttr AllReduceOp::constrain_layoutAttr() {
  return (*this)->getAttr("constrain_layout").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool AllReduceOp::constrain_layout() {
  auto attr = constrain_layoutAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::mhlo::ChannelHandle AllReduceOp::channel_idAttr() {
  return (*this)->getAttr("channel_id").template dyn_cast_or_null<::mlir::mhlo::ChannelHandle>();
}

::llvm::Optional<::mlir::mhlo::ChannelHandle> AllReduceOp::channel_id() {
  auto attr = channel_idAttr();
  return attr ? ::llvm::Optional<::mlir::mhlo::ChannelHandle>(attr) : (::llvm::None);
}

::mlir::BoolAttr AllReduceOp::use_global_device_idsAttr() {
  return (*this)->getAttr("use_global_device_ids").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool AllReduceOp::use_global_device_ids() {
  auto attr = use_global_device_idsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void AllReduceOp::replica_groupsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("replica_groups", attr);
}

void AllReduceOp::constrain_layoutAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("constrain_layout", attr);
}

void AllReduceOp::channel_idAttr(::mlir::mhlo::ChannelHandle attr) {
  (*this)->setAttr("channel_id", attr);
}

void AllReduceOp::use_global_device_idsAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("use_global_device_ids", attr);
}

::mlir::Attribute AllReduceOp::removeChannel_idAttr() {
  return (*this)->removeAttr("channel_id");
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, ::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, ::mlir::BoolAttr use_global_device_ids) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", constrain_layout);
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", use_global_device_ids);
  (void)odsState.addRegion();
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, ::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, ::mlir::BoolAttr use_global_device_ids) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", constrain_layout);
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", use_global_device_ids);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, bool use_global_device_ids) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", odsBuilder.getBoolAttr(constrain_layout));
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", odsBuilder.getBoolAttr(use_global_device_ids));
  (void)odsState.addRegion();
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, bool use_global_device_ids) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", odsBuilder.getBoolAttr(constrain_layout));
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", odsBuilder.getBoolAttr(use_global_device_ids));
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllReduceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AllReduceOp::verify() {
  if (failed(AllReduceOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>((*this)->getRegion(0))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('computation') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return Verify(*this);
}

void AllReduceOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::AllToAllOp definitions
//===----------------------------------------------------------------------===//

AllToAllOpAdaptor::AllToAllOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AllToAllOpAdaptor::AllToAllOpAdaptor(AllToAllOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AllToAllOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AllToAllOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange AllToAllOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange AllToAllOpAdaptor::operands() {
  return getODSOperands(0);
}

::mlir::ValueRange AllToAllOpAdaptor::results() {
  return getODSOperands(1);
}

::mlir::DictionaryAttr AllToAllOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr AllToAllOpAdaptor::replica_groups() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("replica_groups").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::BoolAttr AllToAllOpAdaptor::constrain_layout() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("constrain_layout").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::mhlo::ChannelHandle AllToAllOpAdaptor::channel_id() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::mhlo::ChannelHandle attr = odsAttrs.get("channel_id").dyn_cast_or_null<::mlir::mhlo::ChannelHandle>();
  return attr;
}

::mlir::BoolAttr AllToAllOpAdaptor::use_global_device_ids() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("use_global_device_ids").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::IntegerAttr AllToAllOpAdaptor::split_dimension() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("split_dimension").dyn_cast_or_null<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult AllToAllOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_replica_groups = odsAttrs.get("replica_groups");
  if (!tblgen_replica_groups) return emitError(loc, "'lmhlo.all_to_all' op ""requires attribute 'replica_groups'");
    if (!(((tblgen_replica_groups.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_replica_groups.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.all_to_all' op ""attribute 'replica_groups' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  {
  auto tblgen_constrain_layout = odsAttrs.get("constrain_layout");
  if (tblgen_constrain_layout) {
    if (!((tblgen_constrain_layout.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.all_to_all' op ""attribute 'constrain_layout' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_channel_id = odsAttrs.get("channel_id");
  if (tblgen_channel_id) {
    if (!((tblgen_channel_id.isa<::mlir::mhlo::ChannelHandle>()))) return emitError(loc, "'lmhlo.all_to_all' op ""attribute 'channel_id' failed to satisfy constraint: two 64-bit integers 'handle' and 'type'");
  }
  }
  {
  auto tblgen_use_global_device_ids = odsAttrs.get("use_global_device_ids");
  if (tblgen_use_global_device_ids) {
    if (!((tblgen_use_global_device_ids.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.all_to_all' op ""attribute 'use_global_device_ids' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_split_dimension = odsAttrs.get("split_dimension");
  if (tblgen_split_dimension) {
    if (!(((tblgen_split_dimension.isa<::mlir::IntegerAttr>())) && ((tblgen_split_dimension.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.all_to_all' op ""attribute 'split_dimension' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AllToAllOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range AllToAllOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range AllToAllOp::operands() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range AllToAllOp::results() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange AllToAllOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AllToAllOp::resultsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AllToAllOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllToAllOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr AllToAllOp::replica_groupsAttr() {
  return (*this)->getAttr("replica_groups").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr AllToAllOp::replica_groups() {
  auto attr = replica_groupsAttr();
  return attr;
}

::mlir::BoolAttr AllToAllOp::constrain_layoutAttr() {
  return (*this)->getAttr("constrain_layout").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool AllToAllOp::constrain_layout() {
  auto attr = constrain_layoutAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::mhlo::ChannelHandle AllToAllOp::channel_idAttr() {
  return (*this)->getAttr("channel_id").template dyn_cast_or_null<::mlir::mhlo::ChannelHandle>();
}

::llvm::Optional<::mlir::mhlo::ChannelHandle> AllToAllOp::channel_id() {
  auto attr = channel_idAttr();
  return attr ? ::llvm::Optional<::mlir::mhlo::ChannelHandle>(attr) : (::llvm::None);
}

::mlir::BoolAttr AllToAllOp::use_global_device_idsAttr() {
  return (*this)->getAttr("use_global_device_ids").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool AllToAllOp::use_global_device_ids() {
  auto attr = use_global_device_idsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::IntegerAttr AllToAllOp::split_dimensionAttr() {
  return (*this)->getAttr("split_dimension").template dyn_cast_or_null<::mlir::IntegerAttr>();
}

::llvm::Optional<uint64_t> AllToAllOp::split_dimension() {
  auto attr = split_dimensionAttr();
  return attr ? ::llvm::Optional<uint64_t>(attr.getValue().getZExtValue()) : (::llvm::None);
}

void AllToAllOp::replica_groupsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("replica_groups", attr);
}

void AllToAllOp::constrain_layoutAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("constrain_layout", attr);
}

void AllToAllOp::channel_idAttr(::mlir::mhlo::ChannelHandle attr) {
  (*this)->setAttr("channel_id", attr);
}

void AllToAllOp::use_global_device_idsAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("use_global_device_ids", attr);
}

void AllToAllOp::split_dimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("split_dimension", attr);
}

::mlir::Attribute AllToAllOp::removeChannel_idAttr() {
  return (*this)->removeAttr("channel_id");
}

::mlir::Attribute AllToAllOp::removeSplit_dimensionAttr() {
  return (*this)->removeAttr("split_dimension");
}

void AllToAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, ::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, ::mlir::BoolAttr use_global_device_ids, /*optional*/::mlir::IntegerAttr split_dimension) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", constrain_layout);
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", use_global_device_ids);
  if (split_dimension) {
  odsState.addAttribute("split_dimension", split_dimension);
  }
}

void AllToAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, ::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, ::mlir::BoolAttr use_global_device_ids, /*optional*/::mlir::IntegerAttr split_dimension) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", constrain_layout);
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", use_global_device_ids);
  if (split_dimension) {
  odsState.addAttribute("split_dimension", split_dimension);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllToAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, bool use_global_device_ids, /*optional*/::mlir::IntegerAttr split_dimension) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", odsBuilder.getBoolAttr(constrain_layout));
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", odsBuilder.getBoolAttr(use_global_device_ids));
  if (split_dimension) {
  odsState.addAttribute("split_dimension", split_dimension);
  }
}

void AllToAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::mlir::ValueRange results, ::mlir::DenseIntElementsAttr replica_groups, bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandle channel_id, bool use_global_device_ids, /*optional*/::mlir::IntegerAttr split_dimension) {
  odsState.addOperands(operands);
  odsState.addOperands(results);
  odsState.addAttribute("replica_groups", replica_groups);
  odsState.addAttribute("constrain_layout", odsBuilder.getBoolAttr(constrain_layout));
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  odsState.addAttribute("use_global_device_ids", odsBuilder.getBoolAttr(use_global_device_ids));
  if (split_dimension) {
  odsState.addAttribute("split_dimension", split_dimension);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllToAllOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AllToAllOp::verify() {
  if (failed(AllToAllOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return Verify(*this);
}

void AllToAllOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::AndOp definitions
//===----------------------------------------------------------------------===//

AndOpAdaptor::AndOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AndOpAdaptor::AndOpAdaptor(AndOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AndOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AndOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AndOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AndOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value AndOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value AndOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr AndOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr AndOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult AndOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.and' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AndOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AndOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AndOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value AndOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value AndOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange AndOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AndOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AndOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AndOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AndOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr AndOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > AndOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void AndOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute AndOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void AndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void AndOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AndOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AndOp::verify() {
  if (failed(AndOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void AndOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::Atan2Op definitions
//===----------------------------------------------------------------------===//

Atan2OpAdaptor::Atan2OpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

Atan2OpAdaptor::Atan2OpAdaptor(Atan2Op&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange Atan2OpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> Atan2OpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange Atan2OpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Atan2OpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value Atan2OpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value Atan2OpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr Atan2OpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr Atan2OpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult Atan2OpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.atan2' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> Atan2Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Atan2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Atan2Op::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value Atan2Op::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value Atan2Op::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange Atan2Op::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange Atan2Op::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange Atan2Op::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> Atan2Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Atan2Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr Atan2Op::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > Atan2Op::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void Atan2Op::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute Atan2Op::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void Atan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void Atan2Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Atan2Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Atan2Op::verify() {
  if (failed(Atan2OpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void Atan2Op::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::BatchNormGradOp definitions
//===----------------------------------------------------------------------===//

BatchNormGradOpAdaptor::BatchNormGradOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BatchNormGradOpAdaptor::BatchNormGradOpAdaptor(BatchNormGradOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BatchNormGradOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BatchNormGradOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BatchNormGradOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormGradOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value BatchNormGradOpAdaptor::scale() {
  return *getODSOperands(1).begin();
}

::mlir::Value BatchNormGradOpAdaptor::mean() {
  return *getODSOperands(2).begin();
}

::mlir::Value BatchNormGradOpAdaptor::variance() {
  return *getODSOperands(3).begin();
}

::mlir::Value BatchNormGradOpAdaptor::grad_output() {
  return *getODSOperands(4).begin();
}

::mlir::Value BatchNormGradOpAdaptor::grad_operand() {
  return *getODSOperands(5).begin();
}

::mlir::Value BatchNormGradOpAdaptor::grad_scale() {
  return *getODSOperands(6).begin();
}

::mlir::Value BatchNormGradOpAdaptor::grad_offset() {
  return *getODSOperands(7).begin();
}

::mlir::DictionaryAttr BatchNormGradOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::FloatAttr BatchNormGradOpAdaptor::epsilon() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::FloatAttr attr = odsAttrs.get("epsilon").cast<::mlir::FloatAttr>();
  return attr;
}

::mlir::IntegerAttr BatchNormGradOpAdaptor::feature_index() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("feature_index").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult BatchNormGradOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_epsilon = odsAttrs.get("epsilon");
  if (!tblgen_epsilon) return emitError(loc, "'lmhlo.batch_norm_grad' op ""requires attribute 'epsilon'");
    if (!(((tblgen_epsilon.isa<::mlir::FloatAttr>())) && ((tblgen_epsilon.cast<::mlir::FloatAttr>().getType().isF32())))) return emitError(loc, "'lmhlo.batch_norm_grad' op ""attribute 'epsilon' failed to satisfy constraint: 32-bit float attribute");
  }
  {
  auto tblgen_feature_index = odsAttrs.get("feature_index");
  if (!tblgen_feature_index) return emitError(loc, "'lmhlo.batch_norm_grad' op ""requires attribute 'feature_index'");
    if (!(((tblgen_feature_index.isa<::mlir::IntegerAttr>())) && ((tblgen_feature_index.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.batch_norm_grad' op ""attribute 'feature_index' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BatchNormGradOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BatchNormGradOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormGradOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value BatchNormGradOp::scale() {
  return *getODSOperands(1).begin();
}

::mlir::Value BatchNormGradOp::mean() {
  return *getODSOperands(2).begin();
}

::mlir::Value BatchNormGradOp::variance() {
  return *getODSOperands(3).begin();
}

::mlir::Value BatchNormGradOp::grad_output() {
  return *getODSOperands(4).begin();
}

::mlir::Value BatchNormGradOp::grad_operand() {
  return *getODSOperands(5).begin();
}

::mlir::Value BatchNormGradOp::grad_scale() {
  return *getODSOperands(6).begin();
}

::mlir::Value BatchNormGradOp::grad_offset() {
  return *getODSOperands(7).begin();
}

::mlir::MutableOperandRange BatchNormGradOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormGradOp::scaleMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormGradOp::meanMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormGradOp::varianceMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormGradOp::grad_outputMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormGradOp::grad_operandMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormGradOp::grad_scaleMutable() {
  auto range = getODSOperandIndexAndLength(6);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormGradOp::grad_offsetMutable() {
  auto range = getODSOperandIndexAndLength(7);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BatchNormGradOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BatchNormGradOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::FloatAttr BatchNormGradOp::epsilonAttr() {
  return (*this)->getAttr("epsilon").template cast<::mlir::FloatAttr>();
}

::llvm::APFloat BatchNormGradOp::epsilon() {
  auto attr = epsilonAttr();
  return attr.getValue();
}

::mlir::IntegerAttr BatchNormGradOp::feature_indexAttr() {
  return (*this)->getAttr("feature_index").template cast<::mlir::IntegerAttr>();
}

uint64_t BatchNormGradOp::feature_index() {
  auto attr = feature_indexAttr();
  return attr.getValue().getZExtValue();
}

void BatchNormGradOp::epsilonAttr(::mlir::FloatAttr attr) {
  (*this)->setAttr("epsilon", attr);
}

void BatchNormGradOp::feature_indexAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("feature_index", attr);
}

void BatchNormGradOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Value grad_output, ::mlir::Value grad_operand, ::mlir::Value grad_scale, ::mlir::Value grad_offset, ::mlir::FloatAttr epsilon, ::mlir::IntegerAttr feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(grad_output);
  odsState.addOperands(grad_operand);
  odsState.addOperands(grad_scale);
  odsState.addOperands(grad_offset);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("feature_index", feature_index);
}

void BatchNormGradOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Value grad_output, ::mlir::Value grad_operand, ::mlir::Value grad_scale, ::mlir::Value grad_offset, ::mlir::FloatAttr epsilon, ::mlir::IntegerAttr feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(grad_output);
  odsState.addOperands(grad_operand);
  odsState.addOperands(grad_scale);
  odsState.addOperands(grad_offset);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("feature_index", feature_index);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BatchNormGradOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Value grad_output, ::mlir::Value grad_operand, ::mlir::Value grad_scale, ::mlir::Value grad_offset, ::llvm::APFloat epsilon, uint64_t feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(grad_output);
  odsState.addOperands(grad_operand);
  odsState.addOperands(grad_scale);
  odsState.addOperands(grad_offset);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("feature_index", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), feature_index));
}

void BatchNormGradOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Value grad_output, ::mlir::Value grad_operand, ::mlir::Value grad_scale, ::mlir::Value grad_offset, ::llvm::APFloat epsilon, uint64_t feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(grad_output);
  odsState.addOperands(grad_operand);
  odsState.addOperands(grad_scale);
  odsState.addOperands(grad_offset);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("feature_index", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), feature_index));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BatchNormGradOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 8u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BatchNormGradOp::verify() {
  if (failed(BatchNormGradOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (::mlir::Value v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup4 = getODSOperands(4);
    for (::mlir::Value v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup5 = getODSOperands(5);
    for (::mlir::Value v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup6 = getODSOperands(6);
    for (::mlir::Value v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup7 = getODSOperands(7);
    for (::mlir::Value v : valueGroup7) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void BatchNormGradOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(3))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(4))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(5))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(6))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(7))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::BatchNormInferenceOp definitions
//===----------------------------------------------------------------------===//

BatchNormInferenceOpAdaptor::BatchNormInferenceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BatchNormInferenceOpAdaptor::BatchNormInferenceOpAdaptor(BatchNormInferenceOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BatchNormInferenceOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BatchNormInferenceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BatchNormInferenceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormInferenceOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value BatchNormInferenceOpAdaptor::scale() {
  return *getODSOperands(1).begin();
}

::mlir::Value BatchNormInferenceOpAdaptor::offset() {
  return *getODSOperands(2).begin();
}

::mlir::Value BatchNormInferenceOpAdaptor::mean() {
  return *getODSOperands(3).begin();
}

::mlir::Value BatchNormInferenceOpAdaptor::variance() {
  return *getODSOperands(4).begin();
}

::mlir::Value BatchNormInferenceOpAdaptor::output() {
  return *getODSOperands(5).begin();
}

::mlir::DictionaryAttr BatchNormInferenceOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::FloatAttr BatchNormInferenceOpAdaptor::epsilon() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::FloatAttr attr = odsAttrs.get("epsilon").cast<::mlir::FloatAttr>();
  return attr;
}

::mlir::IntegerAttr BatchNormInferenceOpAdaptor::feature_index() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("feature_index").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult BatchNormInferenceOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_epsilon = odsAttrs.get("epsilon");
  if (!tblgen_epsilon) return emitError(loc, "'lmhlo.batch_norm_inference' op ""requires attribute 'epsilon'");
    if (!(((tblgen_epsilon.isa<::mlir::FloatAttr>())) && ((tblgen_epsilon.cast<::mlir::FloatAttr>().getType().isF32())))) return emitError(loc, "'lmhlo.batch_norm_inference' op ""attribute 'epsilon' failed to satisfy constraint: 32-bit float attribute");
  }
  {
  auto tblgen_feature_index = odsAttrs.get("feature_index");
  if (!tblgen_feature_index) return emitError(loc, "'lmhlo.batch_norm_inference' op ""requires attribute 'feature_index'");
    if (!(((tblgen_feature_index.isa<::mlir::IntegerAttr>())) && ((tblgen_feature_index.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.batch_norm_inference' op ""attribute 'feature_index' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BatchNormInferenceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BatchNormInferenceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormInferenceOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value BatchNormInferenceOp::scale() {
  return *getODSOperands(1).begin();
}

::mlir::Value BatchNormInferenceOp::offset() {
  return *getODSOperands(2).begin();
}

::mlir::Value BatchNormInferenceOp::mean() {
  return *getODSOperands(3).begin();
}

::mlir::Value BatchNormInferenceOp::variance() {
  return *getODSOperands(4).begin();
}

::mlir::Value BatchNormInferenceOp::output() {
  return *getODSOperands(5).begin();
}

::mlir::MutableOperandRange BatchNormInferenceOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormInferenceOp::scaleMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormInferenceOp::offsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormInferenceOp::meanMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormInferenceOp::varianceMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormInferenceOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BatchNormInferenceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BatchNormInferenceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::FloatAttr BatchNormInferenceOp::epsilonAttr() {
  return (*this)->getAttr("epsilon").template cast<::mlir::FloatAttr>();
}

::llvm::APFloat BatchNormInferenceOp::epsilon() {
  auto attr = epsilonAttr();
  return attr.getValue();
}

::mlir::IntegerAttr BatchNormInferenceOp::feature_indexAttr() {
  return (*this)->getAttr("feature_index").template cast<::mlir::IntegerAttr>();
}

uint64_t BatchNormInferenceOp::feature_index() {
  auto attr = feature_indexAttr();
  return attr.getValue().getZExtValue();
}

void BatchNormInferenceOp::epsilonAttr(::mlir::FloatAttr attr) {
  (*this)->setAttr("epsilon", attr);
}

void BatchNormInferenceOp::feature_indexAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("feature_index", attr);
}

void BatchNormInferenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Value output, ::mlir::FloatAttr epsilon, ::mlir::IntegerAttr feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(output);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("feature_index", feature_index);
}

void BatchNormInferenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Value output, ::mlir::FloatAttr epsilon, ::mlir::IntegerAttr feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(output);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("feature_index", feature_index);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BatchNormInferenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Value output, ::llvm::APFloat epsilon, uint64_t feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(output);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("feature_index", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), feature_index));
}

void BatchNormInferenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value mean, ::mlir::Value variance, ::mlir::Value output, ::llvm::APFloat epsilon, uint64_t feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(mean);
  odsState.addOperands(variance);
  odsState.addOperands(output);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("feature_index", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), feature_index));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BatchNormInferenceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BatchNormInferenceOp::verify() {
  if (failed(BatchNormInferenceOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (::mlir::Value v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup4 = getODSOperands(4);
    for (::mlir::Value v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup5 = getODSOperands(5);
    for (::mlir::Value v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void BatchNormInferenceOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(3))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(4))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(5))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::BatchNormTrainingOp definitions
//===----------------------------------------------------------------------===//

BatchNormTrainingOpAdaptor::BatchNormTrainingOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BatchNormTrainingOpAdaptor::BatchNormTrainingOpAdaptor(BatchNormTrainingOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BatchNormTrainingOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BatchNormTrainingOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BatchNormTrainingOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormTrainingOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value BatchNormTrainingOpAdaptor::scale() {
  return *getODSOperands(1).begin();
}

::mlir::Value BatchNormTrainingOpAdaptor::offset() {
  return *getODSOperands(2).begin();
}

::mlir::Value BatchNormTrainingOpAdaptor::output() {
  return *getODSOperands(3).begin();
}

::mlir::Value BatchNormTrainingOpAdaptor::batch_mean() {
  return *getODSOperands(4).begin();
}

::mlir::Value BatchNormTrainingOpAdaptor::batch_var() {
  return *getODSOperands(5).begin();
}

::mlir::DictionaryAttr BatchNormTrainingOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::FloatAttr BatchNormTrainingOpAdaptor::epsilon() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::FloatAttr attr = odsAttrs.get("epsilon").cast<::mlir::FloatAttr>();
  return attr;
}

::mlir::IntegerAttr BatchNormTrainingOpAdaptor::feature_index() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("feature_index").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult BatchNormTrainingOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_epsilon = odsAttrs.get("epsilon");
  if (!tblgen_epsilon) return emitError(loc, "'lmhlo.batch_norm_training' op ""requires attribute 'epsilon'");
    if (!(((tblgen_epsilon.isa<::mlir::FloatAttr>())) && ((tblgen_epsilon.cast<::mlir::FloatAttr>().getType().isF32())))) return emitError(loc, "'lmhlo.batch_norm_training' op ""attribute 'epsilon' failed to satisfy constraint: 32-bit float attribute");
  }
  {
  auto tblgen_feature_index = odsAttrs.get("feature_index");
  if (!tblgen_feature_index) return emitError(loc, "'lmhlo.batch_norm_training' op ""requires attribute 'feature_index'");
    if (!(((tblgen_feature_index.isa<::mlir::IntegerAttr>())) && ((tblgen_feature_index.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.batch_norm_training' op ""attribute 'feature_index' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BatchNormTrainingOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BatchNormTrainingOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BatchNormTrainingOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value BatchNormTrainingOp::scale() {
  return *getODSOperands(1).begin();
}

::mlir::Value BatchNormTrainingOp::offset() {
  return *getODSOperands(2).begin();
}

::mlir::Value BatchNormTrainingOp::output() {
  return *getODSOperands(3).begin();
}

::mlir::Value BatchNormTrainingOp::batch_mean() {
  return *getODSOperands(4).begin();
}

::mlir::Value BatchNormTrainingOp::batch_var() {
  return *getODSOperands(5).begin();
}

::mlir::MutableOperandRange BatchNormTrainingOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormTrainingOp::scaleMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormTrainingOp::offsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormTrainingOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormTrainingOp::batch_meanMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BatchNormTrainingOp::batch_varMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BatchNormTrainingOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BatchNormTrainingOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::FloatAttr BatchNormTrainingOp::epsilonAttr() {
  return (*this)->getAttr("epsilon").template cast<::mlir::FloatAttr>();
}

::llvm::APFloat BatchNormTrainingOp::epsilon() {
  auto attr = epsilonAttr();
  return attr.getValue();
}

::mlir::IntegerAttr BatchNormTrainingOp::feature_indexAttr() {
  return (*this)->getAttr("feature_index").template cast<::mlir::IntegerAttr>();
}

uint64_t BatchNormTrainingOp::feature_index() {
  auto attr = feature_indexAttr();
  return attr.getValue().getZExtValue();
}

void BatchNormTrainingOp::epsilonAttr(::mlir::FloatAttr attr) {
  (*this)->setAttr("epsilon", attr);
}

void BatchNormTrainingOp::feature_indexAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("feature_index", attr);
}

void BatchNormTrainingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value output, ::mlir::Value batch_mean, ::mlir::Value batch_var, ::mlir::FloatAttr epsilon, ::mlir::IntegerAttr feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(output);
  odsState.addOperands(batch_mean);
  odsState.addOperands(batch_var);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("feature_index", feature_index);
}

void BatchNormTrainingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value output, ::mlir::Value batch_mean, ::mlir::Value batch_var, ::mlir::FloatAttr epsilon, ::mlir::IntegerAttr feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(output);
  odsState.addOperands(batch_mean);
  odsState.addOperands(batch_var);
  odsState.addAttribute("epsilon", epsilon);
  odsState.addAttribute("feature_index", feature_index);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BatchNormTrainingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value output, ::mlir::Value batch_mean, ::mlir::Value batch_var, ::llvm::APFloat epsilon, uint64_t feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(output);
  odsState.addOperands(batch_mean);
  odsState.addOperands(batch_var);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("feature_index", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), feature_index));
}

void BatchNormTrainingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value scale, ::mlir::Value offset, ::mlir::Value output, ::mlir::Value batch_mean, ::mlir::Value batch_var, ::llvm::APFloat epsilon, uint64_t feature_index) {
  odsState.addOperands(operand);
  odsState.addOperands(scale);
  odsState.addOperands(offset);
  odsState.addOperands(output);
  odsState.addOperands(batch_mean);
  odsState.addOperands(batch_var);
  odsState.addAttribute("epsilon", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), epsilon));
  odsState.addAttribute("feature_index", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), feature_index));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BatchNormTrainingOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BatchNormTrainingOp::verify() {
  if (failed(BatchNormTrainingOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (::mlir::Value v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup4 = getODSOperands(4);
    for (::mlir::Value v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup5 = getODSOperands(5);
    for (::mlir::Value v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void BatchNormTrainingOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(3))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(4))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(5))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::BitcastConvertOp definitions
//===----------------------------------------------------------------------===//

BitcastConvertOpAdaptor::BitcastConvertOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BitcastConvertOpAdaptor::BitcastConvertOpAdaptor(BitcastConvertOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BitcastConvertOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BitcastConvertOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BitcastConvertOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BitcastConvertOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value BitcastConvertOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BitcastConvertOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult BitcastConvertOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BitcastConvertOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BitcastConvertOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BitcastConvertOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value BitcastConvertOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BitcastConvertOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BitcastConvertOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BitcastConvertOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BitcastConvertOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void BitcastConvertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void BitcastConvertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BitcastConvertOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BitcastConvertOp::verify() {
  if (failed(BitcastConvertOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void BitcastConvertOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::BroadcastInDimOp definitions
//===----------------------------------------------------------------------===//

BroadcastInDimOpAdaptor::BroadcastInDimOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastInDimOpAdaptor::BroadcastInDimOpAdaptor(BroadcastInDimOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastInDimOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastInDimOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastInDimOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastInDimOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastInDimOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastInDimOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastInDimOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastInDimOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (!tblgen_broadcast_dimensions) return emitError(loc, "'lmhlo.broadcast_in_dim' op ""requires attribute 'broadcast_dimensions'");
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.broadcast_in_dim' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastInDimOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastInDimOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastInDimOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastInDimOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastInDimOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastInDimOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastInDimOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastInDimOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastInDimOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr BroadcastInDimOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr;
}

void BroadcastInDimOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

void BroadcastInDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
}

void BroadcastInDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastInDimOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastInDimOp::verify() {
  if (failed(BroadcastInDimOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void BroadcastInDimOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::BroadcastOp definitions
//===----------------------------------------------------------------------===//

BroadcastOpAdaptor::BroadcastOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

BroadcastOpAdaptor::BroadcastOpAdaptor(BroadcastOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange BroadcastOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> BroadcastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange BroadcastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr BroadcastOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr BroadcastOpAdaptor::broadcast_sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_sizes").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult BroadcastOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_sizes = odsAttrs.get("broadcast_sizes");
  if (!tblgen_broadcast_sizes) return emitError(loc, "'lmhlo.broadcast' op ""requires attribute 'broadcast_sizes'");
    if (!(((tblgen_broadcast_sizes.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_sizes.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.broadcast' op ""attribute 'broadcast_sizes' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> BroadcastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BroadcastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value BroadcastOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value BroadcastOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr BroadcastOp::broadcast_sizesAttr() {
  return (*this)->getAttr("broadcast_sizes").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr BroadcastOp::broadcast_sizes() {
  auto attr = broadcast_sizesAttr();
  return attr;
}

void BroadcastOp::broadcast_sizesAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_sizes", attr);
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr broadcast_sizes) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("broadcast_sizes", broadcast_sizes);
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr broadcast_sizes) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("broadcast_sizes", broadcast_sizes);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BroadcastOp::verify() {
  if (failed(BroadcastOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void BroadcastOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::CaseOp definitions
//===----------------------------------------------------------------------===//

CaseOpAdaptor::CaseOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

CaseOpAdaptor::CaseOpAdaptor(CaseOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange CaseOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CaseOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CaseOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CaseOpAdaptor::index() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr CaseOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::RegionRange CaseOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::RegionRange CaseOpAdaptor::branches() {
  return odsRegions.drop_front(0);
}

::mlir::LogicalResult CaseOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> CaseOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CaseOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CaseOp::index() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange CaseOp::indexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CaseOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CaseOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::MutableArrayRef<::mlir::Region> CaseOp::branches() {
  return (*this)->getRegions().drop_front(0);
}

void CaseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value index, unsigned branchesCount) {
  odsState.addOperands(index);
  for (unsigned i = 0; i < branchesCount; ++i)
    (void)odsState.addRegion();
}

void CaseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value index, unsigned branchesCount) {
  odsState.addOperands(index);
  for (unsigned i = 0; i < branchesCount; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CaseOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes, unsigned numRegions) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != numRegions; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CaseOp::verify() {
  if (failed(CaseOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : branches()) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('branches') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::mlir::success();
}

void CaseOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::CbrtOp definitions
//===----------------------------------------------------------------------===//

CbrtOpAdaptor::CbrtOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

CbrtOpAdaptor::CbrtOpAdaptor(CbrtOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange CbrtOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CbrtOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CbrtOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CbrtOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value CbrtOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr CbrtOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult CbrtOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> CbrtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CbrtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CbrtOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value CbrtOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CbrtOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CbrtOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CbrtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CbrtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CbrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void CbrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CbrtOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CbrtOp::verify() {
  if (failed(CbrtOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void CbrtOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::CeilOp definitions
//===----------------------------------------------------------------------===//

CeilOpAdaptor::CeilOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

CeilOpAdaptor::CeilOpAdaptor(CeilOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange CeilOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CeilOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CeilOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CeilOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value CeilOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr CeilOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult CeilOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> CeilOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CeilOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CeilOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value CeilOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CeilOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CeilOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CeilOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CeilOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CeilOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void CeilOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CeilOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CeilOp::verify() {
  if (failed(CeilOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void CeilOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::CholeskyOp definitions
//===----------------------------------------------------------------------===//

CholeskyOpAdaptor::CholeskyOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

CholeskyOpAdaptor::CholeskyOpAdaptor(CholeskyOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange CholeskyOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CholeskyOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CholeskyOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CholeskyOpAdaptor::a() {
  return *getODSOperands(0).begin();
}

::mlir::Value CholeskyOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr CholeskyOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr CholeskyOpAdaptor::lower() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("lower").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::LogicalResult CholeskyOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_lower = odsAttrs.get("lower");
  if (tblgen_lower) {
    if (!((tblgen_lower.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.cholesky' op ""attribute 'lower' failed to satisfy constraint: bool attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> CholeskyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CholeskyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CholeskyOp::a() {
  return *getODSOperands(0).begin();
}

::mlir::Value CholeskyOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CholeskyOp::aMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CholeskyOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CholeskyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CholeskyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::BoolAttr CholeskyOp::lowerAttr() {
  return (*this)->getAttr("lower").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool CholeskyOp::lower() {
  auto attr = lowerAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void CholeskyOp::lowerAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("lower", attr);
}

void CholeskyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value output, ::mlir::BoolAttr lower) {
  odsState.addOperands(a);
  odsState.addOperands(output);
  odsState.addAttribute("lower", lower);
}

void CholeskyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value output, ::mlir::BoolAttr lower) {
  odsState.addOperands(a);
  odsState.addOperands(output);
  odsState.addAttribute("lower", lower);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CholeskyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value output, bool lower) {
  odsState.addOperands(a);
  odsState.addOperands(output);
  odsState.addAttribute("lower", odsBuilder.getBoolAttr(lower));
}

void CholeskyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value output, bool lower) {
  odsState.addOperands(a);
  odsState.addOperands(output);
  odsState.addAttribute("lower", odsBuilder.getBoolAttr(lower));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CholeskyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CholeskyOp::verify() {
  if (failed(CholeskyOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void CholeskyOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ClampOp definitions
//===----------------------------------------------------------------------===//

ClampOpAdaptor::ClampOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ClampOpAdaptor::ClampOpAdaptor(ClampOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ClampOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ClampOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ClampOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClampOpAdaptor::min() {
  return *getODSOperands(0).begin();
}

::mlir::Value ClampOpAdaptor::operand() {
  return *getODSOperands(1).begin();
}

::mlir::Value ClampOpAdaptor::max() {
  return *getODSOperands(2).begin();
}

::mlir::Value ClampOpAdaptor::output() {
  return *getODSOperands(3).begin();
}

::mlir::DictionaryAttr ClampOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ClampOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ClampOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClampOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClampOp::min() {
  return *getODSOperands(0).begin();
}

::mlir::Value ClampOp::operand() {
  return *getODSOperands(1).begin();
}

::mlir::Value ClampOp::max() {
  return *getODSOperands(2).begin();
}

::mlir::Value ClampOp::output() {
  return *getODSOperands(3).begin();
}

::mlir::MutableOperandRange ClampOp::minMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ClampOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ClampOp::maxMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ClampOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ClampOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClampOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ClampOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value min, ::mlir::Value operand, ::mlir::Value max, ::mlir::Value output) {
  odsState.addOperands(min);
  odsState.addOperands(operand);
  odsState.addOperands(max);
  odsState.addOperands(output);
}

void ClampOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value min, ::mlir::Value operand, ::mlir::Value max, ::mlir::Value output) {
  odsState.addOperands(min);
  odsState.addOperands(operand);
  odsState.addOperands(max);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClampOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClampOp::verify() {
  if (failed(ClampOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (::mlir::Value v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ClampOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(3))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ClzOp definitions
//===----------------------------------------------------------------------===//

ClzOpAdaptor::ClzOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ClzOpAdaptor::ClzOpAdaptor(ClzOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ClzOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ClzOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ClzOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClzOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value ClzOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr ClzOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ClzOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ClzOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ClzOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ClzOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value ClzOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ClzOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ClzOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ClzOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ClzOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ClzOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void ClzOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClzOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClzOp::verify() {
  if (failed(ClzOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ClzOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::CollectivePermuteOp definitions
//===----------------------------------------------------------------------===//

CollectivePermuteOpAdaptor::CollectivePermuteOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

CollectivePermuteOpAdaptor::CollectivePermuteOpAdaptor(CollectivePermuteOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange CollectivePermuteOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CollectivePermuteOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CollectivePermuteOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CollectivePermuteOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value CollectivePermuteOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr CollectivePermuteOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr CollectivePermuteOpAdaptor::source_target_pairs() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("source_target_pairs").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::mhlo::ChannelHandle CollectivePermuteOpAdaptor::channel_id() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::mhlo::ChannelHandle attr = odsAttrs.get("channel_id").dyn_cast_or_null<::mlir::mhlo::ChannelHandle>();
  return attr;
}

::mlir::LogicalResult CollectivePermuteOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_source_target_pairs = odsAttrs.get("source_target_pairs");
  if (!tblgen_source_target_pairs) return emitError(loc, "'lmhlo.collective_permute' op ""requires attribute 'source_target_pairs'");
    if (!(((tblgen_source_target_pairs.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_source_target_pairs.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.collective_permute' op ""attribute 'source_target_pairs' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  {
  auto tblgen_channel_id = odsAttrs.get("channel_id");
  if (tblgen_channel_id) {
    if (!((tblgen_channel_id.isa<::mlir::mhlo::ChannelHandle>()))) return emitError(loc, "'lmhlo.collective_permute' op ""attribute 'channel_id' failed to satisfy constraint: two 64-bit integers 'handle' and 'type'");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> CollectivePermuteOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CollectivePermuteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CollectivePermuteOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value CollectivePermuteOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CollectivePermuteOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CollectivePermuteOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CollectivePermuteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CollectivePermuteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr CollectivePermuteOp::source_target_pairsAttr() {
  return (*this)->getAttr("source_target_pairs").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr CollectivePermuteOp::source_target_pairs() {
  auto attr = source_target_pairsAttr();
  return attr;
}

::mlir::mhlo::ChannelHandle CollectivePermuteOp::channel_idAttr() {
  return (*this)->getAttr("channel_id").template dyn_cast_or_null<::mlir::mhlo::ChannelHandle>();
}

::llvm::Optional<::mlir::mhlo::ChannelHandle> CollectivePermuteOp::channel_id() {
  auto attr = channel_idAttr();
  return attr ? ::llvm::Optional<::mlir::mhlo::ChannelHandle>(attr) : (::llvm::None);
}

void CollectivePermuteOp::source_target_pairsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("source_target_pairs", attr);
}

void CollectivePermuteOp::channel_idAttr(::mlir::mhlo::ChannelHandle attr) {
  (*this)->setAttr("channel_id", attr);
}

::mlir::Attribute CollectivePermuteOp::removeChannel_idAttr() {
  return (*this)->removeAttr("channel_id");
}

void CollectivePermuteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr source_target_pairs, /*optional*/::mlir::mhlo::ChannelHandle channel_id) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("source_target_pairs", source_target_pairs);
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
}

void CollectivePermuteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr source_target_pairs, /*optional*/::mlir::mhlo::ChannelHandle channel_id) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("source_target_pairs", source_target_pairs);
  if (channel_id) {
  odsState.addAttribute("channel_id", channel_id);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CollectivePermuteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CollectivePermuteOp::verify() {
  if (failed(CollectivePermuteOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return Verify(*this);
}

void CollectivePermuteOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::CompareOp definitions
//===----------------------------------------------------------------------===//

CompareOpAdaptor::CompareOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

CompareOpAdaptor::CompareOpAdaptor(CompareOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange CompareOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CompareOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CompareOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CompareOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value CompareOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value CompareOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr CompareOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr CompareOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::StringAttr CompareOpAdaptor::comparison_direction() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("comparison_direction").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::StringAttr CompareOpAdaptor::compare_type() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("compare_type").dyn_cast_or_null<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult CompareOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.compare' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  {
  auto tblgen_comparison_direction = odsAttrs.get("comparison_direction");
  if (!tblgen_comparison_direction) return emitError(loc, "'lmhlo.compare' op ""requires attribute 'comparison_direction'");
    if (!(((tblgen_comparison_direction.isa<::mlir::StringAttr>())) && (((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "EQ")) || ((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "NE")) || ((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "GE")) || ((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "GT")) || ((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "LE")) || ((tblgen_comparison_direction.cast<::mlir::StringAttr>().getValue() == "LT"))))) return emitError(loc, "'lmhlo.compare' op ""attribute 'comparison_direction' failed to satisfy constraint: Which comparison operation to perform.");
  }
  {
  auto tblgen_compare_type = odsAttrs.get("compare_type");
  if (tblgen_compare_type) {
    if (!(((tblgen_compare_type.isa<::mlir::StringAttr>())) && (((tblgen_compare_type.cast<::mlir::StringAttr>().getValue() == "FLOAT")) || ((tblgen_compare_type.cast<::mlir::StringAttr>().getValue() == "TOTALORDER")) || ((tblgen_compare_type.cast<::mlir::StringAttr>().getValue() == "SIGNED")) || ((tblgen_compare_type.cast<::mlir::StringAttr>().getValue() == "UNSIGNED"))))) return emitError(loc, "'lmhlo.compare' op ""attribute 'compare_type' failed to satisfy constraint: Which comparison type to use.");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> CompareOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CompareOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CompareOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value CompareOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value CompareOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange CompareOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CompareOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CompareOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CompareOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CompareOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr CompareOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > CompareOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

::mlir::StringAttr CompareOp::comparison_directionAttr() {
  return (*this)->getAttr("comparison_direction").template cast<::mlir::StringAttr>();
}

::llvm::StringRef CompareOp::comparison_direction() {
  auto attr = comparison_directionAttr();
  return attr.getValue();
}

::mlir::StringAttr CompareOp::compare_typeAttr() {
  return (*this)->getAttr("compare_type").template dyn_cast_or_null<::mlir::StringAttr>();
}

::llvm::Optional< ::llvm::StringRef > CompareOp::compare_type() {
  auto attr = compare_typeAttr();
  return attr ? ::llvm::Optional< ::llvm::StringRef >(attr.getValue()) : (::llvm::None);
}

void CompareOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

void CompareOp::comparison_directionAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("comparison_direction", attr);
}

void CompareOp::compare_typeAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("compare_type", attr);
}

::mlir::Attribute CompareOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

::mlir::Attribute CompareOp::removeCompare_typeAttr() {
  return (*this)->removeAttr("compare_type");
}

void CompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions, ::mlir::StringAttr comparison_direction, /*optional*/::mlir::StringAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addAttribute("comparison_direction", comparison_direction);
  if (compare_type) {
  odsState.addAttribute("compare_type", compare_type);
  }
}

void CompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions, ::mlir::StringAttr comparison_direction, /*optional*/::mlir::StringAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addAttribute("comparison_direction", comparison_direction);
  if (compare_type) {
  odsState.addAttribute("compare_type", compare_type);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions, ::llvm::StringRef comparison_direction, /*optional*/::mlir::StringAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addAttribute("comparison_direction", odsBuilder.getStringAttr(comparison_direction));
  if (compare_type) {
  odsState.addAttribute("compare_type", compare_type);
  }
}

void CompareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions, ::llvm::StringRef comparison_direction, /*optional*/::mlir::StringAttr compare_type) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  odsState.addAttribute("comparison_direction", odsBuilder.getStringAttr(comparison_direction));
  if (compare_type) {
  odsState.addAttribute("compare_type", compare_type);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CompareOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CompareOp::verify() {
  if (failed(CompareOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops6(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void CompareOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ComplexOp definitions
//===----------------------------------------------------------------------===//

ComplexOpAdaptor::ComplexOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ComplexOpAdaptor::ComplexOpAdaptor(ComplexOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ComplexOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ComplexOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ComplexOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ComplexOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ComplexOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ComplexOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr ComplexOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr ComplexOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult ComplexOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.complex' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ComplexOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ComplexOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ComplexOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ComplexOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ComplexOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange ComplexOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ComplexOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ComplexOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ComplexOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ComplexOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr ComplexOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ComplexOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void ComplexOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute ComplexOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void ComplexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value output, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(output);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void ComplexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value output, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(output);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ComplexOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ComplexOp::verify() {
  if (failed(ComplexOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops7(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ComplexOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ConcatenateOp definitions
//===----------------------------------------------------------------------===//

ConcatenateOpAdaptor::ConcatenateOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ConcatenateOpAdaptor::ConcatenateOpAdaptor(ConcatenateOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ConcatenateOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ConcatenateOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange ConcatenateOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange ConcatenateOpAdaptor::val() {
  return getODSOperands(0);
}

::mlir::Value ConcatenateOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr ConcatenateOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ConcatenateOpAdaptor::dimension() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("dimension").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult ConcatenateOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_dimension = odsAttrs.get("dimension");
  if (!tblgen_dimension) return emitError(loc, "'lmhlo.concatenate' op ""requires attribute 'dimension'");
    if (!(((tblgen_dimension.isa<::mlir::IntegerAttr>())) && ((tblgen_dimension.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.concatenate' op ""attribute 'dimension' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ConcatenateOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ConcatenateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ConcatenateOp::val() {
  return getODSOperands(0);
}

::mlir::Value ConcatenateOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ConcatenateOp::valMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ConcatenateOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConcatenateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConcatenateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::IntegerAttr ConcatenateOp::dimensionAttr() {
  return (*this)->getAttr("dimension").template cast<::mlir::IntegerAttr>();
}

uint64_t ConcatenateOp::dimension() {
  auto attr = dimensionAttr();
  return attr.getValue().getZExtValue();
}

void ConcatenateOp::dimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("dimension", attr);
}

void ConcatenateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange val, ::mlir::Value output, ::mlir::IntegerAttr dimension) {
  odsState.addOperands(val);
  odsState.addOperands(output);
  odsState.addAttribute("dimension", dimension);
}

void ConcatenateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange val, ::mlir::Value output, ::mlir::IntegerAttr dimension) {
  odsState.addOperands(val);
  odsState.addOperands(output);
  odsState.addAttribute("dimension", dimension);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConcatenateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange val, ::mlir::Value output, uint64_t dimension) {
  odsState.addOperands(val);
  odsState.addOperands(output);
  odsState.addAttribute("dimension", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension));
}

void ConcatenateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange val, ::mlir::Value output, uint64_t dimension) {
  odsState.addOperands(val);
  odsState.addOperands(output);
  odsState.addAttribute("dimension", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConcatenateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConcatenateOp::verify() {
  if (failed(ConcatenateOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ConcatenateOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ConstOp definitions
//===----------------------------------------------------------------------===//

ConstOpAdaptor::ConstOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ConstOpAdaptor::ConstOpAdaptor(ConstOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ConstOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ConstOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ConstOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConstOpAdaptor::output() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr ConstOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::ElementsAttr ConstOpAdaptor::value() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ElementsAttr attr = odsAttrs.get("value").cast<::mlir::ElementsAttr>();
  return attr;
}

::mlir::LogicalResult ConstOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_value = odsAttrs.get("value");
  if (!tblgen_value) return emitError(loc, "'lmhlo.constant' op ""requires attribute 'value'");
    if (!((tblgen_value.isa<::mlir::ElementsAttr>()))) return emitError(loc, "'lmhlo.constant' op ""attribute 'value' failed to satisfy constraint: constant vector/tensor attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ConstOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConstOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConstOp::output() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ConstOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConstOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConstOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ElementsAttr ConstOp::valueAttr() {
  return (*this)->getAttr("value").template cast<::mlir::ElementsAttr>();
}

::mlir::ElementsAttr ConstOp::value() {
  auto attr = valueAttr();
  return attr;
}

void ConstOp::valueAttr(::mlir::ElementsAttr attr) {
  (*this)->setAttr("value", attr);
}

void ConstOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ElementsAttr value, ::mlir::Value output) {
  odsState.addOperands(output);
  odsState.addAttribute("value", value);
}

void ConstOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ElementsAttr value, ::mlir::Value output) {
  odsState.addOperands(output);
  odsState.addAttribute("value", value);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConstOp::verify() {
  if (failed(ConstOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}



void ConstOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ConvOp definitions
//===----------------------------------------------------------------------===//

ConvOpAdaptor::ConvOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ConvOpAdaptor::ConvOpAdaptor(ConvOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ConvOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ConvOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ConvOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ConvOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ConvOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr ConvOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr ConvOpAdaptor::window_strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("window_strides").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr ConvOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("padding").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr ConvOpAdaptor::lhs_dilation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("lhs_dilation").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr ConvOpAdaptor::rhs_dilation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("rhs_dilation").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseElementsAttr ConvOpAdaptor::window_reversal() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseElementsAttr attr = odsAttrs.get("window_reversal").dyn_cast_or_null<::mlir::DenseElementsAttr>();
  return attr;
}

::mlir::mhlo::ConvDimensionNumbers ConvOpAdaptor::dimension_numbers() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::mhlo::ConvDimensionNumbers attr = odsAttrs.get("dimension_numbers").cast<::mlir::mhlo::ConvDimensionNumbers>();
  return attr;
}

::mlir::IntegerAttr ConvOpAdaptor::feature_group_count() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("feature_group_count").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::IntegerAttr ConvOpAdaptor::batch_group_count() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("batch_group_count").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::ArrayAttr ConvOpAdaptor::precision_config() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("precision_config").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult ConvOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_window_strides = odsAttrs.get("window_strides");
  if (tblgen_window_strides) {
    if (!(((tblgen_window_strides.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_window_strides.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.convolution' op ""attribute 'window_strides' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (tblgen_padding) {
    if (!(((tblgen_padding.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_padding.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.convolution' op ""attribute 'padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  {
  auto tblgen_lhs_dilation = odsAttrs.get("lhs_dilation");
  if (tblgen_lhs_dilation) {
    if (!(((tblgen_lhs_dilation.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_lhs_dilation.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.convolution' op ""attribute 'lhs_dilation' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  {
  auto tblgen_rhs_dilation = odsAttrs.get("rhs_dilation");
  if (tblgen_rhs_dilation) {
    if (!(((tblgen_rhs_dilation.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_rhs_dilation.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.convolution' op ""attribute 'rhs_dilation' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  {
  auto tblgen_window_reversal = odsAttrs.get("window_reversal");
  if (tblgen_window_reversal) {
    if (!(((tblgen_window_reversal.isa<::mlir::DenseIntOrFPElementsAttr>())) && ((tblgen_window_reversal.cast<::mlir::DenseIntOrFPElementsAttr>().getType().getElementType().isInteger(1))))) return emitError(loc, "'lmhlo.convolution' op ""attribute 'window_reversal' failed to satisfy constraint: constant boolean vector/tensor attribute");
  }
  }
  {
  auto tblgen_dimension_numbers = odsAttrs.get("dimension_numbers");
  if (!tblgen_dimension_numbers) return emitError(loc, "'lmhlo.convolution' op ""requires attribute 'dimension_numbers'");
    if (!((tblgen_dimension_numbers.isa<::mlir::mhlo::ConvDimensionNumbers>()))) return emitError(loc, "'lmhlo.convolution' op ""attribute 'dimension_numbers' failed to satisfy constraint: Structure of dimension information for conv op");
  }
  {
  auto tblgen_feature_group_count = odsAttrs.get("feature_group_count");
  if (!tblgen_feature_group_count) return emitError(loc, "'lmhlo.convolution' op ""requires attribute 'feature_group_count'");
    if (!(((tblgen_feature_group_count.isa<::mlir::IntegerAttr>())) && ((tblgen_feature_group_count.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.convolution' op ""attribute 'feature_group_count' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_batch_group_count = odsAttrs.get("batch_group_count");
  if (!tblgen_batch_group_count) return emitError(loc, "'lmhlo.convolution' op ""requires attribute 'batch_group_count'");
    if (!(((tblgen_batch_group_count.isa<::mlir::IntegerAttr>())) && ((tblgen_batch_group_count.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.convolution' op ""attribute 'batch_group_count' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_precision_config = odsAttrs.get("precision_config");
  if (tblgen_precision_config) {
    if (!(((tblgen_precision_config.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_precision_config.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return ((attr.isa<::mlir::StringAttr>())) && (((attr.cast<::mlir::StringAttr>().getValue() == "DEFAULT")) || ((attr.cast<::mlir::StringAttr>().getValue() == "HIGH")) || ((attr.cast<::mlir::StringAttr>().getValue() == "HIGHEST"))); })))) return emitError(loc, "'lmhlo.convolution' op ""attribute 'precision_config' failed to satisfy constraint: Precision Config attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ConvOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ConvOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ConvOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange ConvOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ConvOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ConvOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConvOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr ConvOp::window_stridesAttr() {
  return (*this)->getAttr("window_strides").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ConvOp::window_strides() {
  auto attr = window_stridesAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr ConvOp::paddingAttr() {
  return (*this)->getAttr("padding").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ConvOp::padding() {
  auto attr = paddingAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr ConvOp::lhs_dilationAttr() {
  return (*this)->getAttr("lhs_dilation").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ConvOp::lhs_dilation() {
  auto attr = lhs_dilationAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr ConvOp::rhs_dilationAttr() {
  return (*this)->getAttr("rhs_dilation").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ConvOp::rhs_dilation() {
  auto attr = rhs_dilationAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

::mlir::DenseElementsAttr ConvOp::window_reversalAttr() {
  return (*this)->getAttr("window_reversal").template dyn_cast_or_null<::mlir::DenseElementsAttr>();
}

::llvm::Optional< ::mlir::DenseElementsAttr > ConvOp::window_reversal() {
  auto attr = window_reversalAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseElementsAttr >(attr) : (::llvm::None);
}

::mlir::mhlo::ConvDimensionNumbers ConvOp::dimension_numbersAttr() {
  return (*this)->getAttr("dimension_numbers").template cast<::mlir::mhlo::ConvDimensionNumbers>();
}

::mlir::mhlo::ConvDimensionNumbers ConvOp::dimension_numbers() {
  auto attr = dimension_numbersAttr();
  return attr;
}

::mlir::IntegerAttr ConvOp::feature_group_countAttr() {
  return (*this)->getAttr("feature_group_count").template cast<::mlir::IntegerAttr>();
}

uint64_t ConvOp::feature_group_count() {
  auto attr = feature_group_countAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr ConvOp::batch_group_countAttr() {
  return (*this)->getAttr("batch_group_count").template cast<::mlir::IntegerAttr>();
}

uint64_t ConvOp::batch_group_count() {
  auto attr = batch_group_countAttr();
  return attr.getValue().getZExtValue();
}

::mlir::ArrayAttr ConvOp::precision_configAttr() {
  return (*this)->getAttr("precision_config").template dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > ConvOp::precision_config() {
  auto attr = precision_configAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

void ConvOp::window_stridesAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("window_strides", attr);
}

void ConvOp::paddingAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("padding", attr);
}

void ConvOp::lhs_dilationAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("lhs_dilation", attr);
}

void ConvOp::rhs_dilationAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("rhs_dilation", attr);
}

void ConvOp::window_reversalAttr(::mlir::DenseElementsAttr attr) {
  (*this)->setAttr("window_reversal", attr);
}

void ConvOp::dimension_numbersAttr(::mlir::mhlo::ConvDimensionNumbers attr) {
  (*this)->setAttr("dimension_numbers", attr);
}

void ConvOp::feature_group_countAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("feature_group_count", attr);
}

void ConvOp::batch_group_countAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("batch_group_count", attr);
}

void ConvOp::precision_configAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr("precision_config", attr);
}

::mlir::Attribute ConvOp::removeWindow_stridesAttr() {
  return (*this)->removeAttr("window_strides");
}

::mlir::Attribute ConvOp::removePaddingAttr() {
  return (*this)->removeAttr("padding");
}

::mlir::Attribute ConvOp::removeLhs_dilationAttr() {
  return (*this)->removeAttr("lhs_dilation");
}

::mlir::Attribute ConvOp::removeRhs_dilationAttr() {
  return (*this)->removeAttr("rhs_dilation");
}

::mlir::Attribute ConvOp::removeWindow_reversalAttr() {
  return (*this)->removeAttr("window_reversal");
}

::mlir::Attribute ConvOp::removePrecision_configAttr() {
  return (*this)->removeAttr("precision_config");
}

void ConvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value output, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbers dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(output);
  if (window_strides) {
  odsState.addAttribute("window_strides", window_strides);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  if (lhs_dilation) {
  odsState.addAttribute("lhs_dilation", lhs_dilation);
  }
  if (rhs_dilation) {
  odsState.addAttribute("rhs_dilation", rhs_dilation);
  }
  if (window_reversal) {
  odsState.addAttribute("window_reversal", window_reversal);
  }
  odsState.addAttribute("dimension_numbers", dimension_numbers);
  odsState.addAttribute("feature_group_count", feature_group_count);
  odsState.addAttribute("batch_group_count", batch_group_count);
  if (precision_config) {
  odsState.addAttribute("precision_config", precision_config);
  }
}

void ConvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value output, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbers dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(output);
  if (window_strides) {
  odsState.addAttribute("window_strides", window_strides);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  if (lhs_dilation) {
  odsState.addAttribute("lhs_dilation", lhs_dilation);
  }
  if (rhs_dilation) {
  odsState.addAttribute("rhs_dilation", rhs_dilation);
  }
  if (window_reversal) {
  odsState.addAttribute("window_reversal", window_reversal);
  }
  odsState.addAttribute("dimension_numbers", dimension_numbers);
  odsState.addAttribute("feature_group_count", feature_group_count);
  odsState.addAttribute("batch_group_count", batch_group_count);
  if (precision_config) {
  odsState.addAttribute("precision_config", precision_config);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value output, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbers dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(output);
  if (window_strides) {
  odsState.addAttribute("window_strides", window_strides);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  if (lhs_dilation) {
  odsState.addAttribute("lhs_dilation", lhs_dilation);
  }
  if (rhs_dilation) {
  odsState.addAttribute("rhs_dilation", rhs_dilation);
  }
  if (window_reversal) {
  odsState.addAttribute("window_reversal", window_reversal);
  }
  odsState.addAttribute("dimension_numbers", dimension_numbers);
  odsState.addAttribute("feature_group_count", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), feature_group_count));
  odsState.addAttribute("batch_group_count", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), batch_group_count));
  if (precision_config) {
  odsState.addAttribute("precision_config", precision_config);
  }
}

void ConvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value output, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbers dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(output);
  if (window_strides) {
  odsState.addAttribute("window_strides", window_strides);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  if (lhs_dilation) {
  odsState.addAttribute("lhs_dilation", lhs_dilation);
  }
  if (rhs_dilation) {
  odsState.addAttribute("rhs_dilation", rhs_dilation);
  }
  if (window_reversal) {
  odsState.addAttribute("window_reversal", window_reversal);
  }
  odsState.addAttribute("dimension_numbers", dimension_numbers);
  odsState.addAttribute("feature_group_count", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), feature_group_count));
  odsState.addAttribute("batch_group_count", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), batch_group_count));
  if (precision_config) {
  odsState.addAttribute("precision_config", precision_config);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvOp::verify() {
  if (failed(ConvOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ConvOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ConvertOp definitions
//===----------------------------------------------------------------------===//

ConvertOpAdaptor::ConvertOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ConvertOpAdaptor::ConvertOpAdaptor(ConvertOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ConvertOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ConvertOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ConvertOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvertOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value ConvertOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr ConvertOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ConvertOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ConvertOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvertOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ConvertOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value ConvertOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ConvertOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ConvertOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConvertOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvertOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ConvertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void ConvertOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvertOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvertOp::verify() {
  if (failed(ConvertOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ConvertOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::CopyOp definitions
//===----------------------------------------------------------------------===//

CopyOpAdaptor::CopyOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

CopyOpAdaptor::CopyOpAdaptor(CopyOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange CopyOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CopyOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CopyOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CopyOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value CopyOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr CopyOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult CopyOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> CopyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CopyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CopyOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value CopyOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CopyOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CopyOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CopyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CopyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
}

void CopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CopyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CopyOp::verify() {
  if (failed(CopyOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void CopyOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::CosOp definitions
//===----------------------------------------------------------------------===//

CosOpAdaptor::CosOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

CosOpAdaptor::CosOpAdaptor(CosOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange CosOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CosOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange CosOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CosOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value CosOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr CosOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult CosOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> CosOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CosOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CosOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value CosOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CosOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CosOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CosOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CosOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void CosOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CosOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CosOp::verify() {
  if (failed(CosOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void CosOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::CustomCallOp definitions
//===----------------------------------------------------------------------===//

CustomCallOpAdaptor::CustomCallOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

CustomCallOpAdaptor::CustomCallOpAdaptor(CustomCallOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange CustomCallOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> CustomCallOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();

  auto sizeAttrValues = sizeAttr.getValues<uint32_t>();
  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += *(sizeAttrValues.begin() + i);
  unsigned size = *(sizeAttrValues.begin() + index);
  return {start, size};
}

::mlir::ValueRange CustomCallOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange CustomCallOpAdaptor::args() {
  return getODSOperands(0);
}

::mlir::ValueRange CustomCallOpAdaptor::output() {
  return getODSOperands(1);
}

::mlir::DictionaryAttr CustomCallOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr CustomCallOpAdaptor::call_target_name() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("call_target_name").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::BoolAttr CustomCallOpAdaptor::has_side_effect() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("has_side_effect").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::StringAttr CustomCallOpAdaptor::backend_config() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("backend_config").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::lmhlo::CustomCallTargetArgMapping CustomCallOpAdaptor::target_arg_mapping() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::lmhlo::CustomCallTargetArgMapping attr = odsAttrs.get("target_arg_mapping").dyn_cast_or_null<::mlir::lmhlo::CustomCallTargetArgMapping>();
  return attr;
}

::mlir::LogicalResult CustomCallOpAdaptor::verify(::mlir::Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();
    auto numElements = sizeAttr.getType().cast<::mlir::ShapedType>().getNumElements();
    if (numElements != 2)
      return emitError(loc, "'operand_segment_sizes' attribute for specifying operand segments "
                       "must have 2 elements, but got ") << numElements;
  }
    {
  auto tblgen_call_target_name = odsAttrs.get("call_target_name");
  if (!tblgen_call_target_name) return emitError(loc, "'lmhlo.custom_call' op ""requires attribute 'call_target_name'");
    if (!((tblgen_call_target_name.isa<::mlir::StringAttr>()))) return emitError(loc, "'lmhlo.custom_call' op ""attribute 'call_target_name' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_has_side_effect = odsAttrs.get("has_side_effect");
  if (tblgen_has_side_effect) {
    if (!((tblgen_has_side_effect.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.custom_call' op ""attribute 'has_side_effect' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_backend_config = odsAttrs.get("backend_config");
  if (!tblgen_backend_config) return emitError(loc, "'lmhlo.custom_call' op ""requires attribute 'backend_config'");
    if (!((tblgen_backend_config.isa<::mlir::StringAttr>()))) return emitError(loc, "'lmhlo.custom_call' op ""attribute 'backend_config' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_target_arg_mapping = odsAttrs.get("target_arg_mapping");
  if (tblgen_target_arg_mapping) {
    if (!((tblgen_target_arg_mapping.isa<::mlir::lmhlo::CustomCallTargetArgMapping>()))) return emitError(loc, "'lmhlo.custom_call' op ""attribute 'target_arg_mapping' failed to satisfy constraint: Custom call operands to target argument mapping info");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> CustomCallOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = (*this)->getAttr("operand_segment_sizes").cast<::mlir::DenseIntElementsAttr>();

  auto sizeAttrValues = sizeAttr.getValues<uint32_t>();
  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += *(sizeAttrValues.begin() + i);
  unsigned size = *(sizeAttrValues.begin() + index);
  return {start, size};
}

::mlir::Operation::operand_range CustomCallOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CustomCallOp::args() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range CustomCallOp::output() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange CustomCallOp::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getAttrDictionary().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange CustomCallOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getAttrDictionary().getNamed("operand_segment_sizes")));
}

std::pair<unsigned, unsigned> CustomCallOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CustomCallOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr CustomCallOp::call_target_nameAttr() {
  return (*this)->getAttr("call_target_name").template cast<::mlir::StringAttr>();
}

::llvm::StringRef CustomCallOp::call_target_name() {
  auto attr = call_target_nameAttr();
  return attr.getValue();
}

::mlir::BoolAttr CustomCallOp::has_side_effectAttr() {
  return (*this)->getAttr("has_side_effect").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool CustomCallOp::has_side_effect() {
  auto attr = has_side_effectAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::StringAttr CustomCallOp::backend_configAttr() {
  return (*this)->getAttr("backend_config").template cast<::mlir::StringAttr>();
}

::llvm::StringRef CustomCallOp::backend_config() {
  auto attr = backend_configAttr();
  return attr.getValue();
}

::mlir::lmhlo::CustomCallTargetArgMapping CustomCallOp::target_arg_mappingAttr() {
  return (*this)->getAttr("target_arg_mapping").template dyn_cast_or_null<::mlir::lmhlo::CustomCallTargetArgMapping>();
}

::llvm::Optional<::mlir::lmhlo::CustomCallTargetArgMapping> CustomCallOp::target_arg_mapping() {
  auto attr = target_arg_mappingAttr();
  return attr ? ::llvm::Optional<::mlir::lmhlo::CustomCallTargetArgMapping>(attr) : (::llvm::None);
}

void CustomCallOp::call_target_nameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("call_target_name", attr);
}

void CustomCallOp::has_side_effectAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("has_side_effect", attr);
}

void CustomCallOp::backend_configAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("backend_config", attr);
}

void CustomCallOp::target_arg_mappingAttr(::mlir::lmhlo::CustomCallTargetArgMapping attr) {
  (*this)->setAttr("target_arg_mapping", attr);
}

::mlir::Attribute CustomCallOp::removeTarget_arg_mappingAttr() {
  return (*this)->removeAttr("target_arg_mapping");
}

void CustomCallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange args, ::mlir::ValueRange output, ::mlir::StringAttr call_target_name, ::mlir::BoolAttr has_side_effect, ::mlir::StringAttr backend_config, /*optional*/::mlir::lmhlo::CustomCallTargetArgMapping target_arg_mapping) {
  odsState.addOperands(args);
  odsState.addOperands(output);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({static_cast<int32_t>(args.size()), static_cast<int32_t>(output.size())}));
  odsState.addAttribute("call_target_name", call_target_name);
  odsState.addAttribute("has_side_effect", has_side_effect);
  odsState.addAttribute("backend_config", backend_config);
  if (target_arg_mapping) {
  odsState.addAttribute("target_arg_mapping", target_arg_mapping);
  }
}

void CustomCallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange args, ::mlir::ValueRange output, ::mlir::StringAttr call_target_name, ::mlir::BoolAttr has_side_effect, ::mlir::StringAttr backend_config, /*optional*/::mlir::lmhlo::CustomCallTargetArgMapping target_arg_mapping) {
  odsState.addOperands(args);
  odsState.addOperands(output);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({static_cast<int32_t>(args.size()), static_cast<int32_t>(output.size())}));
  odsState.addAttribute("call_target_name", call_target_name);
  odsState.addAttribute("has_side_effect", has_side_effect);
  odsState.addAttribute("backend_config", backend_config);
  if (target_arg_mapping) {
  odsState.addAttribute("target_arg_mapping", target_arg_mapping);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CustomCallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange args, ::mlir::ValueRange output, ::llvm::StringRef call_target_name, bool has_side_effect, ::llvm::StringRef backend_config, /*optional*/::mlir::lmhlo::CustomCallTargetArgMapping target_arg_mapping) {
  odsState.addOperands(args);
  odsState.addOperands(output);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({static_cast<int32_t>(args.size()), static_cast<int32_t>(output.size())}));
  odsState.addAttribute("call_target_name", odsBuilder.getStringAttr(call_target_name));
  odsState.addAttribute("has_side_effect", odsBuilder.getBoolAttr(has_side_effect));
  odsState.addAttribute("backend_config", odsBuilder.getStringAttr(backend_config));
  if (target_arg_mapping) {
  odsState.addAttribute("target_arg_mapping", target_arg_mapping);
  }
}

void CustomCallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange args, ::mlir::ValueRange output, ::llvm::StringRef call_target_name, bool has_side_effect, ::llvm::StringRef backend_config, /*optional*/::mlir::lmhlo::CustomCallTargetArgMapping target_arg_mapping) {
  odsState.addOperands(args);
  odsState.addOperands(output);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({static_cast<int32_t>(args.size()), static_cast<int32_t>(output.size())}));
  odsState.addAttribute("call_target_name", odsBuilder.getStringAttr(call_target_name));
  odsState.addAttribute("has_side_effect", odsBuilder.getBoolAttr(has_side_effect));
  odsState.addAttribute("backend_config", odsBuilder.getStringAttr(backend_config));
  if (target_arg_mapping) {
  odsState.addAttribute("target_arg_mapping", target_arg_mapping);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CustomCallOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CustomCallOp::verify() {
  if (failed(CustomCallOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return Verify(*this);
}

void CustomCallOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::DivOp definitions
//===----------------------------------------------------------------------===//

DivOpAdaptor::DivOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

DivOpAdaptor::DivOpAdaptor(DivOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange DivOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> DivOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange DivOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DivOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value DivOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value DivOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr DivOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr DivOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult DivOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.divide' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> DivOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DivOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DivOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value DivOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value DivOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange DivOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange DivOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange DivOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DivOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DivOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr DivOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > DivOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void DivOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute DivOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void DivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void DivOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DivOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DivOp::verify() {
  if (failed(DivOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void DivOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::DotOp definitions
//===----------------------------------------------------------------------===//

DotOpAdaptor::DotOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

DotOpAdaptor::DotOpAdaptor(DotOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange DotOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> DotOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange DotOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DotOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value DotOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value DotOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr DotOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::mhlo::DotDimensionNumbers DotOpAdaptor::dot_dimension_numbers() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::mhlo::DotDimensionNumbers attr = odsAttrs.get("dot_dimension_numbers").cast<::mlir::mhlo::DotDimensionNumbers>();
  return attr;
}

::mlir::ArrayAttr DotOpAdaptor::precision_config() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("precision_config").dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult DotOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_dot_dimension_numbers = odsAttrs.get("dot_dimension_numbers");
  if (!tblgen_dot_dimension_numbers) return emitError(loc, "'lmhlo.dot' op ""requires attribute 'dot_dimension_numbers'");
    if (!((tblgen_dot_dimension_numbers.isa<::mlir::mhlo::DotDimensionNumbers>()))) return emitError(loc, "'lmhlo.dot' op ""attribute 'dot_dimension_numbers' failed to satisfy constraint: Structure of dimension information for dot product");
  }
  {
  auto tblgen_precision_config = odsAttrs.get("precision_config");
  if (tblgen_precision_config) {
    if (!(((tblgen_precision_config.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_precision_config.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return ((attr.isa<::mlir::StringAttr>())) && (((attr.cast<::mlir::StringAttr>().getValue() == "DEFAULT")) || ((attr.cast<::mlir::StringAttr>().getValue() == "HIGH")) || ((attr.cast<::mlir::StringAttr>().getValue() == "HIGHEST"))); })))) return emitError(loc, "'lmhlo.dot' op ""attribute 'precision_config' failed to satisfy constraint: Precision Config attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> DotOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DotOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DotOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value DotOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value DotOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange DotOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange DotOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange DotOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DotOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DotOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::mhlo::DotDimensionNumbers DotOp::dot_dimension_numbersAttr() {
  return (*this)->getAttr("dot_dimension_numbers").template cast<::mlir::mhlo::DotDimensionNumbers>();
}

::mlir::mhlo::DotDimensionNumbers DotOp::dot_dimension_numbers() {
  auto attr = dot_dimension_numbersAttr();
  return attr;
}

::mlir::ArrayAttr DotOp::precision_configAttr() {
  return (*this)->getAttr("precision_config").template dyn_cast_or_null<::mlir::ArrayAttr>();
}

::llvm::Optional< ::mlir::ArrayAttr > DotOp::precision_config() {
  auto attr = precision_configAttr();
  return attr ? ::llvm::Optional< ::mlir::ArrayAttr >(attr) : (::llvm::None);
}

void DotOp::dot_dimension_numbersAttr(::mlir::mhlo::DotDimensionNumbers attr) {
  (*this)->setAttr("dot_dimension_numbers", attr);
}

void DotOp::precision_configAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr("precision_config", attr);
}

::mlir::Attribute DotOp::removePrecision_configAttr() {
  return (*this)->removeAttr("precision_config");
}

void DotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::mhlo::DotDimensionNumbers dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::Value output) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(output);
  odsState.addAttribute("dot_dimension_numbers", dot_dimension_numbers);
  if (precision_config) {
  odsState.addAttribute("precision_config", precision_config);
  }
}

void DotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::mhlo::DotDimensionNumbers dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::Value output) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(output);
  odsState.addAttribute("dot_dimension_numbers", dot_dimension_numbers);
  if (precision_config) {
  odsState.addAttribute("precision_config", precision_config);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DotOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DotOp::verify() {
  if (failed(DotOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void DotOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::DynamicSliceOp definitions
//===----------------------------------------------------------------------===//

DynamicSliceOpAdaptor::DynamicSliceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

DynamicSliceOpAdaptor::DynamicSliceOpAdaptor(DynamicSliceOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange DynamicSliceOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> DynamicSliceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false};
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

::mlir::ValueRange DynamicSliceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicSliceOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::ValueRange DynamicSliceOpAdaptor::start_indices() {
  return getODSOperands(1);
}

::mlir::Value DynamicSliceOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr DynamicSliceOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr DynamicSliceOpAdaptor::slice_sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("slice_sizes").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult DynamicSliceOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_slice_sizes = odsAttrs.get("slice_sizes");
  if (!tblgen_slice_sizes) return emitError(loc, "'lmhlo.dynamic_slice' op ""requires attribute 'slice_sizes'");
    if (!(((tblgen_slice_sizes.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_slice_sizes.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.dynamic_slice' op ""attribute 'slice_sizes' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> DynamicSliceOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false};
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

::mlir::Operation::operand_range DynamicSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicSliceOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Operation::operand_range DynamicSliceOp::start_indices() {
  return getODSOperands(1);
}

::mlir::Value DynamicSliceOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange DynamicSliceOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange DynamicSliceOp::start_indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange DynamicSliceOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DynamicSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr DynamicSliceOp::slice_sizesAttr() {
  return (*this)->getAttr("slice_sizes").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr DynamicSliceOp::slice_sizes() {
  auto attr = slice_sizesAttr();
  return attr;
}

void DynamicSliceOp::slice_sizesAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("slice_sizes", attr);
}

void DynamicSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::ValueRange start_indices, ::mlir::Value output, ::mlir::DenseIntElementsAttr slice_sizes) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addOperands(output);
  odsState.addAttribute("slice_sizes", slice_sizes);
}

void DynamicSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::ValueRange start_indices, ::mlir::Value output, ::mlir::DenseIntElementsAttr slice_sizes) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addOperands(output);
  odsState.addAttribute("slice_sizes", slice_sizes);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicSliceOp::verify() {
  if (failed(DynamicSliceOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (!((::llvm::is_splat(::llvm::makeArrayRef({getElementTypeOrSelf((*this->getODSOperands(0).begin())), getElementTypeOrSelf((*this->getODSOperands(2).begin()))})))))
    return emitOpError("failed to verify that all of {operand, output} have same element type");
  return ::mlir::success();
}

void DynamicSliceOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::DynamicUpdateSliceOp definitions
//===----------------------------------------------------------------------===//

DynamicUpdateSliceOpAdaptor::DynamicUpdateSliceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

DynamicUpdateSliceOpAdaptor::DynamicUpdateSliceOpAdaptor(DynamicUpdateSliceOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange DynamicUpdateSliceOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> DynamicUpdateSliceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange DynamicUpdateSliceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicUpdateSliceOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value DynamicUpdateSliceOpAdaptor::update() {
  return *getODSOperands(1).begin();
}

::mlir::ValueRange DynamicUpdateSliceOpAdaptor::start_indices() {
  return getODSOperands(2);
}

::mlir::Value DynamicUpdateSliceOpAdaptor::output() {
  return *getODSOperands(3).begin();
}

::mlir::DictionaryAttr DynamicUpdateSliceOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult DynamicUpdateSliceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> DynamicUpdateSliceOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range DynamicUpdateSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DynamicUpdateSliceOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value DynamicUpdateSliceOp::update() {
  return *getODSOperands(1).begin();
}

::mlir::Operation::operand_range DynamicUpdateSliceOp::start_indices() {
  return getODSOperands(2);
}

::mlir::Value DynamicUpdateSliceOp::output() {
  return *getODSOperands(3).begin();
}

::mlir::MutableOperandRange DynamicUpdateSliceOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange DynamicUpdateSliceOp::updateMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange DynamicUpdateSliceOp::start_indicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange DynamicUpdateSliceOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DynamicUpdateSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DynamicUpdateSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void DynamicUpdateSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value update, ::mlir::ValueRange start_indices, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(update);
  odsState.addOperands(start_indices);
  odsState.addOperands(output);
}

void DynamicUpdateSliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value update, ::mlir::ValueRange start_indices, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(update);
  odsState.addOperands(start_indices);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DynamicUpdateSliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DynamicUpdateSliceOp::verify() {
  if (failed(DynamicUpdateSliceOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (::mlir::Value v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void DynamicUpdateSliceOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(3))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ExpOp definitions
//===----------------------------------------------------------------------===//

ExpOpAdaptor::ExpOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ExpOpAdaptor::ExpOpAdaptor(ExpOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ExpOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ExpOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ExpOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExpOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value ExpOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr ExpOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ExpOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ExpOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ExpOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ExpOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value ExpOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ExpOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ExpOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ExpOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExpOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void ExpOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExpOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExpOp::verify() {
  if (failed(ExpOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ExpOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::Expm1Op definitions
//===----------------------------------------------------------------------===//

Expm1OpAdaptor::Expm1OpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

Expm1OpAdaptor::Expm1OpAdaptor(Expm1Op&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange Expm1OpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> Expm1OpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange Expm1OpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Expm1OpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value Expm1OpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr Expm1OpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult Expm1OpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> Expm1Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Expm1Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Expm1Op::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value Expm1Op::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange Expm1Op::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange Expm1Op::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> Expm1Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Expm1Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void Expm1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void Expm1Op::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Expm1Op::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Expm1Op::verify() {
  if (failed(Expm1OpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void Expm1Op::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::FftOp definitions
//===----------------------------------------------------------------------===//

FftOpAdaptor::FftOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

FftOpAdaptor::FftOpAdaptor(FftOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange FftOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> FftOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange FftOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FftOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value FftOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr FftOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr FftOpAdaptor::fft_type() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("fft_type").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr FftOpAdaptor::fft_length() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("fft_length").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult FftOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_fft_type = odsAttrs.get("fft_type");
  if (!tblgen_fft_type) return emitError(loc, "'lmhlo.fft' op ""requires attribute 'fft_type'");
    if (!(((tblgen_fft_type.isa<::mlir::StringAttr>())) && (((tblgen_fft_type.cast<::mlir::StringAttr>().getValue() == "FFT")) || ((tblgen_fft_type.cast<::mlir::StringAttr>().getValue() == "IFFT")) || ((tblgen_fft_type.cast<::mlir::StringAttr>().getValue() == "RFFT")) || ((tblgen_fft_type.cast<::mlir::StringAttr>().getValue() == "IRFFT"))))) return emitError(loc, "'lmhlo.fft' op ""attribute 'fft_type' failed to satisfy constraint: XLA fast fourier transform type.");
  }
  {
  auto tblgen_fft_length = odsAttrs.get("fft_length");
  if (!tblgen_fft_length) return emitError(loc, "'lmhlo.fft' op ""requires attribute 'fft_length'");
    if (!(((tblgen_fft_length.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_fft_length.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.fft' op ""attribute 'fft_length' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> FftOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FftOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FftOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value FftOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange FftOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FftOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FftOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FftOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr FftOp::fft_typeAttr() {
  return (*this)->getAttr("fft_type").template cast<::mlir::StringAttr>();
}

::llvm::StringRef FftOp::fft_type() {
  auto attr = fft_typeAttr();
  return attr.getValue();
}

::mlir::DenseIntElementsAttr FftOp::fft_lengthAttr() {
  return (*this)->getAttr("fft_length").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr FftOp::fft_length() {
  auto attr = fft_lengthAttr();
  return attr;
}

void FftOp::fft_typeAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("fft_type", attr);
}

void FftOp::fft_lengthAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("fft_length", attr);
}

void FftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value output, ::mlir::StringAttr fft_type, ::mlir::DenseIntElementsAttr fft_length) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("fft_type", fft_type);
  odsState.addAttribute("fft_length", fft_length);
}

void FftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output, ::mlir::StringAttr fft_type, ::mlir::DenseIntElementsAttr fft_length) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("fft_type", fft_type);
  odsState.addAttribute("fft_length", fft_length);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value output, ::llvm::StringRef fft_type, ::mlir::DenseIntElementsAttr fft_length) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("fft_type", odsBuilder.getStringAttr(fft_type));
  odsState.addAttribute("fft_length", fft_length);
}

void FftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output, ::llvm::StringRef fft_type, ::mlir::DenseIntElementsAttr fft_length) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("fft_type", odsBuilder.getStringAttr(fft_type));
  odsState.addAttribute("fft_length", fft_length);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FftOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FftOp::verify() {
  if (failed(FftOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void FftOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::FloorOp definitions
//===----------------------------------------------------------------------===//

FloorOpAdaptor::FloorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

FloorOpAdaptor::FloorOpAdaptor(FloorOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange FloorOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> FloorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange FloorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FloorOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value FloorOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr FloorOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult FloorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> FloorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FloorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value FloorOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value FloorOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange FloorOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FloorOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FloorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FloorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void FloorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void FloorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FloorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FloorOp::verify() {
  if (failed(FloorOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void FloorOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::GatherOp definitions
//===----------------------------------------------------------------------===//

GatherOpAdaptor::GatherOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

GatherOpAdaptor::GatherOpAdaptor(GatherOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange GatherOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> GatherOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange GatherOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GatherOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value GatherOpAdaptor::start_indices() {
  return *getODSOperands(1).begin();
}

::mlir::Value GatherOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr GatherOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::mhlo::GatherDimensionNumbers GatherOpAdaptor::dimension_numbers() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::mhlo::GatherDimensionNumbers attr = odsAttrs.get("dimension_numbers").cast<::mlir::mhlo::GatherDimensionNumbers>();
  return attr;
}

::mlir::DenseIntElementsAttr GatherOpAdaptor::slice_sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("slice_sizes").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult GatherOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_dimension_numbers = odsAttrs.get("dimension_numbers");
  if (!tblgen_dimension_numbers) return emitError(loc, "'lmhlo.gather' op ""requires attribute 'dimension_numbers'");
    if (!((tblgen_dimension_numbers.isa<::mlir::mhlo::GatherDimensionNumbers>()))) return emitError(loc, "'lmhlo.gather' op ""attribute 'dimension_numbers' failed to satisfy constraint: Structure of dimension information for gather");
  }
  {
  auto tblgen_slice_sizes = odsAttrs.get("slice_sizes");
  if (!tblgen_slice_sizes) return emitError(loc, "'lmhlo.gather' op ""requires attribute 'slice_sizes'");
    if (!(((tblgen_slice_sizes.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_slice_sizes.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.gather' op ""attribute 'slice_sizes' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> GatherOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GatherOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GatherOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value GatherOp::start_indices() {
  return *getODSOperands(1).begin();
}

::mlir::Value GatherOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange GatherOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange GatherOp::start_indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange GatherOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> GatherOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GatherOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::mhlo::GatherDimensionNumbers GatherOp::dimension_numbersAttr() {
  return (*this)->getAttr("dimension_numbers").template cast<::mlir::mhlo::GatherDimensionNumbers>();
}

::mlir::mhlo::GatherDimensionNumbers GatherOp::dimension_numbers() {
  auto attr = dimension_numbersAttr();
  return attr;
}

::mlir::DenseIntElementsAttr GatherOp::slice_sizesAttr() {
  return (*this)->getAttr("slice_sizes").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr GatherOp::slice_sizes() {
  auto attr = slice_sizesAttr();
  return attr;
}

void GatherOp::dimension_numbersAttr(::mlir::mhlo::GatherDimensionNumbers attr) {
  (*this)->setAttr("dimension_numbers", attr);
}

void GatherOp::slice_sizesAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("slice_sizes", attr);
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value start_indices, ::mlir::mhlo::GatherDimensionNumbers dimension_numbers, ::mlir::DenseIntElementsAttr slice_sizes, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addOperands(output);
  odsState.addAttribute("dimension_numbers", dimension_numbers);
  odsState.addAttribute("slice_sizes", slice_sizes);
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value start_indices, ::mlir::mhlo::GatherDimensionNumbers dimension_numbers, ::mlir::DenseIntElementsAttr slice_sizes, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(start_indices);
  odsState.addOperands(output);
  odsState.addAttribute("dimension_numbers", dimension_numbers);
  odsState.addAttribute("slice_sizes", slice_sizes);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GatherOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GatherOp::verify() {
  if (failed(GatherOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void GatherOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ImagOp definitions
//===----------------------------------------------------------------------===//

ImagOpAdaptor::ImagOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ImagOpAdaptor::ImagOpAdaptor(ImagOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ImagOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ImagOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ImagOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ImagOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value ImagOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr ImagOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ImagOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ImagOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ImagOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ImagOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value ImagOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ImagOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ImagOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ImagOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ImagOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ImagOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void ImagOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ImagOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ImagOp::verify() {
  if (failed(ImagOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops7(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ImagOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::InfeedOp definitions
//===----------------------------------------------------------------------===//

InfeedOpAdaptor::InfeedOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

InfeedOpAdaptor::InfeedOpAdaptor(InfeedOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange InfeedOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> InfeedOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange InfeedOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange InfeedOpAdaptor::outputs() {
  return getODSOperands(0);
}

::mlir::DictionaryAttr InfeedOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr InfeedOpAdaptor::config() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("config").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult InfeedOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_config = odsAttrs.get("config");
  if (!tblgen_config) return emitError(loc, "'lmhlo.infeed' op ""requires attribute 'config'");
    if (!((tblgen_config.isa<::mlir::StringAttr>()))) return emitError(loc, "'lmhlo.infeed' op ""attribute 'config' failed to satisfy constraint: string attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> InfeedOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range InfeedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range InfeedOp::outputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange InfeedOp::outputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> InfeedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InfeedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr InfeedOp::configAttr() {
  return (*this)->getAttr("config").template cast<::mlir::StringAttr>();
}

::llvm::StringRef InfeedOp::config() {
  auto attr = configAttr();
  return attr.getValue();
}

void InfeedOp::configAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("config", attr);
}

void InfeedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange outputs, ::mlir::StringAttr config) {
  odsState.addOperands(outputs);
  odsState.addAttribute("config", config);
}

void InfeedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange outputs, ::mlir::StringAttr config) {
  odsState.addOperands(outputs);
  odsState.addAttribute("config", config);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InfeedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange outputs, ::llvm::StringRef config) {
  odsState.addOperands(outputs);
  odsState.addAttribute("config", odsBuilder.getStringAttr(config));
}

void InfeedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange outputs, ::llvm::StringRef config) {
  odsState.addOperands(outputs);
  odsState.addAttribute("config", odsBuilder.getStringAttr(config));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InfeedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult InfeedOp::verify() {
  if (failed(InfeedOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void InfeedOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::IotaOp definitions
//===----------------------------------------------------------------------===//

IotaOpAdaptor::IotaOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

IotaOpAdaptor::IotaOpAdaptor(IotaOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange IotaOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> IotaOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange IotaOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IotaOpAdaptor::output() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr IotaOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr IotaOpAdaptor::iota_dimension() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("iota_dimension").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult IotaOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_iota_dimension = odsAttrs.get("iota_dimension");
  if (!tblgen_iota_dimension) return emitError(loc, "'lmhlo.iota' op ""requires attribute 'iota_dimension'");
    if (!(((tblgen_iota_dimension.isa<::mlir::IntegerAttr>())) && ((tblgen_iota_dimension.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.iota' op ""attribute 'iota_dimension' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> IotaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IotaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IotaOp::output() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange IotaOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> IotaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IotaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::IntegerAttr IotaOp::iota_dimensionAttr() {
  return (*this)->getAttr("iota_dimension").template cast<::mlir::IntegerAttr>();
}

uint64_t IotaOp::iota_dimension() {
  auto attr = iota_dimensionAttr();
  return attr.getValue().getZExtValue();
}

void IotaOp::iota_dimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("iota_dimension", attr);
}

void IotaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr iota_dimension, ::mlir::Value output) {
  odsState.addOperands(output);
  odsState.addAttribute("iota_dimension", iota_dimension);
}

void IotaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr iota_dimension, ::mlir::Value output) {
  odsState.addOperands(output);
  odsState.addAttribute("iota_dimension", iota_dimension);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IotaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint64_t iota_dimension, ::mlir::Value output) {
  odsState.addOperands(output);
  odsState.addAttribute("iota_dimension", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), iota_dimension));
}

void IotaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint64_t iota_dimension, ::mlir::Value output) {
  odsState.addOperands(output);
  odsState.addAttribute("iota_dimension", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), iota_dimension));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IotaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult IotaOp::verify() {
  if (failed(IotaOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void IotaOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::IsFiniteOp definitions
//===----------------------------------------------------------------------===//

IsFiniteOpAdaptor::IsFiniteOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

IsFiniteOpAdaptor::IsFiniteOpAdaptor(IsFiniteOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange IsFiniteOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> IsFiniteOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange IsFiniteOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsFiniteOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value IsFiniteOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr IsFiniteOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult IsFiniteOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> IsFiniteOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range IsFiniteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value IsFiniteOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value IsFiniteOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange IsFiniteOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange IsFiniteOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> IsFiniteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range IsFiniteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void IsFiniteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void IsFiniteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IsFiniteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult IsFiniteOp::verify() {
  if (failed(IsFiniteOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops6(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void IsFiniteOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::Log1pOp definitions
//===----------------------------------------------------------------------===//

Log1pOpAdaptor::Log1pOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

Log1pOpAdaptor::Log1pOpAdaptor(Log1pOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange Log1pOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> Log1pOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange Log1pOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Log1pOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value Log1pOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr Log1pOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult Log1pOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> Log1pOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range Log1pOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value Log1pOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value Log1pOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange Log1pOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange Log1pOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> Log1pOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range Log1pOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void Log1pOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Log1pOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult Log1pOp::verify() {
  if (failed(Log1pOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void Log1pOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::LogOp definitions
//===----------------------------------------------------------------------===//

LogOpAdaptor::LogOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

LogOpAdaptor::LogOpAdaptor(LogOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange LogOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> LogOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange LogOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LogOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value LogOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr LogOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult LogOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> LogOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LogOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LogOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value LogOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange LogOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LogOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> LogOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LogOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void LogOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LogOp::verify() {
  if (failed(LogOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void LogOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::LogisticOp definitions
//===----------------------------------------------------------------------===//

LogisticOpAdaptor::LogisticOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

LogisticOpAdaptor::LogisticOpAdaptor(LogisticOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange LogisticOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> LogisticOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange LogisticOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LogisticOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value LogisticOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr LogisticOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult LogisticOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> LogisticOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LogisticOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value LogisticOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value LogisticOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange LogisticOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LogisticOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> LogisticOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LogisticOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void LogisticOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void LogisticOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogisticOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LogisticOp::verify() {
  if (failed(LogisticOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void LogisticOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::MapOp definitions
//===----------------------------------------------------------------------===//

MapOpAdaptor::MapOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

MapOpAdaptor::MapOpAdaptor(MapOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange MapOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> MapOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange MapOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange MapOpAdaptor::operands() {
  return getODSOperands(0);
}

::mlir::Value MapOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr MapOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr MapOpAdaptor::dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("dimensions").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::RegionRange MapOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &MapOpAdaptor::computation() {
  return *odsRegions[0];
}

::mlir::LogicalResult MapOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_dimensions = odsAttrs.get("dimensions");
  if (!tblgen_dimensions) return emitError(loc, "'lmhlo.map' op ""requires attribute 'dimensions'");
    if (!(((tblgen_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.map' op ""attribute 'dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> MapOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range MapOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range MapOp::operands() {
  return getODSOperands(0);
}

::mlir::Value MapOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange MapOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MapOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MapOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MapOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &MapOp::computation() {
  return (*this)->getRegion(0);
}

::mlir::DenseIntElementsAttr MapOp::dimensionsAttr() {
  return (*this)->getAttr("dimensions").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr MapOp::dimensions() {
  auto attr = dimensionsAttr();
  return attr;
}

void MapOp::dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("dimensions", attr);
}

void MapOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::mlir::Value output, ::mlir::DenseIntElementsAttr dimensions) {
  odsState.addOperands(operands);
  odsState.addOperands(output);
  odsState.addAttribute("dimensions", dimensions);
  (void)odsState.addRegion();
}

void MapOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::mlir::Value output, ::mlir::DenseIntElementsAttr dimensions) {
  odsState.addOperands(operands);
  odsState.addOperands(output);
  odsState.addAttribute("dimensions", dimensions);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MapOp::verify() {
  if (failed(MapOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>((*this)->getRegion(0))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('computation') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::mlir::success();
}

void MapOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::MaxOp definitions
//===----------------------------------------------------------------------===//

MaxOpAdaptor::MaxOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

MaxOpAdaptor::MaxOpAdaptor(MaxOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange MaxOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> MaxOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange MaxOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value MaxOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value MaxOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr MaxOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr MaxOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult MaxOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.maximum' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> MaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MaxOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value MaxOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value MaxOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange MaxOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaxOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaxOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr MaxOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > MaxOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void MaxOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute MaxOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void MaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void MaxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MaxOp::verify() {
  if (failed(MaxOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void MaxOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::MinOp definitions
//===----------------------------------------------------------------------===//

MinOpAdaptor::MinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

MinOpAdaptor::MinOpAdaptor(MinOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange MinOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> MinOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange MinOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value MinOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value MinOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr MinOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr MinOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult MinOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.minimum' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> MinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MinOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value MinOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value MinOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange MinOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MinOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MinOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr MinOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > MinOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void MinOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute MinOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void MinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void MinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MinOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MinOp::verify() {
  if (failed(MinOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void MinOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::MulOp definitions
//===----------------------------------------------------------------------===//

MulOpAdaptor::MulOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

MulOpAdaptor::MulOpAdaptor(MulOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange MulOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> MulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange MulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value MulOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value MulOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr MulOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr MulOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult MulOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.multiply' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> MulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MulOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value MulOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value MulOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange MulOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MulOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MulOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr MulOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > MulOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void MulOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute MulOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void MulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MulOp::verify() {
  if (failed(MulOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void MulOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::NegOp definitions
//===----------------------------------------------------------------------===//

NegOpAdaptor::NegOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

NegOpAdaptor::NegOpAdaptor(NegOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange NegOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> NegOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange NegOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NegOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value NegOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr NegOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult NegOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> NegOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NegOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NegOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value NegOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange NegOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange NegOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> NegOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NegOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void NegOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void NegOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NegOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult NegOp::verify() {
  if (failed(NegOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void NegOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::NotOp definitions
//===----------------------------------------------------------------------===//

NotOpAdaptor::NotOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

NotOpAdaptor::NotOpAdaptor(NotOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange NotOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> NotOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange NotOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NotOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value NotOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr NotOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult NotOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> NotOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NotOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NotOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value NotOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange NotOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange NotOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> NotOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NotOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void NotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void NotOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NotOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult NotOp::verify() {
  if (failed(NotOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void NotOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::OrOp definitions
//===----------------------------------------------------------------------===//

OrOpAdaptor::OrOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

OrOpAdaptor::OrOpAdaptor(OrOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange OrOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> OrOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange OrOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value OrOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value OrOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value OrOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr OrOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr OrOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult OrOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.or' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> OrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range OrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value OrOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value OrOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value OrOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange OrOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange OrOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange OrOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> OrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr OrOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > OrOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void OrOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute OrOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void OrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void OrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult OrOp::verify() {
  if (failed(OrOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void OrOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::OutfeedOp definitions
//===----------------------------------------------------------------------===//

OutfeedOpAdaptor::OutfeedOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

OutfeedOpAdaptor::OutfeedOpAdaptor(OutfeedOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange OutfeedOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> OutfeedOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange OutfeedOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange OutfeedOpAdaptor::operands() {
  return getODSOperands(0);
}

::mlir::DictionaryAttr OutfeedOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr OutfeedOpAdaptor::config() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("config").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult OutfeedOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_config = odsAttrs.get("config");
  if (!tblgen_config) return emitError(loc, "'lmhlo.outfeed' op ""requires attribute 'config'");
    if (!((tblgen_config.isa<::mlir::StringAttr>()))) return emitError(loc, "'lmhlo.outfeed' op ""attribute 'config' failed to satisfy constraint: string attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> OutfeedOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range OutfeedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range OutfeedOp::operands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange OutfeedOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> OutfeedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OutfeedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr OutfeedOp::configAttr() {
  return (*this)->getAttr("config").template cast<::mlir::StringAttr>();
}

::llvm::StringRef OutfeedOp::config() {
  auto attr = configAttr();
  return attr.getValue();
}

void OutfeedOp::configAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("config", attr);
}

void OutfeedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::mlir::StringAttr config) {
  odsState.addOperands(operands);
  odsState.addAttribute("config", config);
}

void OutfeedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::mlir::StringAttr config) {
  odsState.addOperands(operands);
  odsState.addAttribute("config", config);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OutfeedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::StringRef config) {
  odsState.addOperands(operands);
  odsState.addAttribute("config", odsBuilder.getStringAttr(config));
}

void OutfeedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::StringRef config) {
  odsState.addOperands(operands);
  odsState.addAttribute("config", odsBuilder.getStringAttr(config));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OutfeedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult OutfeedOp::verify() {
  if (failed(OutfeedOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void OutfeedOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::PadOp definitions
//===----------------------------------------------------------------------===//

PadOpAdaptor::PadOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

PadOpAdaptor::PadOpAdaptor(PadOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange PadOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> PadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange PadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PadOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value PadOpAdaptor::padding_value() {
  return *getODSOperands(1).begin();
}

::mlir::Value PadOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr PadOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr PadOpAdaptor::edge_padding_low() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("edge_padding_low").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr PadOpAdaptor::edge_padding_high() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("edge_padding_high").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr PadOpAdaptor::interior_padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("interior_padding").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult PadOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_edge_padding_low = odsAttrs.get("edge_padding_low");
  if (!tblgen_edge_padding_low) return emitError(loc, "'lmhlo.pad' op ""requires attribute 'edge_padding_low'");
    if (!(((tblgen_edge_padding_low.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_edge_padding_low.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.pad' op ""attribute 'edge_padding_low' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  {
  auto tblgen_edge_padding_high = odsAttrs.get("edge_padding_high");
  if (!tblgen_edge_padding_high) return emitError(loc, "'lmhlo.pad' op ""requires attribute 'edge_padding_high'");
    if (!(((tblgen_edge_padding_high.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_edge_padding_high.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.pad' op ""attribute 'edge_padding_high' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  {
  auto tblgen_interior_padding = odsAttrs.get("interior_padding");
  if (!tblgen_interior_padding) return emitError(loc, "'lmhlo.pad' op ""requires attribute 'interior_padding'");
    if (!(((tblgen_interior_padding.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_interior_padding.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.pad' op ""attribute 'interior_padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> PadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PadOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value PadOp::padding_value() {
  return *getODSOperands(1).begin();
}

::mlir::Value PadOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange PadOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PadOp::padding_valueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PadOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr PadOp::edge_padding_lowAttr() {
  return (*this)->getAttr("edge_padding_low").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr PadOp::edge_padding_low() {
  auto attr = edge_padding_lowAttr();
  return attr;
}

::mlir::DenseIntElementsAttr PadOp::edge_padding_highAttr() {
  return (*this)->getAttr("edge_padding_high").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr PadOp::edge_padding_high() {
  auto attr = edge_padding_highAttr();
  return attr;
}

::mlir::DenseIntElementsAttr PadOp::interior_paddingAttr() {
  return (*this)->getAttr("interior_padding").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr PadOp::interior_padding() {
  auto attr = interior_paddingAttr();
  return attr;
}

void PadOp::edge_padding_lowAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("edge_padding_low", attr);
}

void PadOp::edge_padding_highAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("edge_padding_high", attr);
}

void PadOp::interior_paddingAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("interior_padding", attr);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value padding_value, ::mlir::DenseIntElementsAttr edge_padding_low, ::mlir::DenseIntElementsAttr edge_padding_high, ::mlir::DenseIntElementsAttr interior_padding, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(padding_value);
  odsState.addOperands(output);
  odsState.addAttribute("edge_padding_low", edge_padding_low);
  odsState.addAttribute("edge_padding_high", edge_padding_high);
  odsState.addAttribute("interior_padding", interior_padding);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value padding_value, ::mlir::DenseIntElementsAttr edge_padding_low, ::mlir::DenseIntElementsAttr edge_padding_high, ::mlir::DenseIntElementsAttr interior_padding, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(padding_value);
  odsState.addOperands(output);
  odsState.addAttribute("edge_padding_low", edge_padding_low);
  odsState.addAttribute("edge_padding_high", edge_padding_high);
  odsState.addAttribute("interior_padding", interior_padding);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PadOp::verify() {
  if (failed(PadOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void PadOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::PartitionIdOp definitions
//===----------------------------------------------------------------------===//

PartitionIdOpAdaptor::PartitionIdOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

PartitionIdOpAdaptor::PartitionIdOpAdaptor(PartitionIdOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange PartitionIdOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> PartitionIdOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange PartitionIdOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr PartitionIdOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult PartitionIdOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> PartitionIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PartitionIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> PartitionIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PartitionIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void PartitionIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value odsArg_0) {
  odsState.addOperands(odsArg_0);
}

void PartitionIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PartitionIdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PartitionIdOp::verify() {
  if (failed(PartitionIdOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops8(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void PartitionIdOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::PopulationCountOp definitions
//===----------------------------------------------------------------------===//

PopulationCountOpAdaptor::PopulationCountOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

PopulationCountOpAdaptor::PopulationCountOpAdaptor(PopulationCountOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange PopulationCountOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> PopulationCountOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange PopulationCountOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PopulationCountOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value PopulationCountOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr PopulationCountOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult PopulationCountOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> PopulationCountOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PopulationCountOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PopulationCountOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value PopulationCountOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange PopulationCountOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PopulationCountOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PopulationCountOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PopulationCountOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void PopulationCountOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void PopulationCountOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PopulationCountOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PopulationCountOp::verify() {
  if (failed(PopulationCountOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void PopulationCountOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::PowOp definitions
//===----------------------------------------------------------------------===//

PowOpAdaptor::PowOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

PowOpAdaptor::PowOpAdaptor(PowOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange PowOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> PowOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange PowOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PowOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value PowOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value PowOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr PowOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr PowOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult PowOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.power' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> PowOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PowOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PowOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value PowOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value PowOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange PowOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PowOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PowOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PowOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PowOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr PowOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > PowOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void PowOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute PowOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void PowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void PowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PowOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PowOp::verify() {
  if (failed(PowOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void PowOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::RealOp definitions
//===----------------------------------------------------------------------===//

RealOpAdaptor::RealOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

RealOpAdaptor::RealOpAdaptor(RealOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange RealOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> RealOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange RealOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RealOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value RealOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr RealOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult RealOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> RealOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RealOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RealOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value RealOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange RealOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange RealOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> RealOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RealOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RealOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void RealOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RealOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RealOp::verify() {
  if (failed(RealOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops7(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void RealOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ReduceOp definitions
//===----------------------------------------------------------------------===//

ReduceOpAdaptor::ReduceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ReduceOpAdaptor::ReduceOpAdaptor(ReduceOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ReduceOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ReduceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 3;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange ReduceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange ReduceOpAdaptor::operands() {
  return getODSOperands(0);
}

::mlir::ValueRange ReduceOpAdaptor::init_values() {
  return getODSOperands(1);
}

::mlir::ValueRange ReduceOpAdaptor::out() {
  return getODSOperands(2);
}

::mlir::DictionaryAttr ReduceOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr ReduceOpAdaptor::dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("dimensions").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::RegionRange ReduceOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &ReduceOpAdaptor::body() {
  return *odsRegions[0];
}

::mlir::LogicalResult ReduceOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_dimensions = odsAttrs.get("dimensions");
  if (!tblgen_dimensions) return emitError(loc, "'lmhlo.reduce' op ""requires attribute 'dimensions'");
    if (!(((tblgen_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.reduce' op ""attribute 'dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ReduceOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 3;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ReduceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ReduceOp::operands() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range ReduceOp::init_values() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range ReduceOp::out() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange ReduceOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ReduceOp::init_valuesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ReduceOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReduceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ReduceOp::body() {
  return (*this)->getRegion(0);
}

::mlir::DenseIntElementsAttr ReduceOp::dimensionsAttr() {
  return (*this)->getAttr("dimensions").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr ReduceOp::dimensions() {
  auto attr = dimensionsAttr();
  return attr;
}

void ReduceOp::dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("dimensions", attr);
}

void ReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::mlir::ValueRange init_values, ::mlir::ValueRange out, ::mlir::DenseIntElementsAttr dimensions) {
  odsState.addOperands(operands);
  odsState.addOperands(init_values);
  odsState.addOperands(out);
  odsState.addAttribute("dimensions", dimensions);
  (void)odsState.addRegion();
}

void ReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::mlir::ValueRange init_values, ::mlir::ValueRange out, ::mlir::DenseIntElementsAttr dimensions) {
  odsState.addOperands(operands);
  odsState.addOperands(init_values);
  odsState.addOperands(out);
  odsState.addAttribute("dimensions", dimensions);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReduceOp::verify() {
  if (failed(ReduceOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>((*this)->getRegion(0))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('body') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::mlir::success();
}

void ReduceOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ReducePrecisionOp definitions
//===----------------------------------------------------------------------===//

ReducePrecisionOpAdaptor::ReducePrecisionOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ReducePrecisionOpAdaptor::ReducePrecisionOpAdaptor(ReducePrecisionOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ReducePrecisionOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ReducePrecisionOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ReducePrecisionOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReducePrecisionOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ReducePrecisionOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr ReducePrecisionOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ReducePrecisionOpAdaptor::exponent_bits() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("exponent_bits").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::IntegerAttr ReducePrecisionOpAdaptor::mantissa_bits() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("mantissa_bits").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult ReducePrecisionOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_exponent_bits = odsAttrs.get("exponent_bits");
  if (!tblgen_exponent_bits) return emitError(loc, "'lmhlo.reduce_precision' op ""requires attribute 'exponent_bits'");
    if (!(((tblgen_exponent_bits.isa<::mlir::IntegerAttr>())) && ((tblgen_exponent_bits.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'lmhlo.reduce_precision' op ""attribute 'exponent_bits' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_mantissa_bits = odsAttrs.get("mantissa_bits");
  if (!tblgen_mantissa_bits) return emitError(loc, "'lmhlo.reduce_precision' op ""requires attribute 'mantissa_bits'");
    if (!(((tblgen_mantissa_bits.isa<::mlir::IntegerAttr>())) && ((tblgen_mantissa_bits.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'lmhlo.reduce_precision' op ""attribute 'mantissa_bits' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ReducePrecisionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReducePrecisionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReducePrecisionOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ReducePrecisionOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ReducePrecisionOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ReducePrecisionOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReducePrecisionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReducePrecisionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::IntegerAttr ReducePrecisionOp::exponent_bitsAttr() {
  return (*this)->getAttr("exponent_bits").template cast<::mlir::IntegerAttr>();
}

uint32_t ReducePrecisionOp::exponent_bits() {
  auto attr = exponent_bitsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr ReducePrecisionOp::mantissa_bitsAttr() {
  return (*this)->getAttr("mantissa_bits").template cast<::mlir::IntegerAttr>();
}

uint32_t ReducePrecisionOp::mantissa_bits() {
  auto attr = mantissa_bitsAttr();
  return attr.getValue().getZExtValue();
}

void ReducePrecisionOp::exponent_bitsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("exponent_bits", attr);
}

void ReducePrecisionOp::mantissa_bitsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("mantissa_bits", attr);
}

void ReducePrecisionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value output, ::mlir::IntegerAttr exponent_bits, ::mlir::IntegerAttr mantissa_bits) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("exponent_bits", exponent_bits);
  odsState.addAttribute("mantissa_bits", mantissa_bits);
}

void ReducePrecisionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output, ::mlir::IntegerAttr exponent_bits, ::mlir::IntegerAttr mantissa_bits) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("exponent_bits", exponent_bits);
  odsState.addAttribute("mantissa_bits", mantissa_bits);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReducePrecisionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value output, uint32_t exponent_bits, uint32_t mantissa_bits) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("exponent_bits", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), exponent_bits));
  odsState.addAttribute("mantissa_bits", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), mantissa_bits));
}

void ReducePrecisionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output, uint32_t exponent_bits, uint32_t mantissa_bits) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("exponent_bits", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), exponent_bits));
  odsState.addAttribute("mantissa_bits", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), mantissa_bits));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReducePrecisionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReducePrecisionOp::verify() {
  if (failed(ReducePrecisionOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ReducePrecisionOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ReduceWindowOp definitions
//===----------------------------------------------------------------------===//

ReduceWindowOpAdaptor::ReduceWindowOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ReduceWindowOpAdaptor::ReduceWindowOpAdaptor(ReduceWindowOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ReduceWindowOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ReduceWindowOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ReduceWindowOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReduceWindowOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ReduceWindowOpAdaptor::init_value() {
  return *getODSOperands(1).begin();
}

::mlir::Value ReduceWindowOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr ReduceWindowOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr ReduceWindowOpAdaptor::window_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("window_dimensions").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr ReduceWindowOpAdaptor::window_strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("window_strides").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr ReduceWindowOpAdaptor::base_dilations() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("base_dilations").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr ReduceWindowOpAdaptor::window_dilations() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("window_dilations").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr ReduceWindowOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("padding").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::RegionRange ReduceWindowOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &ReduceWindowOpAdaptor::body() {
  return *odsRegions[0];
}

::mlir::LogicalResult ReduceWindowOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_window_dimensions = odsAttrs.get("window_dimensions");
  if (!tblgen_window_dimensions) return emitError(loc, "'lmhlo.reduce_window' op ""requires attribute 'window_dimensions'");
    if (!(((tblgen_window_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_window_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.reduce_window' op ""attribute 'window_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  {
  auto tblgen_window_strides = odsAttrs.get("window_strides");
  if (tblgen_window_strides) {
    if (!(((tblgen_window_strides.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_window_strides.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.reduce_window' op ""attribute 'window_strides' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  {
  auto tblgen_base_dilations = odsAttrs.get("base_dilations");
  if (tblgen_base_dilations) {
    if (!(((tblgen_base_dilations.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_base_dilations.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.reduce_window' op ""attribute 'base_dilations' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  {
  auto tblgen_window_dilations = odsAttrs.get("window_dilations");
  if (tblgen_window_dilations) {
    if (!(((tblgen_window_dilations.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_window_dilations.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.reduce_window' op ""attribute 'window_dilations' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (tblgen_padding) {
    if (!(((tblgen_padding.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_padding.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.reduce_window' op ""attribute 'padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ReduceWindowOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReduceWindowOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReduceWindowOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ReduceWindowOp::init_value() {
  return *getODSOperands(1).begin();
}

::mlir::Value ReduceWindowOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange ReduceWindowOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ReduceWindowOp::init_valueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ReduceWindowOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReduceWindowOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceWindowOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ReduceWindowOp::body() {
  return (*this)->getRegion(0);
}

::mlir::DenseIntElementsAttr ReduceWindowOp::window_dimensionsAttr() {
  return (*this)->getAttr("window_dimensions").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr ReduceWindowOp::window_dimensions() {
  auto attr = window_dimensionsAttr();
  return attr;
}

::mlir::DenseIntElementsAttr ReduceWindowOp::window_stridesAttr() {
  return (*this)->getAttr("window_strides").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ReduceWindowOp::window_strides() {
  auto attr = window_stridesAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr ReduceWindowOp::base_dilationsAttr() {
  return (*this)->getAttr("base_dilations").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ReduceWindowOp::base_dilations() {
  auto attr = base_dilationsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr ReduceWindowOp::window_dilationsAttr() {
  return (*this)->getAttr("window_dilations").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ReduceWindowOp::window_dilations() {
  auto attr = window_dilationsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr ReduceWindowOp::paddingAttr() {
  return (*this)->getAttr("padding").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ReduceWindowOp::padding() {
  auto attr = paddingAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void ReduceWindowOp::window_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("window_dimensions", attr);
}

void ReduceWindowOp::window_stridesAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("window_strides", attr);
}

void ReduceWindowOp::base_dilationsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("base_dilations", attr);
}

void ReduceWindowOp::window_dilationsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("window_dilations", attr);
}

void ReduceWindowOp::paddingAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("padding", attr);
}

::mlir::Attribute ReduceWindowOp::removeWindow_stridesAttr() {
  return (*this)->removeAttr("window_strides");
}

::mlir::Attribute ReduceWindowOp::removeBase_dilationsAttr() {
  return (*this)->removeAttr("base_dilations");
}

::mlir::Attribute ReduceWindowOp::removeWindow_dilationsAttr() {
  return (*this)->removeAttr("window_dilations");
}

::mlir::Attribute ReduceWindowOp::removePaddingAttr() {
  return (*this)->removeAttr("padding");
}

void ReduceWindowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value init_value, ::mlir::Value out, ::mlir::DenseIntElementsAttr window_dimensions, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr base_dilations, /*optional*/::mlir::DenseIntElementsAttr window_dilations, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(operand);
  odsState.addOperands(init_value);
  odsState.addOperands(out);
  odsState.addAttribute("window_dimensions", window_dimensions);
  if (window_strides) {
  odsState.addAttribute("window_strides", window_strides);
  }
  if (base_dilations) {
  odsState.addAttribute("base_dilations", base_dilations);
  }
  if (window_dilations) {
  odsState.addAttribute("window_dilations", window_dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  (void)odsState.addRegion();
}

void ReduceWindowOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value init_value, ::mlir::Value out, ::mlir::DenseIntElementsAttr window_dimensions, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr base_dilations, /*optional*/::mlir::DenseIntElementsAttr window_dilations, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(operand);
  odsState.addOperands(init_value);
  odsState.addOperands(out);
  odsState.addAttribute("window_dimensions", window_dimensions);
  if (window_strides) {
  odsState.addAttribute("window_strides", window_strides);
  }
  if (base_dilations) {
  odsState.addAttribute("base_dilations", base_dilations);
  }
  if (window_dilations) {
  odsState.addAttribute("window_dilations", window_dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceWindowOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReduceWindowOp::verify() {
  if (failed(ReduceWindowOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>((*this)->getRegion(0))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('body') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::mlir::success();
}

void ReduceWindowOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::RemOp definitions
//===----------------------------------------------------------------------===//

RemOpAdaptor::RemOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

RemOpAdaptor::RemOpAdaptor(RemOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange RemOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> RemOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange RemOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RemOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value RemOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value RemOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr RemOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr RemOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult RemOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.remainder' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> RemOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RemOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RemOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value RemOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value RemOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange RemOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange RemOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange RemOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> RemOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RemOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr RemOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > RemOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void RemOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute RemOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void RemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void RemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RemOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RemOp::verify() {
  if (failed(RemOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops9(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops9(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops9(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void RemOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ReplicaIdOp definitions
//===----------------------------------------------------------------------===//

ReplicaIdOpAdaptor::ReplicaIdOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ReplicaIdOpAdaptor::ReplicaIdOpAdaptor(ReplicaIdOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ReplicaIdOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ReplicaIdOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ReplicaIdOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr ReplicaIdOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ReplicaIdOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ReplicaIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReplicaIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ReplicaIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReplicaIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ReplicaIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value odsArg_0) {
  odsState.addOperands(odsArg_0);
}

void ReplicaIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReplicaIdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReplicaIdOp::verify() {
  if (failed(ReplicaIdOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops8(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ReplicaIdOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ReshapeOp definitions
//===----------------------------------------------------------------------===//

ReshapeOpAdaptor::ReshapeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ReshapeOpAdaptor::ReshapeOpAdaptor(ReshapeOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ReshapeOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ReshapeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ReshapeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReshapeOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ReshapeOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr ReshapeOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult ReshapeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ReshapeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReshapeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReshapeOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ReshapeOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ReshapeOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ReshapeOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReshapeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReshapeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
}

void ReshapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReshapeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReshapeOp::verify() {
  if (failed(ReshapeOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ReshapeOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ReverseOp definitions
//===----------------------------------------------------------------------===//

ReverseOpAdaptor::ReverseOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ReverseOpAdaptor::ReverseOpAdaptor(ReverseOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ReverseOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ReverseOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ReverseOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReverseOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ReverseOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr ReverseOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr ReverseOpAdaptor::dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("dimensions").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult ReverseOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_dimensions = odsAttrs.get("dimensions");
  if (!tblgen_dimensions) return emitError(loc, "'lmhlo.reverse' op ""requires attribute 'dimensions'");
    if (!(((tblgen_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.reverse' op ""attribute 'dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ReverseOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReverseOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReverseOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ReverseOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ReverseOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ReverseOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReverseOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReverseOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr ReverseOp::dimensionsAttr() {
  return (*this)->getAttr("dimensions").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr ReverseOp::dimensions() {
  auto attr = dimensionsAttr();
  return attr;
}

void ReverseOp::dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("dimensions", attr);
}

void ReverseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::DenseIntElementsAttr dimensions, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("dimensions", dimensions);
}

void ReverseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::DenseIntElementsAttr dimensions, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("dimensions", dimensions);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReverseOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReverseOp::verify() {
  if (failed(ReverseOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ReverseOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::RngGetAndUpdateStateOp definitions
//===----------------------------------------------------------------------===//

RngGetAndUpdateStateOpAdaptor::RngGetAndUpdateStateOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

RngGetAndUpdateStateOpAdaptor::RngGetAndUpdateStateOpAdaptor(RngGetAndUpdateStateOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange RngGetAndUpdateStateOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> RngGetAndUpdateStateOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange RngGetAndUpdateStateOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RngGetAndUpdateStateOpAdaptor::state() {
  return *getODSOperands(0).begin();
}

::mlir::DictionaryAttr RngGetAndUpdateStateOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr RngGetAndUpdateStateOpAdaptor::delta() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("delta").cast<::mlir::IntegerAttr>();
  return attr;
}

::mlir::LogicalResult RngGetAndUpdateStateOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_delta = odsAttrs.get("delta");
  if (!tblgen_delta) return emitError(loc, "'lmhlo.rng_get_and_update_state' op ""requires attribute 'delta'");
    if (!(((tblgen_delta.isa<::mlir::IntegerAttr>())) && ((tblgen_delta.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.rng_get_and_update_state' op ""attribute 'delta' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> RngGetAndUpdateStateOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RngGetAndUpdateStateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RngGetAndUpdateStateOp::state() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange RngGetAndUpdateStateOp::stateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> RngGetAndUpdateStateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RngGetAndUpdateStateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::IntegerAttr RngGetAndUpdateStateOp::deltaAttr() {
  return (*this)->getAttr("delta").template cast<::mlir::IntegerAttr>();
}

uint64_t RngGetAndUpdateStateOp::delta() {
  auto attr = deltaAttr();
  return attr.getValue().getZExtValue();
}

void RngGetAndUpdateStateOp::deltaAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("delta", attr);
}

void RngGetAndUpdateStateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value state, ::mlir::IntegerAttr delta) {
  odsState.addOperands(state);
  odsState.addAttribute("delta", delta);
}

void RngGetAndUpdateStateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value state, ::mlir::IntegerAttr delta) {
  odsState.addOperands(state);
  odsState.addAttribute("delta", delta);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RngGetAndUpdateStateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value state, uint64_t delta) {
  odsState.addOperands(state);
  odsState.addAttribute("delta", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), delta));
}

void RngGetAndUpdateStateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value state, uint64_t delta) {
  odsState.addOperands(state);
  odsState.addAttribute("delta", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), delta));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RngGetAndUpdateStateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RngGetAndUpdateStateOp::verify() {
  if (failed(RngGetAndUpdateStateOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops10(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void RngGetAndUpdateStateOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::RoundOp definitions
//===----------------------------------------------------------------------===//

RoundOpAdaptor::RoundOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

RoundOpAdaptor::RoundOpAdaptor(RoundOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange RoundOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> RoundOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange RoundOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RoundOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value RoundOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr RoundOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult RoundOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> RoundOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RoundOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RoundOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value RoundOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange RoundOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange RoundOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> RoundOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RoundOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RoundOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void RoundOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RoundOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RoundOp::verify() {
  if (failed(RoundOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops4(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void RoundOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::RsqrtOp definitions
//===----------------------------------------------------------------------===//

RsqrtOpAdaptor::RsqrtOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

RsqrtOpAdaptor::RsqrtOpAdaptor(RsqrtOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange RsqrtOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> RsqrtOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange RsqrtOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RsqrtOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value RsqrtOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr RsqrtOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult RsqrtOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> RsqrtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RsqrtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value RsqrtOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value RsqrtOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange RsqrtOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange RsqrtOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> RsqrtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RsqrtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void RsqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RsqrtOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RsqrtOp::verify() {
  if (failed(RsqrtOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void RsqrtOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ScatterOp definitions
//===----------------------------------------------------------------------===//

ScatterOpAdaptor::ScatterOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ScatterOpAdaptor::ScatterOpAdaptor(ScatterOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ScatterOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ScatterOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ScatterOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScatterOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ScatterOpAdaptor::scatter_indices() {
  return *getODSOperands(1).begin();
}

::mlir::Value ScatterOpAdaptor::updates() {
  return *getODSOperands(2).begin();
}

::mlir::Value ScatterOpAdaptor::output() {
  return *getODSOperands(3).begin();
}

::mlir::DictionaryAttr ScatterOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::mhlo::ScatterDimensionNumbers ScatterOpAdaptor::scatter_dimension_numbers() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::mhlo::ScatterDimensionNumbers attr = odsAttrs.get("scatter_dimension_numbers").cast<::mlir::mhlo::ScatterDimensionNumbers>();
  return attr;
}

::mlir::BoolAttr ScatterOpAdaptor::indices_are_sorted() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("indices_are_sorted").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::BoolAttr ScatterOpAdaptor::unique_indices() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("unique_indices").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::RegionRange ScatterOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &ScatterOpAdaptor::update_computation() {
  return *odsRegions[0];
}

::mlir::LogicalResult ScatterOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_scatter_dimension_numbers = odsAttrs.get("scatter_dimension_numbers");
  if (!tblgen_scatter_dimension_numbers) return emitError(loc, "'lmhlo.scatter' op ""requires attribute 'scatter_dimension_numbers'");
    if (!((tblgen_scatter_dimension_numbers.isa<::mlir::mhlo::ScatterDimensionNumbers>()))) return emitError(loc, "'lmhlo.scatter' op ""attribute 'scatter_dimension_numbers' failed to satisfy constraint: Structure of dimension information for scatter");
  }
  {
  auto tblgen_indices_are_sorted = odsAttrs.get("indices_are_sorted");
  if (tblgen_indices_are_sorted) {
    if (!((tblgen_indices_are_sorted.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.scatter' op ""attribute 'indices_are_sorted' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_unique_indices = odsAttrs.get("unique_indices");
  if (tblgen_unique_indices) {
    if (!((tblgen_unique_indices.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.scatter' op ""attribute 'unique_indices' failed to satisfy constraint: bool attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ScatterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScatterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ScatterOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value ScatterOp::scatter_indices() {
  return *getODSOperands(1).begin();
}

::mlir::Value ScatterOp::updates() {
  return *getODSOperands(2).begin();
}

::mlir::Value ScatterOp::output() {
  return *getODSOperands(3).begin();
}

::mlir::MutableOperandRange ScatterOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ScatterOp::scatter_indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ScatterOp::updatesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ScatterOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ScatterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScatterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ScatterOp::update_computation() {
  return (*this)->getRegion(0);
}

::mlir::mhlo::ScatterDimensionNumbers ScatterOp::scatter_dimension_numbersAttr() {
  return (*this)->getAttr("scatter_dimension_numbers").template cast<::mlir::mhlo::ScatterDimensionNumbers>();
}

::mlir::mhlo::ScatterDimensionNumbers ScatterOp::scatter_dimension_numbers() {
  auto attr = scatter_dimension_numbersAttr();
  return attr;
}

::mlir::BoolAttr ScatterOp::indices_are_sortedAttr() {
  return (*this)->getAttr("indices_are_sorted").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool ScatterOp::indices_are_sorted() {
  auto attr = indices_are_sortedAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::BoolAttr ScatterOp::unique_indicesAttr() {
  return (*this)->getAttr("unique_indices").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool ScatterOp::unique_indices() {
  auto attr = unique_indicesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void ScatterOp::scatter_dimension_numbersAttr(::mlir::mhlo::ScatterDimensionNumbers attr) {
  (*this)->setAttr("scatter_dimension_numbers", attr);
}

void ScatterOp::indices_are_sortedAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("indices_are_sorted", attr);
}

void ScatterOp::unique_indicesAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("unique_indices", attr);
}

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value scatter_indices, ::mlir::Value updates, ::mlir::Value output, ::mlir::mhlo::ScatterDimensionNumbers scatter_dimension_numbers, ::mlir::BoolAttr indices_are_sorted, ::mlir::BoolAttr unique_indices) {
  odsState.addOperands(operand);
  odsState.addOperands(scatter_indices);
  odsState.addOperands(updates);
  odsState.addOperands(output);
  odsState.addAttribute("scatter_dimension_numbers", scatter_dimension_numbers);
  odsState.addAttribute("indices_are_sorted", indices_are_sorted);
  odsState.addAttribute("unique_indices", unique_indices);
  (void)odsState.addRegion();
}

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value scatter_indices, ::mlir::Value updates, ::mlir::Value output, ::mlir::mhlo::ScatterDimensionNumbers scatter_dimension_numbers, ::mlir::BoolAttr indices_are_sorted, ::mlir::BoolAttr unique_indices) {
  odsState.addOperands(operand);
  odsState.addOperands(scatter_indices);
  odsState.addOperands(updates);
  odsState.addOperands(output);
  odsState.addAttribute("scatter_dimension_numbers", scatter_dimension_numbers);
  odsState.addAttribute("indices_are_sorted", indices_are_sorted);
  odsState.addAttribute("unique_indices", unique_indices);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value scatter_indices, ::mlir::Value updates, ::mlir::Value output, ::mlir::mhlo::ScatterDimensionNumbers scatter_dimension_numbers, bool indices_are_sorted, bool unique_indices) {
  odsState.addOperands(operand);
  odsState.addOperands(scatter_indices);
  odsState.addOperands(updates);
  odsState.addOperands(output);
  odsState.addAttribute("scatter_dimension_numbers", scatter_dimension_numbers);
  odsState.addAttribute("indices_are_sorted", odsBuilder.getBoolAttr(indices_are_sorted));
  odsState.addAttribute("unique_indices", odsBuilder.getBoolAttr(unique_indices));
  (void)odsState.addRegion();
}

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value scatter_indices, ::mlir::Value updates, ::mlir::Value output, ::mlir::mhlo::ScatterDimensionNumbers scatter_dimension_numbers, bool indices_are_sorted, bool unique_indices) {
  odsState.addOperands(operand);
  odsState.addOperands(scatter_indices);
  odsState.addOperands(updates);
  odsState.addOperands(output);
  odsState.addAttribute("scatter_dimension_numbers", scatter_dimension_numbers);
  odsState.addAttribute("indices_are_sorted", odsBuilder.getBoolAttr(indices_are_sorted));
  odsState.addAttribute("unique_indices", odsBuilder.getBoolAttr(unique_indices));
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScatterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScatterOp::verify() {
  if (failed(ScatterOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (::mlir::Value v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>((*this)->getRegion(0))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('update_computation') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::mlir::success();
}

void ScatterOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(3))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::SelectAndScatterOp definitions
//===----------------------------------------------------------------------===//

SelectAndScatterOpAdaptor::SelectAndScatterOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

SelectAndScatterOpAdaptor::SelectAndScatterOpAdaptor(SelectAndScatterOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange SelectAndScatterOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SelectAndScatterOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SelectAndScatterOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SelectAndScatterOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value SelectAndScatterOpAdaptor::source() {
  return *getODSOperands(1).begin();
}

::mlir::Value SelectAndScatterOpAdaptor::init_value() {
  return *getODSOperands(2).begin();
}

::mlir::Value SelectAndScatterOpAdaptor::out() {
  return *getODSOperands(3).begin();
}

::mlir::DictionaryAttr SelectAndScatterOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr SelectAndScatterOpAdaptor::window_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("window_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr SelectAndScatterOpAdaptor::window_strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("window_strides").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr SelectAndScatterOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("padding").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::RegionRange SelectAndScatterOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &SelectAndScatterOpAdaptor::select() {
  return *odsRegions[0];
}

::mlir::Region &SelectAndScatterOpAdaptor::scatter() {
  return *odsRegions[1];
}

::mlir::LogicalResult SelectAndScatterOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_window_dimensions = odsAttrs.get("window_dimensions");
  if (tblgen_window_dimensions) {
    if (!(((tblgen_window_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_window_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.select_and_scatter' op ""attribute 'window_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  {
  auto tblgen_window_strides = odsAttrs.get("window_strides");
  if (tblgen_window_strides) {
    if (!(((tblgen_window_strides.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_window_strides.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.select_and_scatter' op ""attribute 'window_strides' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (tblgen_padding) {
    if (!(((tblgen_padding.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_padding.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.select_and_scatter' op ""attribute 'padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> SelectAndScatterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SelectAndScatterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SelectAndScatterOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value SelectAndScatterOp::source() {
  return *getODSOperands(1).begin();
}

::mlir::Value SelectAndScatterOp::init_value() {
  return *getODSOperands(2).begin();
}

::mlir::Value SelectAndScatterOp::out() {
  return *getODSOperands(3).begin();
}

::mlir::MutableOperandRange SelectAndScatterOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SelectAndScatterOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SelectAndScatterOp::init_valueMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SelectAndScatterOp::outMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SelectAndScatterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SelectAndScatterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &SelectAndScatterOp::select() {
  return (*this)->getRegion(0);
}

::mlir::Region &SelectAndScatterOp::scatter() {
  return (*this)->getRegion(1);
}

::mlir::DenseIntElementsAttr SelectAndScatterOp::window_dimensionsAttr() {
  return (*this)->getAttr("window_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > SelectAndScatterOp::window_dimensions() {
  auto attr = window_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr SelectAndScatterOp::window_stridesAttr() {
  return (*this)->getAttr("window_strides").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > SelectAndScatterOp::window_strides() {
  auto attr = window_stridesAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

::mlir::DenseIntElementsAttr SelectAndScatterOp::paddingAttr() {
  return (*this)->getAttr("padding").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > SelectAndScatterOp::padding() {
  auto attr = paddingAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void SelectAndScatterOp::window_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("window_dimensions", attr);
}

void SelectAndScatterOp::window_stridesAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("window_strides", attr);
}

void SelectAndScatterOp::paddingAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("padding", attr);
}

::mlir::Attribute SelectAndScatterOp::removeWindow_dimensionsAttr() {
  return (*this)->removeAttr("window_dimensions");
}

::mlir::Attribute SelectAndScatterOp::removeWindow_stridesAttr() {
  return (*this)->removeAttr("window_strides");
}

::mlir::Attribute SelectAndScatterOp::removePaddingAttr() {
  return (*this)->removeAttr("padding");
}

void SelectAndScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value source, ::mlir::Value init_value, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr window_dimensions, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(operand);
  odsState.addOperands(source);
  odsState.addOperands(init_value);
  odsState.addOperands(out);
  if (window_dimensions) {
  odsState.addAttribute("window_dimensions", window_dimensions);
  }
  if (window_strides) {
  odsState.addAttribute("window_strides", window_strides);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void SelectAndScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value source, ::mlir::Value init_value, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr window_dimensions, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding) {
  odsState.addOperands(operand);
  odsState.addOperands(source);
  odsState.addOperands(init_value);
  odsState.addOperands(out);
  if (window_dimensions) {
  odsState.addAttribute("window_dimensions", window_dimensions);
  }
  if (window_strides) {
  odsState.addAttribute("window_strides", window_strides);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SelectAndScatterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SelectAndScatterOp::verify() {
  if (failed(SelectAndScatterOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (::mlir::Value v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>((*this)->getRegion(0))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('select') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>((*this)->getRegion(1))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('scatter') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::mlir::success();
}

void SelectAndScatterOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(3))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::SelectOp definitions
//===----------------------------------------------------------------------===//

SelectOpAdaptor::SelectOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

SelectOpAdaptor::SelectOpAdaptor(SelectOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange SelectOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SelectOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SelectOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SelectOpAdaptor::pred() {
  return *getODSOperands(0).begin();
}

::mlir::Value SelectOpAdaptor::on_true() {
  return *getODSOperands(1).begin();
}

::mlir::Value SelectOpAdaptor::on_false() {
  return *getODSOperands(2).begin();
}

::mlir::Value SelectOpAdaptor::output() {
  return *getODSOperands(3).begin();
}

::mlir::DictionaryAttr SelectOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult SelectOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> SelectOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SelectOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SelectOp::pred() {
  return *getODSOperands(0).begin();
}

::mlir::Value SelectOp::on_true() {
  return *getODSOperands(1).begin();
}

::mlir::Value SelectOp::on_false() {
  return *getODSOperands(2).begin();
}

::mlir::Value SelectOp::output() {
  return *getODSOperands(3).begin();
}

::mlir::MutableOperandRange SelectOp::predMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SelectOp::on_trueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SelectOp::on_falseMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SelectOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SelectOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SelectOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false, ::mlir::Value output) {
  odsState.addOperands(pred);
  odsState.addOperands(on_true);
  odsState.addOperands(on_false);
  odsState.addOperands(output);
}

void SelectOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false, ::mlir::Value output) {
  odsState.addOperands(pred);
  odsState.addOperands(on_true);
  odsState.addOperands(on_false);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SelectOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SelectOp::verify() {
  if (failed(SelectOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops6(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (::mlir::Value v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void SelectOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(3))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ShiftLeftOp definitions
//===----------------------------------------------------------------------===//

ShiftLeftOpAdaptor::ShiftLeftOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ShiftLeftOpAdaptor::ShiftLeftOpAdaptor(ShiftLeftOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ShiftLeftOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ShiftLeftOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ShiftLeftOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftLeftOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ShiftLeftOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ShiftLeftOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr ShiftLeftOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr ShiftLeftOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult ShiftLeftOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.shift_left' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ShiftLeftOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShiftLeftOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftLeftOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ShiftLeftOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ShiftLeftOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange ShiftLeftOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShiftLeftOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShiftLeftOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShiftLeftOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShiftLeftOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr ShiftLeftOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ShiftLeftOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void ShiftLeftOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute ShiftLeftOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void ShiftLeftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void ShiftLeftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShiftLeftOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ShiftLeftOp::verify() {
  if (failed(ShiftLeftOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ShiftLeftOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ShiftRightArithmeticOp definitions
//===----------------------------------------------------------------------===//

ShiftRightArithmeticOpAdaptor::ShiftRightArithmeticOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ShiftRightArithmeticOpAdaptor::ShiftRightArithmeticOpAdaptor(ShiftRightArithmeticOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ShiftRightArithmeticOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ShiftRightArithmeticOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ShiftRightArithmeticOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftRightArithmeticOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ShiftRightArithmeticOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ShiftRightArithmeticOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr ShiftRightArithmeticOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr ShiftRightArithmeticOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult ShiftRightArithmeticOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.shift_right_arithmetic' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ShiftRightArithmeticOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShiftRightArithmeticOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftRightArithmeticOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ShiftRightArithmeticOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ShiftRightArithmeticOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange ShiftRightArithmeticOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShiftRightArithmeticOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShiftRightArithmeticOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShiftRightArithmeticOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShiftRightArithmeticOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr ShiftRightArithmeticOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ShiftRightArithmeticOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void ShiftRightArithmeticOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute ShiftRightArithmeticOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void ShiftRightArithmeticOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void ShiftRightArithmeticOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShiftRightArithmeticOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ShiftRightArithmeticOp::verify() {
  if (failed(ShiftRightArithmeticOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ShiftRightArithmeticOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::ShiftRightLogicalOp definitions
//===----------------------------------------------------------------------===//

ShiftRightLogicalOpAdaptor::ShiftRightLogicalOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

ShiftRightLogicalOpAdaptor::ShiftRightLogicalOpAdaptor(ShiftRightLogicalOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange ShiftRightLogicalOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> ShiftRightLogicalOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange ShiftRightLogicalOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftRightLogicalOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ShiftRightLogicalOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ShiftRightLogicalOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr ShiftRightLogicalOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr ShiftRightLogicalOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult ShiftRightLogicalOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.shift_right_logical' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> ShiftRightLogicalOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShiftRightLogicalOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShiftRightLogicalOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value ShiftRightLogicalOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value ShiftRightLogicalOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange ShiftRightLogicalOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShiftRightLogicalOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShiftRightLogicalOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShiftRightLogicalOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShiftRightLogicalOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr ShiftRightLogicalOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > ShiftRightLogicalOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void ShiftRightLogicalOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute ShiftRightLogicalOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void ShiftRightLogicalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void ShiftRightLogicalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShiftRightLogicalOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ShiftRightLogicalOp::verify() {
  if (failed(ShiftRightLogicalOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops5(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void ShiftRightLogicalOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::SignOp definitions
//===----------------------------------------------------------------------===//

SignOpAdaptor::SignOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

SignOpAdaptor::SignOpAdaptor(SignOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange SignOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SignOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SignOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SignOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value SignOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr SignOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult SignOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> SignOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SignOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SignOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value SignOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SignOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SignOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SignOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SignOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void SignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SignOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SignOp::verify() {
  if (failed(SignOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void SignOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::SinOp definitions
//===----------------------------------------------------------------------===//

SinOpAdaptor::SinOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

SinOpAdaptor::SinOpAdaptor(SinOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange SinOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SinOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SinOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SinOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value SinOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr SinOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult SinOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> SinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SinOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value SinOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SinOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SinOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void SinOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SinOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SinOp::verify() {
  if (failed(SinOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void SinOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::SliceOp definitions
//===----------------------------------------------------------------------===//

SliceOpAdaptor::SliceOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

SliceOpAdaptor::SliceOpAdaptor(SliceOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange SliceOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SliceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SliceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SliceOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value SliceOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr SliceOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr SliceOpAdaptor::start_indices() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("start_indices").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr SliceOpAdaptor::limit_indices() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("limit_indices").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr SliceOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("strides").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult SliceOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_start_indices = odsAttrs.get("start_indices");
  if (!tblgen_start_indices) return emitError(loc, "'lmhlo.slice' op ""requires attribute 'start_indices'");
    if (!(((tblgen_start_indices.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_start_indices.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.slice' op ""attribute 'start_indices' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  {
  auto tblgen_limit_indices = odsAttrs.get("limit_indices");
  if (!tblgen_limit_indices) return emitError(loc, "'lmhlo.slice' op ""requires attribute 'limit_indices'");
    if (!(((tblgen_limit_indices.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_limit_indices.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.slice' op ""attribute 'limit_indices' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (!tblgen_strides) return emitError(loc, "'lmhlo.slice' op ""requires attribute 'strides'");
    if (!(((tblgen_strides.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_strides.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.slice' op ""attribute 'strides' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> SliceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SliceOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value SliceOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SliceOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SliceOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr SliceOp::start_indicesAttr() {
  return (*this)->getAttr("start_indices").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr SliceOp::start_indices() {
  auto attr = start_indicesAttr();
  return attr;
}

::mlir::DenseIntElementsAttr SliceOp::limit_indicesAttr() {
  return (*this)->getAttr("limit_indices").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr SliceOp::limit_indices() {
  auto attr = limit_indicesAttr();
  return attr;
}

::mlir::DenseIntElementsAttr SliceOp::stridesAttr() {
  return (*this)->getAttr("strides").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr SliceOp::strides() {
  auto attr = stridesAttr();
  return attr;
}

void SliceOp::start_indicesAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("start_indices", attr);
}

void SliceOp::limit_indicesAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("limit_indices", attr);
}

void SliceOp::stridesAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("strides", attr);
}

void SliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr start_indices, ::mlir::DenseIntElementsAttr limit_indices, ::mlir::DenseIntElementsAttr strides) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("start_indices", start_indices);
  odsState.addAttribute("limit_indices", limit_indices);
  odsState.addAttribute("strides", strides);
}

void SliceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr start_indices, ::mlir::DenseIntElementsAttr limit_indices, ::mlir::DenseIntElementsAttr strides) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("start_indices", start_indices);
  odsState.addAttribute("limit_indices", limit_indices);
  odsState.addAttribute("strides", strides);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SliceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SliceOp::verify() {
  if (failed(SliceOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (!((::llvm::is_splat(::llvm::makeArrayRef({(*this)->getAttr("start_indices").getType(), (*this)->getAttr("limit_indices").getType(), (*this)->getAttr("strides").getType()})))))
    return emitOpError("failed to verify that all of {start_indices, limit_indices, strides} have same type");
  return ::mlir::success();
}

void SliceOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::SortOp definitions
//===----------------------------------------------------------------------===//

SortOpAdaptor::SortOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

SortOpAdaptor::SortOpAdaptor(SortOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange SortOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SortOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ValueRange SortOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange SortOpAdaptor::operands() {
  return getODSOperands(0);
}

::mlir::ValueRange SortOpAdaptor::output() {
  return getODSOperands(1);
}

::mlir::DictionaryAttr SortOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr SortOpAdaptor::dimension() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("dimension").dyn_cast_or_null<::mlir::IntegerAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), -1);
  return attr;
}

::mlir::BoolAttr SortOpAdaptor::is_stable() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("is_stable").dyn_cast_or_null<::mlir::BoolAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

::mlir::RegionRange SortOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &SortOpAdaptor::comparator() {
  return *odsRegions[0];
}

::mlir::LogicalResult SortOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_dimension = odsAttrs.get("dimension");
  if (tblgen_dimension) {
    if (!(((tblgen_dimension.isa<::mlir::IntegerAttr>())) && ((tblgen_dimension.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.sort' op ""attribute 'dimension' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  }
  {
  auto tblgen_is_stable = odsAttrs.get("is_stable");
  if (tblgen_is_stable) {
    if (!((tblgen_is_stable.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.sort' op ""attribute 'is_stable' failed to satisfy constraint: bool attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> SortOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 2;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range SortOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SortOp::operands() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range SortOp::output() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange SortOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SortOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SortOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SortOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &SortOp::comparator() {
  return (*this)->getRegion(0);
}

::mlir::IntegerAttr SortOp::dimensionAttr() {
  return (*this)->getAttr("dimension").template dyn_cast_or_null<::mlir::IntegerAttr>();
}

uint64_t SortOp::dimension() {
  auto attr = dimensionAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), -1).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::BoolAttr SortOp::is_stableAttr() {
  return (*this)->getAttr("is_stable").template dyn_cast_or_null<::mlir::BoolAttr>();
}

bool SortOp::is_stable() {
  auto attr = is_stableAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void SortOp::dimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("dimension", attr);
}

void SortOp::is_stableAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("is_stable", attr);
}

void SortOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::mlir::ValueRange output, ::mlir::IntegerAttr dimension, ::mlir::BoolAttr is_stable) {
  odsState.addOperands(operands);
  odsState.addOperands(output);
  odsState.addAttribute("dimension", dimension);
  odsState.addAttribute("is_stable", is_stable);
  (void)odsState.addRegion();
}

void SortOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::mlir::ValueRange output, ::mlir::IntegerAttr dimension, ::mlir::BoolAttr is_stable) {
  odsState.addOperands(operands);
  odsState.addOperands(output);
  odsState.addAttribute("dimension", dimension);
  odsState.addAttribute("is_stable", is_stable);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SortOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::mlir::ValueRange output, uint64_t dimension, bool is_stable) {
  odsState.addOperands(operands);
  odsState.addOperands(output);
  odsState.addAttribute("dimension", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension));
  odsState.addAttribute("is_stable", odsBuilder.getBoolAttr(is_stable));
  (void)odsState.addRegion();
}

void SortOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::mlir::ValueRange output, uint64_t dimension, bool is_stable) {
  odsState.addOperands(operands);
  odsState.addOperands(output);
  odsState.addAttribute("dimension", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension));
  odsState.addAttribute("is_stable", odsBuilder.getBoolAttr(is_stable));
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SortOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SortOp::verify() {
  if (failed(SortOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops1(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>((*this)->getRegion(0))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('comparator') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::mlir::success();
}

void SortOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::SqrtOp definitions
//===----------------------------------------------------------------------===//

SqrtOpAdaptor::SqrtOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

SqrtOpAdaptor::SqrtOpAdaptor(SqrtOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange SqrtOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SqrtOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SqrtOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SqrtOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value SqrtOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr SqrtOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult SqrtOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> SqrtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SqrtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SqrtOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value SqrtOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SqrtOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SqrtOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SqrtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SqrtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void SqrtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SqrtOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SqrtOp::verify() {
  if (failed(SqrtOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void SqrtOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::SubOp definitions
//===----------------------------------------------------------------------===//

SubOpAdaptor::SubOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

SubOpAdaptor::SubOpAdaptor(SubOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange SubOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SubOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SubOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value SubOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value SubOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr SubOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr SubOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult SubOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.subtract' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> SubOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SubOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SubOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value SubOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value SubOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange SubOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SubOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SubOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SubOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr SubOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > SubOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void SubOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute SubOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void SubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void SubOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SubOp::verify() {
  if (failed(SubOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void SubOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::TanhOp definitions
//===----------------------------------------------------------------------===//

TanhOpAdaptor::TanhOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

TanhOpAdaptor::TanhOpAdaptor(TanhOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange TanhOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> TanhOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange TanhOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TanhOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value TanhOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr TanhOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult TanhOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> TanhOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TanhOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TanhOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::Value TanhOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange TanhOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TanhOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TanhOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TanhOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
}

void TanhOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TanhOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TanhOp::verify() {
  if (failed(TanhOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void TanhOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::TransposeOp definitions
//===----------------------------------------------------------------------===//

TransposeOpAdaptor::TransposeOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

TransposeOpAdaptor::TransposeOpAdaptor(TransposeOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange TransposeOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> TransposeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange TransposeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransposeOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value TransposeOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

::mlir::DictionaryAttr TransposeOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr TransposeOpAdaptor::permutation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("permutation").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult TransposeOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_permutation = odsAttrs.get("permutation");
  if (!tblgen_permutation) return emitError(loc, "'lmhlo.transpose' op ""requires attribute 'permutation'");
    if (!(((tblgen_permutation.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_permutation.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.transpose' op ""attribute 'permutation' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> TransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransposeOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::Value TransposeOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange TransposeOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TransposeOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr TransposeOp::permutationAttr() {
  return (*this)->getAttr("permutation").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr TransposeOp::permutation() {
  auto attr = permutationAttr();
  return attr;
}

void TransposeOp::permutationAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("permutation", attr);
}

void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::DenseIntElementsAttr permutation, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("permutation", permutation);
}

void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::DenseIntElementsAttr permutation, ::mlir::Value output) {
  odsState.addOperands(operand);
  odsState.addOperands(output);
  odsState.addAttribute("permutation", permutation);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TransposeOp::verify() {
  if (failed(TransposeOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops0(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void TransposeOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::TriangularSolveOp definitions
//===----------------------------------------------------------------------===//

TriangularSolveOpAdaptor::TriangularSolveOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

TriangularSolveOpAdaptor::TriangularSolveOpAdaptor(TriangularSolveOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange TriangularSolveOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> TriangularSolveOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange TriangularSolveOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TriangularSolveOpAdaptor::a() {
  return *getODSOperands(0).begin();
}

::mlir::Value TriangularSolveOpAdaptor::b() {
  return *getODSOperands(1).begin();
}

::mlir::Value TriangularSolveOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr TriangularSolveOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr TriangularSolveOpAdaptor::left_side() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("left_side").cast<::mlir::BoolAttr>();
  return attr;
}

::mlir::BoolAttr TriangularSolveOpAdaptor::lower() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("lower").cast<::mlir::BoolAttr>();
  return attr;
}

::mlir::BoolAttr TriangularSolveOpAdaptor::unit_diagonal() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::BoolAttr attr = odsAttrs.get("unit_diagonal").cast<::mlir::BoolAttr>();
  return attr;
}

::mlir::StringAttr TriangularSolveOpAdaptor::transpose_a() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("transpose_a").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr TriangularSolveOpAdaptor::layout_a() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("layout_a").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr TriangularSolveOpAdaptor::layout_b() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("layout_b").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::DenseIntElementsAttr TriangularSolveOpAdaptor::layout_output() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("layout_output").cast<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult TriangularSolveOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_left_side = odsAttrs.get("left_side");
  if (!tblgen_left_side) return emitError(loc, "'lmhlo.triangular_solve' op ""requires attribute 'left_side'");
    if (!((tblgen_left_side.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.triangular_solve' op ""attribute 'left_side' failed to satisfy constraint: bool attribute");
  }
  {
  auto tblgen_lower = odsAttrs.get("lower");
  if (!tblgen_lower) return emitError(loc, "'lmhlo.triangular_solve' op ""requires attribute 'lower'");
    if (!((tblgen_lower.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.triangular_solve' op ""attribute 'lower' failed to satisfy constraint: bool attribute");
  }
  {
  auto tblgen_unit_diagonal = odsAttrs.get("unit_diagonal");
  if (!tblgen_unit_diagonal) return emitError(loc, "'lmhlo.triangular_solve' op ""requires attribute 'unit_diagonal'");
    if (!((tblgen_unit_diagonal.isa<::mlir::BoolAttr>()))) return emitError(loc, "'lmhlo.triangular_solve' op ""attribute 'unit_diagonal' failed to satisfy constraint: bool attribute");
  }
  {
  auto tblgen_transpose_a = odsAttrs.get("transpose_a");
  if (!tblgen_transpose_a) return emitError(loc, "'lmhlo.triangular_solve' op ""requires attribute 'transpose_a'");
    if (!(((tblgen_transpose_a.isa<::mlir::StringAttr>())) && (((tblgen_transpose_a.cast<::mlir::StringAttr>().getValue() == "TRANSPOSE_INVALID")) || ((tblgen_transpose_a.cast<::mlir::StringAttr>().getValue() == "NO_TRANSPOSE")) || ((tblgen_transpose_a.cast<::mlir::StringAttr>().getValue() == "TRANSPOSE")) || ((tblgen_transpose_a.cast<::mlir::StringAttr>().getValue() == "ADJOINT"))))) return emitError(loc, "'lmhlo.triangular_solve' op ""attribute 'transpose_a' failed to satisfy constraint: Transpose options");
  }
  {
  auto tblgen_layout_a = odsAttrs.get("layout_a");
  if (!tblgen_layout_a) return emitError(loc, "'lmhlo.triangular_solve' op ""requires attribute 'layout_a'");
    if (!((((tblgen_layout_a.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_layout_a.cast<::mlir::DenseIntElementsAttr>()
                                      .getType()
                                      .getElementType()
                                      .isIndex()))) && ((tblgen_layout_a.cast<::mlir::DenseIntElementsAttr>().getType().getRank()
               == 1)))) return emitError(loc, "'lmhlo.triangular_solve' op ""attribute 'layout_a' failed to satisfy constraint: A 1D tensor of index type (layout)");
  }
  {
  auto tblgen_layout_b = odsAttrs.get("layout_b");
  if (!tblgen_layout_b) return emitError(loc, "'lmhlo.triangular_solve' op ""requires attribute 'layout_b'");
    if (!((((tblgen_layout_b.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_layout_b.cast<::mlir::DenseIntElementsAttr>()
                                      .getType()
                                      .getElementType()
                                      .isIndex()))) && ((tblgen_layout_b.cast<::mlir::DenseIntElementsAttr>().getType().getRank()
               == 1)))) return emitError(loc, "'lmhlo.triangular_solve' op ""attribute 'layout_b' failed to satisfy constraint: A 1D tensor of index type (layout)");
  }
  {
  auto tblgen_layout_output = odsAttrs.get("layout_output");
  if (!tblgen_layout_output) return emitError(loc, "'lmhlo.triangular_solve' op ""requires attribute 'layout_output'");
    if (!((((tblgen_layout_output.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_layout_output.cast<::mlir::DenseIntElementsAttr>()
                                      .getType()
                                      .getElementType()
                                      .isIndex()))) && ((tblgen_layout_output.cast<::mlir::DenseIntElementsAttr>().getType().getRank()
               == 1)))) return emitError(loc, "'lmhlo.triangular_solve' op ""attribute 'layout_output' failed to satisfy constraint: A 1D tensor of index type (layout)");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> TriangularSolveOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TriangularSolveOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TriangularSolveOp::a() {
  return *getODSOperands(0).begin();
}

::mlir::Value TriangularSolveOp::b() {
  return *getODSOperands(1).begin();
}

::mlir::Value TriangularSolveOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange TriangularSolveOp::aMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TriangularSolveOp::bMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TriangularSolveOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TriangularSolveOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TriangularSolveOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::BoolAttr TriangularSolveOp::left_sideAttr() {
  return (*this)->getAttr("left_side").template cast<::mlir::BoolAttr>();
}

bool TriangularSolveOp::left_side() {
  auto attr = left_sideAttr();
  return attr.getValue();
}

::mlir::BoolAttr TriangularSolveOp::lowerAttr() {
  return (*this)->getAttr("lower").template cast<::mlir::BoolAttr>();
}

bool TriangularSolveOp::lower() {
  auto attr = lowerAttr();
  return attr.getValue();
}

::mlir::BoolAttr TriangularSolveOp::unit_diagonalAttr() {
  return (*this)->getAttr("unit_diagonal").template cast<::mlir::BoolAttr>();
}

bool TriangularSolveOp::unit_diagonal() {
  auto attr = unit_diagonalAttr();
  return attr.getValue();
}

::mlir::StringAttr TriangularSolveOp::transpose_aAttr() {
  return (*this)->getAttr("transpose_a").template cast<::mlir::StringAttr>();
}

::llvm::StringRef TriangularSolveOp::transpose_a() {
  auto attr = transpose_aAttr();
  return attr.getValue();
}

::mlir::DenseIntElementsAttr TriangularSolveOp::layout_aAttr() {
  return (*this)->getAttr("layout_a").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr TriangularSolveOp::layout_a() {
  auto attr = layout_aAttr();
  return attr;
}

::mlir::DenseIntElementsAttr TriangularSolveOp::layout_bAttr() {
  return (*this)->getAttr("layout_b").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr TriangularSolveOp::layout_b() {
  auto attr = layout_bAttr();
  return attr;
}

::mlir::DenseIntElementsAttr TriangularSolveOp::layout_outputAttr() {
  return (*this)->getAttr("layout_output").template cast<::mlir::DenseIntElementsAttr>();
}

::mlir::DenseIntElementsAttr TriangularSolveOp::layout_output() {
  auto attr = layout_outputAttr();
  return attr;
}

void TriangularSolveOp::left_sideAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("left_side", attr);
}

void TriangularSolveOp::lowerAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("lower", attr);
}

void TriangularSolveOp::unit_diagonalAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr("unit_diagonal", attr);
}

void TriangularSolveOp::transpose_aAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("transpose_a", attr);
}

void TriangularSolveOp::layout_aAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("layout_a", attr);
}

void TriangularSolveOp::layout_bAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("layout_b", attr);
}

void TriangularSolveOp::layout_outputAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("layout_output", attr);
}

void TriangularSolveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value output, ::mlir::BoolAttr left_side, ::mlir::BoolAttr lower, ::mlir::BoolAttr unit_diagonal, ::mlir::StringAttr transpose_a, ::mlir::DenseIntElementsAttr layout_a, ::mlir::DenseIntElementsAttr layout_b, ::mlir::DenseIntElementsAttr layout_output) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(output);
  odsState.addAttribute("left_side", left_side);
  odsState.addAttribute("lower", lower);
  odsState.addAttribute("unit_diagonal", unit_diagonal);
  odsState.addAttribute("transpose_a", transpose_a);
  odsState.addAttribute("layout_a", layout_a);
  odsState.addAttribute("layout_b", layout_b);
  odsState.addAttribute("layout_output", layout_output);
}

void TriangularSolveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value output, ::mlir::BoolAttr left_side, ::mlir::BoolAttr lower, ::mlir::BoolAttr unit_diagonal, ::mlir::StringAttr transpose_a, ::mlir::DenseIntElementsAttr layout_a, ::mlir::DenseIntElementsAttr layout_b, ::mlir::DenseIntElementsAttr layout_output) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(output);
  odsState.addAttribute("left_side", left_side);
  odsState.addAttribute("lower", lower);
  odsState.addAttribute("unit_diagonal", unit_diagonal);
  odsState.addAttribute("transpose_a", transpose_a);
  odsState.addAttribute("layout_a", layout_a);
  odsState.addAttribute("layout_b", layout_b);
  odsState.addAttribute("layout_output", layout_output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TriangularSolveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value output, bool left_side, bool lower, bool unit_diagonal, ::llvm::StringRef transpose_a, ::mlir::DenseIntElementsAttr layout_a, ::mlir::DenseIntElementsAttr layout_b, ::mlir::DenseIntElementsAttr layout_output) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(output);
  odsState.addAttribute("left_side", odsBuilder.getBoolAttr(left_side));
  odsState.addAttribute("lower", odsBuilder.getBoolAttr(lower));
  odsState.addAttribute("unit_diagonal", odsBuilder.getBoolAttr(unit_diagonal));
  odsState.addAttribute("transpose_a", odsBuilder.getStringAttr(transpose_a));
  odsState.addAttribute("layout_a", layout_a);
  odsState.addAttribute("layout_b", layout_b);
  odsState.addAttribute("layout_output", layout_output);
}

void TriangularSolveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value output, bool left_side, bool lower, bool unit_diagonal, ::llvm::StringRef transpose_a, ::mlir::DenseIntElementsAttr layout_a, ::mlir::DenseIntElementsAttr layout_b, ::mlir::DenseIntElementsAttr layout_output) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(output);
  odsState.addAttribute("left_side", odsBuilder.getBoolAttr(left_side));
  odsState.addAttribute("lower", odsBuilder.getBoolAttr(lower));
  odsState.addAttribute("unit_diagonal", odsBuilder.getBoolAttr(unit_diagonal));
  odsState.addAttribute("transpose_a", odsBuilder.getStringAttr(transpose_a));
  odsState.addAttribute("layout_a", layout_a);
  odsState.addAttribute("layout_b", layout_b);
  odsState.addAttribute("layout_output", layout_output);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TriangularSolveOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TriangularSolveOp::verify() {
  if (failed(TriangularSolveOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops3(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void TriangularSolveOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::WhileOp definitions
//===----------------------------------------------------------------------===//

WhileOpAdaptor::WhileOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

WhileOpAdaptor::WhileOpAdaptor(WhileOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange WhileOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> WhileOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::ValueRange WhileOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::ValueRange WhileOpAdaptor::cond_val() {
  return getODSOperands(0);
}

::mlir::DictionaryAttr WhileOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr WhileOpAdaptor::trip_count() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::IntegerAttr attr = odsAttrs.get("trip_count").dyn_cast_or_null<::mlir::IntegerAttr>();
  return attr;
}

::mlir::RegionRange WhileOpAdaptor::getRegions() {
  return odsRegions;
}

::mlir::Region &WhileOpAdaptor::cond() {
  return *odsRegions[0];
}

::mlir::Region &WhileOpAdaptor::body() {
  return *odsRegions[1];
}

::mlir::LogicalResult WhileOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_trip_count = odsAttrs.get("trip_count");
  if (tblgen_trip_count) {
    if (!(((tblgen_trip_count.isa<::mlir::IntegerAttr>())) && ((tblgen_trip_count.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.while' op ""attribute 'trip_count' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> WhileOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range WhileOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range WhileOp::cond_val() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange WhileOp::cond_valMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> WhileOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WhileOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &WhileOp::cond() {
  return (*this)->getRegion(0);
}

::mlir::Region &WhileOp::body() {
  return (*this)->getRegion(1);
}

::mlir::IntegerAttr WhileOp::trip_countAttr() {
  return (*this)->getAttr("trip_count").template dyn_cast_or_null<::mlir::IntegerAttr>();
}

::llvm::Optional<uint64_t> WhileOp::trip_count() {
  auto attr = trip_countAttr();
  return attr ? ::llvm::Optional<uint64_t>(attr.getValue().getZExtValue()) : (::llvm::None);
}

void WhileOp::trip_countAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr("trip_count", attr);
}

::mlir::Attribute WhileOp::removeTrip_countAttr() {
  return (*this)->removeAttr("trip_count");
}

void WhileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange cond_val, /*optional*/::mlir::IntegerAttr trip_count) {
  odsState.addOperands(cond_val);
  if (trip_count) {
  odsState.addAttribute("trip_count", trip_count);
  }
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void WhileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange cond_val, /*optional*/::mlir::IntegerAttr trip_count) {
  odsState.addOperands(cond_val);
  if (trip_count) {
  odsState.addAttribute("trip_count", trip_count);
  }
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WhileOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WhileOp::verify() {
  if (failed(WhileOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops11(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>((*this)->getRegion(0))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('cond') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
    for (::mlir::Region &region : ::mlir::MutableArrayRef<::mlir::Region>((*this)->getRegion(1))) {
      (void)region;
      if (!((::llvm::hasNItems(region, 1)))) {
        return emitOpError("region #") << index << " ('body') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::mlir::success();
}

void WhileOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::XorOp definitions
//===----------------------------------------------------------------------===//

XorOpAdaptor::XorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

XorOpAdaptor::XorOpAdaptor(XorOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange XorOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> XorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange XorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::Value XorOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value XorOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value XorOpAdaptor::out() {
  return *getODSOperands(2).begin();
}

::mlir::DictionaryAttr XorOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::DenseIntElementsAttr XorOpAdaptor::broadcast_dimensions() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::DenseIntElementsAttr attr = odsAttrs.get("broadcast_dimensions").dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
  return attr;
}

::mlir::LogicalResult XorOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_broadcast_dimensions = odsAttrs.get("broadcast_dimensions");
  if (tblgen_broadcast_dimensions) {
    if (!(((tblgen_broadcast_dimensions.isa<::mlir::DenseIntElementsAttr>())) && ((tblgen_broadcast_dimensions.cast<::mlir::DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'lmhlo.xor' op ""attribute 'broadcast_dimensions' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> XorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range XorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value XorOp::lhs() {
  return *getODSOperands(0).begin();
}

::mlir::Value XorOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::Value XorOp::out() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange XorOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange XorOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange XorOp::outMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> XorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range XorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseIntElementsAttr XorOp::broadcast_dimensionsAttr() {
  return (*this)->getAttr("broadcast_dimensions").template dyn_cast_or_null<::mlir::DenseIntElementsAttr>();
}

::llvm::Optional< ::mlir::DenseIntElementsAttr > XorOp::broadcast_dimensions() {
  auto attr = broadcast_dimensionsAttr();
  return attr ? ::llvm::Optional< ::mlir::DenseIntElementsAttr >(attr) : (::llvm::None);
}

void XorOp::broadcast_dimensionsAttr(::mlir::DenseIntElementsAttr attr) {
  (*this)->setAttr("broadcast_dimensions", attr);
}

::mlir::Attribute XorOp::removeBroadcast_dimensionsAttr() {
  return (*this)->removeAttr("broadcast_dimensions");
}

void XorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
}

void XorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::Value out, /*optional*/::mlir::DenseIntElementsAttr broadcast_dimensions) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(out);
  if (broadcast_dimensions) {
  odsState.addAttribute("broadcast_dimensions", broadcast_dimensions);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void XorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult XorOp::verify() {
  if (failed(XorOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (::mlir::Value v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (::mlir::Value v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (::mlir::Value v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_lhlo_ops2(getOperation(), v.getType(), "operand", index)))
        return ::mlir::failure();
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void XorOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(2))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir
namespace mlir {
namespace lmhlo {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo::TerminatorOp definitions
//===----------------------------------------------------------------------===//

TerminatorOpAdaptor::TerminatorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

TerminatorOpAdaptor::TerminatorOpAdaptor(TerminatorOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange TerminatorOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> TerminatorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange TerminatorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr TerminatorOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::LogicalResult TerminatorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}



std::pair<unsigned, unsigned> TerminatorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TerminatorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TerminatorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TerminatorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TerminatorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ValueRange operands) {
 build(odsBuilder, odsState, llvm::None, operands, llvm::None); 
}

void TerminatorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {

}

void TerminatorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TerminatorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TerminatorOp::verify() {
  if (failed(TerminatorOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

void TerminatorOp::getEffects(::mlir::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Read::get(), ::mlir::SideEffects::DefaultResource::get());
  effects.emplace_back(MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
}

} // namespace lmhlo
} // namespace mlir

#endif  // GET_OP_CLASSES

