#include <com/sun/org/apache/bcel/internal/util/BCELFactory.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/generic/AllocationInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CodeExceptionGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/EmptyVisitor.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IINC.h>
#include <com/sun/org/apache/bcel/internal/generic/INSTANCEOF.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC2_W.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/MULTIANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen.h>
#include <com/sun/org/apache/bcel/internal/generic/NEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/RET.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Select.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/BCELifier.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Number.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ANEWARRAY
#undef CONSTANT_PREFIX
#undef ENGLISH
#undef IASTORE
#undef IINC
#undef ISTORE
#undef MULTIANEWARRAY
#undef NEW
#undef NEWARRAY

using $CodeExceptionGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::CodeExceptionGen>;
using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $AllocationInstruction = ::com::sun::org::apache::bcel::internal::generic::AllocationInstruction;
using $ArrayInstruction = ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction;
using $ArrayType = ::com::sun::org::apache::bcel::internal::generic::ArrayType;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CodeExceptionGen = ::com::sun::org::apache::bcel::internal::generic::CodeExceptionGen;
using $ConstantPushInstruction = ::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction;
using $EmptyVisitor = ::com::sun::org::apache::bcel::internal::generic::EmptyVisitor;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $IINC = ::com::sun::org::apache::bcel::internal::generic::IINC;
using $INSTANCEOF = ::com::sun::org::apache::bcel::internal::generic::INSTANCEOF;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionConst = ::com::sun::org::apache::bcel::internal::generic::InstructionConst;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LDC = ::com::sun::org::apache::bcel::internal::generic::LDC;
using $LDC2_W = ::com::sun::org::apache::bcel::internal::generic::LDC2_W;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $MULTIANEWARRAY = ::com::sun::org::apache::bcel::internal::generic::MULTIANEWARRAY;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $NEWARRAY = ::com::sun::org::apache::bcel::internal::generic::NEWARRAY;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $RET = ::com::sun::org::apache::bcel::internal::generic::RET;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $ReturnInstruction = ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction;
using $Select = ::com::sun::org::apache::bcel::internal::generic::Select;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $BCELifier = ::com::sun::org::apache::bcel::internal::util::BCELifier;
using $PrintWriter = ::java::io::PrintWriter;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _BCELFactory_FieldInfo_[] = {
	{"CONSTANT_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BCELFactory, CONSTANT_PREFIX)},
	{"_mg", "Lcom/sun/org/apache/bcel/internal/generic/MethodGen;", nullptr, $PRIVATE | $FINAL, $field(BCELFactory, _mg)},
	{"_out", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(BCELFactory, _out)},
	{"_cp", "Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PRIVATE | $FINAL, $field(BCELFactory, _cp)},
	{"branch_map", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/bcel/internal/generic/Instruction;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;>;", $PRIVATE | $FINAL, $field(BCELFactory, branch_map)},
	{"branches", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;>;", $PRIVATE | $FINAL, $field(BCELFactory, branches)},
	{}
};

$MethodInfo _BCELFactory_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/MethodGen;Ljava/io/PrintWriter;)V", nullptr, 0, $method(BCELFactory, init$, void, $MethodGen*, $PrintWriter*)},
	{"createConstant", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(BCELFactory, createConstant, void, Object$*)},
	{"start", "()V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, start, void)},
	{"updateBranchTargets", "()V", nullptr, $PRIVATE, $method(BCELFactory, updateBranchTargets, void)},
	{"updateExceptionHandlers", "()V", nullptr, $PRIVATE, $method(BCELFactory, updateExceptionHandlers, void)},
	{"visitAllocationInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/AllocationInstruction;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitAllocationInstruction, void, $AllocationInstruction*)},
	{"visitArrayInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitArrayInstruction, void, $ArrayInstruction*)},
	{"visitBranchInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitBranchInstruction, void, $BranchInstruction*)},
	{"visitCHECKCAST", "(Lcom/sun/org/apache/bcel/internal/generic/CHECKCAST;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitCHECKCAST, void, $CHECKCAST*)},
	{"visitConstantPushInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPushInstruction;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitConstantPushInstruction, void, $ConstantPushInstruction*)},
	{"visitFieldInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/FieldInstruction;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitFieldInstruction, void, $FieldInstruction*)},
	{"visitINSTANCEOF", "(Lcom/sun/org/apache/bcel/internal/generic/INSTANCEOF;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitINSTANCEOF, void, $INSTANCEOF*)},
	{"visitInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Z", nullptr, $PRIVATE, $method(BCELFactory, visitInstruction, bool, $Instruction*)},
	{"visitInvokeInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/InvokeInstruction;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitInvokeInstruction, void, $InvokeInstruction*)},
	{"visitLDC", "(Lcom/sun/org/apache/bcel/internal/generic/LDC;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitLDC, void, $LDC*)},
	{"visitLDC2_W", "(Lcom/sun/org/apache/bcel/internal/generic/LDC2_W;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitLDC2_W, void, $LDC2_W*)},
	{"visitLocalVariableInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitLocalVariableInstruction, void, $LocalVariableInstruction*)},
	{"visitRET", "(Lcom/sun/org/apache/bcel/internal/generic/RET;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitRET, void, $RET*)},
	{"visitReturnInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;)V", nullptr, $PUBLIC, $virtualMethod(BCELFactory, visitReturnInstruction, void, $ReturnInstruction*)},
	{}
};

$ClassInfo _BCELFactory_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.BCELFactory",
	"com.sun.org.apache.bcel.internal.generic.EmptyVisitor",
	nullptr,
	_BCELFactory_FieldInfo_,
	_BCELFactory_MethodInfo_
};

$Object* allocate$BCELFactory($Class* clazz) {
	return $of($alloc(BCELFactory));
}

$String* BCELFactory::CONSTANT_PREFIX = nullptr;

void BCELFactory::init$($MethodGen* mg, $PrintWriter* out) {
	$EmptyVisitor::init$();
	$set(this, branch_map, $new($HashMap));
	$set(this, branches, $new($ArrayList));
	$set(this, _mg, mg);
	$set(this, _cp, $nc(mg)->getConstantPool());
	$set(this, _out, out);
}

void BCELFactory::start() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc(this->_mg)->isAbstract();
	if (var$0 && !$nc(this->_mg)->isNative()) {
		{
			$var($InstructionHandle, ih, $nc($($nc(this->_mg)->getInstructionList()))->getStart());
			for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
				$var($Instruction, i, ih->getInstruction());
				if ($instanceOf($BranchInstruction, i)) {
					$nc(this->branch_map)->put(i, ih);
				}
				if (ih->hasTargeters()) {
					if ($instanceOf($BranchInstruction, i)) {
						$nc(this->_out)->println($$str({"    InstructionHandle ih_"_s, $$str(ih->getPosition()), ";"_s}));
					} else {
						$nc(this->_out)->print($$str({"    InstructionHandle ih_"_s, $$str(ih->getPosition()), " = "_s}));
					}
				} else {
					$nc(this->_out)->print("    "_s);
				}
				if (!visitInstruction(i)) {
					$nc(i)->accept(this);
				}
			}
		}
		updateBranchTargets();
		updateExceptionHandlers();
	}
}

bool BCELFactory::visitInstruction($Instruction* i) {
	$useLocalCurrentObjectStackCache();
	int16_t opcode = $nc(i)->getOpcode();
	if (($InstructionConst::getInstruction(opcode) != nullptr) && !($instanceOf($ConstantPushInstruction, i)) && !($instanceOf($ReturnInstruction, i))) {
		$init($Locale);
		$nc(this->_out)->println($$str({"il.append(InstructionConst."_s, $($nc($(i->getName()))->toUpperCase($Locale::ENGLISH)), ");"_s}));
		return true;
	}
	return false;
}

void BCELFactory::visitLocalVariableInstruction($LocalVariableInstruction* i) {
	$useLocalCurrentObjectStackCache();
	int16_t opcode = $nc(i)->getOpcode();
	$var($Type, type, i->getType(this->_cp));
	if (opcode == $Const::IINC) {
		$var($String, var$1, $$str({"il.append(new IINC("_s, $$str(i->getIndex()), ", "_s}));
		$var($String, var$0, $$concat(var$1, $$str($nc(($cast($IINC, i)))->getIncrement())));
		$nc(this->_out)->println($$concat(var$0, "));"_s));
	} else {
		$var($String, kind, (opcode < $Const::ISTORE) ? "Load"_s : "Store"_s);
		$var($String, var$3, $$str({"il.append(_factory.create"_s, kind, "("_s, $($BCELifier::printType(type)), ", "_s}));
		$var($String, var$2, $$concat(var$3, $$str(i->getIndex())));
		$nc(this->_out)->println($$concat(var$2, "));"_s));
	}
}

void BCELFactory::visitArrayInstruction($ArrayInstruction* i) {
	$useLocalCurrentObjectStackCache();
	int16_t opcode = $nc(i)->getOpcode();
	$var($Type, type, i->getType(this->_cp));
	$var($String, kind, (opcode < $Const::IASTORE) ? "Load"_s : "Store"_s);
	$nc(this->_out)->println($$str({"il.append(_factory.createArray"_s, kind, "("_s, $($BCELifier::printType(type)), "));"_s}));
}

void BCELFactory::visitFieldInstruction($FieldInstruction* i) {
	$useLocalCurrentObjectStackCache();
	int16_t opcode = $nc(i)->getOpcode();
	$var($String, class_name, $nc($(i->getReferenceType(this->_cp)))->getSignature());
	$var($String, field_name, i->getFieldName(this->_cp));
	$var($Type, type, i->getFieldType(this->_cp));
	$var($String, var$1, $$str({"il.append(_factory.createFieldAccess(\""_s, class_name, "\", \""_s, field_name, "\", "_s, $($BCELifier::printType(type)), ", "_s, BCELFactory::CONSTANT_PREFIX}));
	$init($Locale);
	$var($String, var$0, $$concat(var$1, $($nc($($Const::getOpcodeName(opcode)))->toUpperCase($Locale::ENGLISH))));
	$nc(this->_out)->println($$concat(var$0, "));"_s));
}

void BCELFactory::visitInvokeInstruction($InvokeInstruction* i) {
	$useLocalCurrentObjectStackCache();
	int16_t opcode = $nc(i)->getOpcode();
	$var($String, class_name, $nc($(i->getReferenceType(this->_cp)))->getSignature());
	$var($String, method_name, i->getMethodName(this->_cp));
	$var($Type, type, i->getReturnType(this->_cp));
	$var($TypeArray, arg_types, i->getArgumentTypes(this->_cp));
	$var($String, var$4, $$str({"il.append(_factory.createInvoke(\""_s, class_name, "\", \""_s, method_name, "\", "_s, $($BCELifier::printType(type)), ", "_s}));
	$var($String, var$3, $$concat(var$4, $($BCELifier::printArgumentTypes(arg_types))));
	$var($String, var$2, $$concat(var$3, ", "_s));
	$var($String, var$1, $$concat(var$2, BCELFactory::CONSTANT_PREFIX));
	$init($Locale);
	$var($String, var$0, $$concat(var$1, $($nc($($Const::getOpcodeName(opcode)))->toUpperCase($Locale::ENGLISH))));
	$nc(this->_out)->println($$concat(var$0, "));"_s));
}

void BCELFactory::visitAllocationInstruction($AllocationInstruction* i) {
	$useLocalCurrentObjectStackCache();
	$var($Type, type, nullptr);
	if ($instanceOf($CPInstruction, i)) {
		$assign(type, $nc(($cast($CPInstruction, i)))->getType(this->_cp));
	} else {
		$assign(type, $nc(($cast($NEWARRAY, i)))->getType());
	}
	int16_t opcode = $nc(($cast($Instruction, i)))->getOpcode();
	int32_t dim = 1;
	switch (opcode) {
	case $Const::NEW:
		{
			$nc(this->_out)->println($$str({"il.append(_factory.createNew(\""_s, $($nc(($cast($ObjectType, type)))->getClassName()), "\"));"_s}));
			break;
		}
	case $Const::MULTIANEWARRAY:
		{
			dim = $nc(($cast($MULTIANEWARRAY, i)))->getDimensions();
		}
	case $Const::ANEWARRAY:
		{}
	case $Const::NEWARRAY:
		{
			if ($instanceOf($ArrayType, type)) {
				$assign(type, $nc(($cast($ArrayType, type)))->getBasicType());
			}
			$nc(this->_out)->println($$str({"il.append(_factory.createNewArray("_s, $($BCELifier::printType(type)), ", (short) "_s, $$str(dim), "));"_s}));
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unhandled opcode: "_s, $$str(opcode)}));
		}
	}
}

void BCELFactory::createConstant(Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($String, embed, $nc($of(value))->toString());
	if ($instanceOf($String, value)) {
		$assign(embed, $str({$$str(u'\"'), $($Utility::convertString(embed)), $$str(u'\"')}));
	} else if ($instanceOf($Character, value)) {
		$assign(embed, $str({"(char)0x"_s, $($Integer::toHexString($nc(($cast($Character, value)))->charValue()))}));
	} else if ($instanceOf($Float, value)) {
		$plusAssign(embed, "f"_s);
	} else if ($instanceOf($Long, value)) {
		$plusAssign(embed, "L"_s);
	} else if ($instanceOf($ObjectType, value)) {
		$var($ObjectType, ot, $cast($ObjectType, value));
		$assign(embed, $str({"new ObjectType(\""_s, $(ot->getClassName()), "\")"_s}));
	}
	$nc(this->_out)->println($$str({"il.append(new PUSH(_cp, "_s, embed, "));"_s}));
}

void BCELFactory::visitLDC($LDC* i) {
	createConstant($($nc(i)->getValue(this->_cp)));
}

void BCELFactory::visitLDC2_W($LDC2_W* i) {
	createConstant($($nc(i)->getValue(this->_cp)));
}

void BCELFactory::visitConstantPushInstruction($ConstantPushInstruction* i) {
	createConstant($($nc(i)->getValue()));
}

void BCELFactory::visitINSTANCEOF($INSTANCEOF* i) {
	$useLocalCurrentObjectStackCache();
	$var($Type, type, $nc(i)->getType(this->_cp));
	$nc(this->_out)->println($$str({"il.append(new INSTANCEOF(_cp.addClass("_s, $($BCELifier::printType(type)), ")));"_s}));
}

void BCELFactory::visitCHECKCAST($CHECKCAST* i) {
	$useLocalCurrentObjectStackCache();
	$var($Type, type, $nc(i)->getType(this->_cp));
	$nc(this->_out)->println($$str({"il.append(_factory.createCheckCast("_s, $($BCELifier::printType(type)), "));"_s}));
}

void BCELFactory::visitReturnInstruction($ReturnInstruction* i) {
	$useLocalCurrentObjectStackCache();
	$var($Type, type, $nc(i)->getType(this->_cp));
	$nc(this->_out)->println($$str({"il.append(_factory.createReturn("_s, $($BCELifier::printType(type)), "));"_s}));
}

void BCELFactory::visitBranchInstruction($BranchInstruction* bi) {
	$useLocalCurrentObjectStackCache();
	$var($BranchHandle, bh, $cast($BranchHandle, $nc(this->branch_map)->get(bi)));
	int32_t pos = $nc(bh)->getPosition();
	$var($String, name, $str({$($nc(bi)->getName()), "_"_s, $$str(pos)}));
	if ($instanceOf($Select, bi)) {
		$var($Select, s, $cast($Select, bi));
		$nc(this->branches)->add(bi);
		$var($StringBuilder, args, $new($StringBuilder, "new int[] { "_s));
		$var($ints, matchs, s->getMatchs());
		for (int32_t i = 0; i < $nc(matchs)->length; ++i) {
			args->append(matchs->get(i));
			if (i < matchs->length - 1) {
				args->append(", "_s);
			}
		}
		args->append(" }"_s);
		$init($Locale);
		$nc(this->_out)->print($$str({"Select "_s, name, " = new "_s, $($nc($(bi->getName()))->toUpperCase($Locale::ENGLISH)), "("_s, args, ", new InstructionHandle[] { "_s}));
		for (int32_t i = 0; i < $nc(matchs)->length; ++i) {
			$nc(this->_out)->print("null"_s);
			if (i < matchs->length - 1) {
				$nc(this->_out)->print(", "_s);
			}
		}
		$nc(this->_out)->println(" }, null);"_s);
	} else {
		int32_t t_pos = $nc($(bh->getTarget()))->getPosition();
		$var($String, target, nullptr);
		if (pos > t_pos) {
			$assign(target, $str({"ih_"_s, $$str(t_pos)}));
		} else {
			$nc(this->branches)->add(bi);
			$assign(target, "null"_s);
		}
		$init($Locale);
		$nc(this->_out)->println($$str({"    BranchInstruction "_s, name, " = _factory.createBranchInstruction("_s, BCELFactory::CONSTANT_PREFIX, $($nc($(bi->getName()))->toUpperCase($Locale::ENGLISH)), ", "_s, target, ");"_s}));
	}
	if (bh->hasTargeters()) {
		$nc(this->_out)->println($$str({"    ih_"_s, $$str(pos), " = il.append("_s, name, ");"_s}));
	} else {
		$nc(this->_out)->println($$str({"    il.append("_s, name, ");"_s}));
	}
}

void BCELFactory::visitRET($RET* i) {
	$useLocalCurrentObjectStackCache();
	$nc(this->_out)->println($$str({"il.append(new RET("_s, $$str($nc(i)->getIndex()), ")));"_s}));
}

void BCELFactory::updateBranchTargets() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->branches)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($BranchInstruction, bi, $cast($BranchInstruction, i$->next()));
			{
				$var($BranchHandle, bh, $cast($BranchHandle, $nc(this->branch_map)->get(bi)));
				int32_t pos = $nc(bh)->getPosition();
				$var($String, name, $str({$($nc(bi)->getName()), "_"_s, $$str(pos)}));
				int32_t t_pos = $nc($(bh->getTarget()))->getPosition();
				$nc(this->_out)->println($$str({"    "_s, name, ".setTarget(ih_"_s, $$str(t_pos), ");"_s}));
				if ($instanceOf($Select, bi)) {
					$var($InstructionHandleArray, ihs, $nc(($cast($Select, bi)))->getTargets());
					for (int32_t j = 0; j < $nc(ihs)->length; ++j) {
						t_pos = $nc(ihs->get(j))->getPosition();
						$nc(this->_out)->println($$str({"    "_s, name, ".setTarget("_s, $$str(j), ", ih_"_s, $$str(t_pos), ");"_s}));
					}
				}
			}
		}
	}
}

void BCELFactory::updateExceptionHandlers() {
	$useLocalCurrentObjectStackCache();
	$var($CodeExceptionGenArray, handlers, $nc(this->_mg)->getExceptionHandlers());
	{
		$var($CodeExceptionGenArray, arr$, handlers);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CodeExceptionGen, h, arr$->get(i$));
			{
				$var($String, type, ($nc(h)->getCatchType() == nullptr) ? "null"_s : $BCELifier::printType($(static_cast<$Type*>($nc(h)->getCatchType()))));
				$var($String, var$5, $$str({"    method.addExceptionHandler(ih_"_s, $$str($nc($($nc(h)->getStartPC()))->getPosition()), ", ih_"_s}));
				$var($String, var$4, $$concat(var$5, $$str($nc($(h->getEndPC()))->getPosition())));
				$var($String, var$3, $$concat(var$4, ", ih_"_s));
				$var($String, var$2, $$concat(var$3, $$str($nc($(h->getHandlerPC()))->getPosition())));
				$var($String, var$1, $$concat(var$2, ", "_s));
				$var($String, var$0, $$concat(var$1, type));
				$nc(this->_out)->println($$concat(var$0, ");"_s));
			}
		}
	}
}

void clinit$BCELFactory($Class* class$) {
	$load($Const);
	$assignStatic(BCELFactory::CONSTANT_PREFIX, $str({$($Const::class$->getSimpleName()), "."_s}));
}

BCELFactory::BCELFactory() {
}

$Class* BCELFactory::load$($String* name, bool initialize) {
	$loadClass(BCELFactory, name, initialize, &_BCELFactory_ClassInfo_, clinit$BCELFactory, allocate$BCELFactory);
	return class$;
}

$Class* BCELFactory::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com