/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::tf_saved_model::AssetOp,
::mlir::tf_saved_model::GlobalTensorOp,
::mlir::tf_saved_model::SessionInitializerOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace tf_saved_model {
} // namespace tf_saved_model
} // namespace mlir
namespace mlir {
namespace tf_saved_model {

//===----------------------------------------------------------------------===//
// ::mlir::tf_saved_model::AssetOp definitions
//===----------------------------------------------------------------------===//

AssetOpAdaptor::AssetOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

AssetOpAdaptor::AssetOpAdaptor(AssetOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange AssetOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> AssetOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange AssetOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr AssetOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr AssetOpAdaptor::sym_name() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("sym_name").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::StringAttr AssetOpAdaptor::filename() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("filename").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::LogicalResult AssetOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_sym_name = odsAttrs.get("sym_name");
  if (!tblgen_sym_name) return emitError(loc, "'tf_saved_model.asset' op ""requires attribute 'sym_name'");
    if (!((tblgen_sym_name.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf_saved_model.asset' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_filename = odsAttrs.get("filename");
  if (!tblgen_filename) return emitError(loc, "'tf_saved_model.asset' op ""requires attribute 'filename'");
    if (!((tblgen_filename.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf_saved_model.asset' op ""attribute 'filename' failed to satisfy constraint: string attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> AssetOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AssetOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> AssetOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AssetOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr AssetOp::sym_nameAttr() {
  return (*this)->getAttr("sym_name").template cast<::mlir::StringAttr>();
}

::llvm::StringRef AssetOp::sym_name() {
  auto attr = sym_nameAttr();
  return attr.getValue();
}

::mlir::StringAttr AssetOp::filenameAttr() {
  return (*this)->getAttr("filename").template cast<::mlir::StringAttr>();
}

::llvm::StringRef AssetOp::filename() {
  auto attr = filenameAttr();
  return attr.getValue();
}

void AssetOp::sym_nameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("sym_name", attr);
}

void AssetOp::filenameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("filename", attr);
}

void AssetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::StringAttr filename) {
  odsState.addAttribute("sym_name", sym_name);
  odsState.addAttribute("filename", filename);
}

void AssetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::StringAttr filename) {
  odsState.addAttribute("sym_name", sym_name);
  odsState.addAttribute("filename", filename);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AssetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::llvm::StringRef filename) {
  odsState.addAttribute("sym_name", odsBuilder.getStringAttr(sym_name));
  odsState.addAttribute("filename", odsBuilder.getStringAttr(filename));
}

void AssetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::llvm::StringRef filename) {
  odsState.addAttribute("sym_name", odsBuilder.getStringAttr(sym_name));
  odsState.addAttribute("filename", odsBuilder.getStringAttr(filename));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AssetOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AssetOp::verify() {
  if (failed(AssetOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::mlir::success();
}

} // namespace tf_saved_model
} // namespace mlir
namespace mlir {
namespace tf_saved_model {

//===----------------------------------------------------------------------===//
// ::mlir::tf_saved_model::GlobalTensorOp definitions
//===----------------------------------------------------------------------===//

GlobalTensorOpAdaptor::GlobalTensorOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

GlobalTensorOpAdaptor::GlobalTensorOpAdaptor(GlobalTensorOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange GlobalTensorOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> GlobalTensorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange GlobalTensorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr GlobalTensorOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr GlobalTensorOpAdaptor::sym_name() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::StringAttr attr = odsAttrs.get("sym_name").cast<::mlir::StringAttr>();
  return attr;
}

::mlir::ElementsAttr GlobalTensorOpAdaptor::value() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ElementsAttr attr = odsAttrs.get("value").cast<::mlir::ElementsAttr>();
  return attr;
}

::mlir::TypeAttr GlobalTensorOpAdaptor::type() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::TypeAttr attr = odsAttrs.get("type").cast<::mlir::TypeAttr>();
  return attr;
}

::mlir::UnitAttr GlobalTensorOpAdaptor::is_mutable() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::UnitAttr attr = odsAttrs.get("is_mutable").dyn_cast_or_null<::mlir::UnitAttr>();
  return attr;
}

::mlir::LogicalResult GlobalTensorOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_sym_name = odsAttrs.get("sym_name");
  if (!tblgen_sym_name) return emitError(loc, "'tf_saved_model.global_tensor' op ""requires attribute 'sym_name'");
    if (!((tblgen_sym_name.isa<::mlir::StringAttr>()))) return emitError(loc, "'tf_saved_model.global_tensor' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_value = odsAttrs.get("value");
  if (!tblgen_value) return emitError(loc, "'tf_saved_model.global_tensor' op ""requires attribute 'value'");
    if (!((tblgen_value.isa<::mlir::ElementsAttr>()))) return emitError(loc, "'tf_saved_model.global_tensor' op ""attribute 'value' failed to satisfy constraint: constant vector/tensor attribute");
  }
  {
  auto tblgen_type = odsAttrs.get("type");
  if (!tblgen_type) return emitError(loc, "'tf_saved_model.global_tensor' op ""requires attribute 'type'");
    if (!(((tblgen_type.isa<::mlir::TypeAttr>())) && ((tblgen_type.cast<::mlir::TypeAttr>().getValue().isa<::mlir::Type>())))) return emitError(loc, "'tf_saved_model.global_tensor' op ""attribute 'type' failed to satisfy constraint: any type attribute");
  }
  {
  auto tblgen_is_mutable = odsAttrs.get("is_mutable");
  if (tblgen_is_mutable) {
    if (!((tblgen_is_mutable.isa<::mlir::UnitAttr>()))) return emitError(loc, "'tf_saved_model.global_tensor' op ""attribute 'is_mutable' failed to satisfy constraint: unit attribute");
  }
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> GlobalTensorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GlobalTensorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GlobalTensorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GlobalTensorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr GlobalTensorOp::sym_nameAttr() {
  return (*this)->getAttr("sym_name").template cast<::mlir::StringAttr>();
}

::llvm::StringRef GlobalTensorOp::sym_name() {
  auto attr = sym_nameAttr();
  return attr.getValue();
}

::mlir::ElementsAttr GlobalTensorOp::valueAttr() {
  return (*this)->getAttr("value").template cast<::mlir::ElementsAttr>();
}

::mlir::ElementsAttr GlobalTensorOp::value() {
  auto attr = valueAttr();
  return attr;
}

::mlir::TypeAttr GlobalTensorOp::typeAttr() {
  return (*this)->getAttr("type").template cast<::mlir::TypeAttr>();
}

::mlir::Type GlobalTensorOp::type() {
  auto attr = typeAttr();
  return attr.getValue().cast<::mlir::Type>();
}

::mlir::UnitAttr GlobalTensorOp::is_mutableAttr() {
  return (*this)->getAttr("is_mutable").template dyn_cast_or_null<::mlir::UnitAttr>();
}

bool GlobalTensorOp::is_mutable() {
  auto attr = is_mutableAttr();
  return attr != nullptr;
}

void GlobalTensorOp::sym_nameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr("sym_name", attr);
}

void GlobalTensorOp::valueAttr(::mlir::ElementsAttr attr) {
  (*this)->setAttr("value", attr);
}

void GlobalTensorOp::typeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr("type", attr);
}

void GlobalTensorOp::is_mutableAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr("is_mutable", attr);
}

::mlir::Attribute GlobalTensorOp::removeIs_mutableAttr() {
  return (*this)->removeAttr("is_mutable");
}

void GlobalTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::ElementsAttr value, ::mlir::TypeAttr type, /*optional*/::mlir::UnitAttr is_mutable) {
  odsState.addAttribute("sym_name", sym_name);
  odsState.addAttribute("value", value);
  odsState.addAttribute("type", type);
  if (is_mutable) {
  odsState.addAttribute("is_mutable", is_mutable);
  }
}

void GlobalTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::ElementsAttr value, ::mlir::TypeAttr type, /*optional*/::mlir::UnitAttr is_mutable) {
  odsState.addAttribute("sym_name", sym_name);
  odsState.addAttribute("value", value);
  odsState.addAttribute("type", type);
  if (is_mutable) {
  odsState.addAttribute("is_mutable", is_mutable);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::mlir::ElementsAttr value, ::mlir::Type type, /*optional*/bool is_mutable) {
  odsState.addAttribute("sym_name", odsBuilder.getStringAttr(sym_name));
  odsState.addAttribute("value", value);
  odsState.addAttribute("type", ::mlir::TypeAttr::get(type));
  if (is_mutable) {
  odsState.addAttribute("is_mutable", odsBuilder.getUnitAttr());
  }
}

void GlobalTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::mlir::ElementsAttr value, ::mlir::Type type, /*optional*/bool is_mutable) {
  odsState.addAttribute("sym_name", odsBuilder.getStringAttr(sym_name));
  odsState.addAttribute("value", value);
  odsState.addAttribute("type", ::mlir::TypeAttr::get(type));
  if (is_mutable) {
  odsState.addAttribute("is_mutable", odsBuilder.getUnitAttr());
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalTensorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GlobalTensorOp::verify() {
  if (failed(GlobalTensorOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return Verify(*this);
}

} // namespace tf_saved_model
} // namespace mlir
namespace mlir {
namespace tf_saved_model {

//===----------------------------------------------------------------------===//
// ::mlir::tf_saved_model::SessionInitializerOp definitions
//===----------------------------------------------------------------------===//

SessionInitializerOpAdaptor::SessionInitializerOpAdaptor(::mlir::ValueRange values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions)  : odsOperands(values), odsAttrs(attrs), odsRegions(regions) {

}

SessionInitializerOpAdaptor::SessionInitializerOpAdaptor(SessionInitializerOp&op)  : odsOperands(op->getOperands()), odsAttrs(op->getAttrDictionary()), odsRegions(op->getRegions()) {

}

::mlir::ValueRange SessionInitializerOpAdaptor::getOperands() {
  return odsOperands;
}

std::pair<unsigned, unsigned> SessionInitializerOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::ValueRange SessionInitializerOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

::mlir::DictionaryAttr SessionInitializerOpAdaptor::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr SessionInitializerOpAdaptor::initializers() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ::mlir::ArrayAttr attr = odsAttrs.get("initializers").cast<::mlir::ArrayAttr>();
  return attr;
}

::mlir::LogicalResult SessionInitializerOpAdaptor::verify(::mlir::Location loc) {
  {
  auto tblgen_initializers = odsAttrs.get("initializers");
  if (!tblgen_initializers) return emitError(loc, "'tf_saved_model.session_initializer' op ""requires attribute 'initializers'");
    if (!(((tblgen_initializers.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_initializers.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return (attr.isa<::mlir::SymbolRefAttr>()); })))) return emitError(loc, "'tf_saved_model.session_initializer' op ""attribute 'initializers' failed to satisfy constraint: symbol ref array attribute");
  }
  return ::mlir::success();
}



std::pair<unsigned, unsigned> SessionInitializerOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SessionInitializerOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> SessionInitializerOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SessionInitializerOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::ArrayAttr SessionInitializerOp::initializersAttr() {
  return (*this)->getAttr("initializers").template cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr SessionInitializerOp::initializers() {
  auto attr = initializersAttr();
  return attr;
}

void SessionInitializerOp::initializersAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr("initializers", attr);
}

void SessionInitializerOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ArrayAttr initializers) {
  odsState.addAttribute("initializers", initializers);
}

void SessionInitializerOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ArrayAttr initializers) {
  odsState.addAttribute("initializers", initializers);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SessionInitializerOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SessionInitializerOp::verify() {
  if (failed(SessionInitializerOpAdaptor(*this).verify((*this)->getLoc()))) return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return Verify(*this);
}



} // namespace tf_saved_model
} // namespace mlir

#endif  // GET_OP_CLASSES

