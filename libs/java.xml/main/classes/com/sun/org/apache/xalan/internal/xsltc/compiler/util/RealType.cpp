#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>

#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/DLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/DSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/IntType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NumberType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

#undef ADD
#undef BASIS_LIBRARY_CLASS
#undef CMP
#undef D2F
#undef D2I
#undef D2L
#undef DADD
#undef DATA_CONVERSION_ERR
#undef DCMPG
#undef DCMPL
#undef DCONST_0
#undef DDIV
#undef DIV
#undef DMUL
#undef DNEG
#undef DOUBLE
#undef DOUBLE_CLASS
#undef DOUBLE_VALUE
#undef DOUBLE_VALUE_SIG
#undef DREM
#undef DSUB
#undef DUP
#undef DUP2
#undef DUP_X2
#undef F2D
#undef FATAL
#undef I2B
#undef I2C
#undef I2D
#undef I2S
#undef ICONST_0
#undef ICONST_1
#undef L2D
#undef LOAD
#undef MAX_VALUE
#undef MUL
#undef NEG
#undef NOP
#undef POP
#undef POP2
#undef REM
#undef STORE
#undef STRING_SIG
#undef SUB
#undef TYPE

using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $DLOAD = ::com::sun::org::apache::bcel::internal::generic::DLOAD;
using $DSTORE = ::com::sun::org::apache::bcel::internal::generic::DSTORE;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $IFNE = ::com::sun::org::apache::bcel::internal::generic::IFNE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionConst = ::com::sun::org::apache::bcel::internal::generic::InstructionConst;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $IntType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::IntType;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NumberType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NumberType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$MethodInfo _RealType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(RealType, init$, void)},
	{"ADD", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(RealType, ADD, $Instruction*)},
	{"CMP", "(Z)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(RealType, CMP, $Instruction*, bool)},
	{"DIV", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(RealType, DIV, $Instruction*)},
	{"DUP", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(RealType, DUP, $Instruction*)},
	{"LOAD", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(RealType, LOAD, $Instruction*, int32_t)},
	{"MUL", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(RealType, MUL, $Instruction*)},
	{"NEG", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(RealType, NEG, $Instruction*)},
	{"POP", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(RealType, POP, $Instruction*)},
	{"REM", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(RealType, REM, $Instruction*)},
	{"STORE", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(RealType, STORE, $Instruction*, int32_t)},
	{"SUB", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(RealType, SUB, $Instruction*)},
	{"distanceTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)I", nullptr, $PUBLIC, $virtualMethod(RealType, distanceTo, int32_t, $Type*)},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC, $virtualMethod(RealType, identicalTo, bool, $Type*)},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(RealType, toJCType, $1Type*)},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RealType, toSignature, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RealType, toString, $String*)},
	{"translateBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(RealType, translateBox, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateFrom", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(RealType, translateFrom, void, $ClassGenerator*, $MethodGenerator*, $Class*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC, $virtualMethod(RealType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $Type*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType;)V", nullptr, $PUBLIC, $method(RealType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $StringType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)V", nullptr, $PUBLIC, $method(RealType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $BooleanType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/IntType;)V", nullptr, $PUBLIC, $method(RealType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $IntType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType;)V", nullptr, $PUBLIC, $method(RealType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $ReferenceType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(RealType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $Class*)},
	{"translateToDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $virtualMethod(RealType, translateToDesynthesized, $FlowList*, $ClassGenerator*, $MethodGenerator*, $BooleanType*)},
	{"translateUnBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(RealType, translateUnBox, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _RealType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.RealType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.NumberType",
	nullptr,
	nullptr,
	_RealType_MethodInfo_
};

$Object* allocate$RealType($Class* clazz) {
	return $of($alloc(RealType));
}

void RealType::init$() {
	$NumberType::init$();
}

$String* RealType::toString() {
	return "real"_s;
}

bool RealType::identicalTo($Type* other) {
	return $equals(this, other);
}

$String* RealType::toSignature() {
	return "D"_s;
}

$1Type* RealType::toJCType() {
	$init($1Type);
	return $1Type::DOUBLE;
}

int32_t RealType::distanceTo($Type* type) {
	if ($equals(type, this)) {
		return 0;
	} else {
		$init($Type);
		if (type == $Type::Int) {
			return 1;
		} else {
			return $Integer::MAX_VALUE;
		}
	}
}

void RealType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Type* type) {
	$useLocalCurrentObjectStackCache();
	$init($Type);
	if (type == $Type::String) {
		translateTo(classGen, methodGen, $cast($StringType, type));
	} else {
		if (type == $Type::Boolean) {
			translateTo(classGen, methodGen, $cast($BooleanType, type));
		} else {
			if (type == $Type::Reference) {
				translateTo(classGen, methodGen, $cast($ReferenceType, type));
			} else {
				if (type == $Type::Int) {
					translateTo(classGen, methodGen, $cast($IntType, type));
				} else {
					$init($ErrorMsg);
					$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
					$var($Object, var$1, $of(toString()));
					$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of($nc(type)->toString()))));
					$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
				}
			}
		}
	}
}

void RealType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $StringType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "realToString"_s, $$str({"(D)"_s, $Constants::STRING_SIG})))));
}

void RealType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($FlowList, falsel, translateToDesynthesized(classGen, methodGen, type));
	$init($Constants);
	$nc(il)->append($Constants::ICONST_1);
	$var($BranchHandle, truec, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$nc(falsel)->backPatch($(il->append($Constants::ICONST_0)));
	$nc(truec)->setTarget($(il->append($Constants::NOP)));
}

void RealType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $IntType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "realToInt"_s, "(D)I"_s))));
}

$FlowList* RealType::translateToDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($LocalVariableGen, local, nullptr);
	$var($FlowList, flowlist, $new($FlowList));
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($Constants::DUP2));
	$init($1Type);
	$assign(local, methodGen->addLocalVariable("real_to_boolean_tmp"_s, $1Type::DOUBLE, nullptr, nullptr));
	$nc(local)->setStart($(il->append(static_cast<$Instruction*>($$new($DSTORE, local->getIndex())))));
	il->append($Constants::DCONST_0);
	il->append($Constants::DCMPG);
	flowlist->add($(il->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr)))));
	il->append(static_cast<$Instruction*>($$new($DLOAD, local->getIndex())));
	local->setEnd($(il->append(static_cast<$Instruction*>($$new($DLOAD, local->getIndex())))));
	il->append($Constants::DCMPG);
	flowlist->add($(il->append(static_cast<$BranchInstruction*>($$new($IFNE, nullptr)))));
	return flowlist;
}

void RealType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ReferenceType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($NEW, $nc(cpg)->addClass($Constants::DOUBLE_CLASS))));
	il->append(static_cast<$Instruction*>($Constants::DUP_X2));
	il->append(static_cast<$Instruction*>($Constants::DUP_X2));
	il->append(static_cast<$Instruction*>($Constants::POP));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref($Constants::DOUBLE_CLASS, "<init>"_s, "(D)V"_s))));
}

void RealType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Character);
	if (clazz == $Character::TYPE) {
		$init($Constants);
		$nc(il)->append(static_cast<$Instruction*>($Constants::D2I));
		il->append(static_cast<$Instruction*>($Constants::I2C));
	} else {
		$init($Byte);
		if (clazz == $Byte::TYPE) {
			$init($Constants);
			$nc(il)->append(static_cast<$Instruction*>($Constants::D2I));
			il->append(static_cast<$Instruction*>($Constants::I2B));
		} else {
			$init($Short);
			if (clazz == $Short::TYPE) {
				$init($Constants);
				$nc(il)->append(static_cast<$Instruction*>($Constants::D2I));
				il->append(static_cast<$Instruction*>($Constants::I2S));
			} else {
				$init($Integer);
				if (clazz == $Integer::TYPE) {
					$init($Constants);
					$nc(il)->append(static_cast<$Instruction*>($Constants::D2I));
				} else {
					$init($Long);
					if (clazz == $Long::TYPE) {
						$init($Constants);
						$nc(il)->append(static_cast<$Instruction*>($Constants::D2L));
					} else {
						$init($Float);
						if (clazz == $Float::TYPE) {
							$init($Constants);
							$nc(il)->append(static_cast<$Instruction*>($Constants::D2F));
						} else {
							$init($Double);
							if (clazz == $Double::TYPE) {
								$init($Constants);
								$nc(il)->append($Constants::NOP);
							} else {
								if ($nc(clazz)->isAssignableFrom($Double::class$)) {
									$init($Type);
									translateTo(classGen, methodGen, $Type::Reference);
								} else {
									$init($ErrorMsg);
									$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
									$var($Object, var$1, $of(toString()));
									$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of(clazz->getName()))));
									$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
								}
							}
						}
					}
				}
			}
		}
	}
}

void RealType::translateFrom($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Character);
	$init($Byte);
	$init($Short);
	$init($Integer);
	if (clazz == $Character::TYPE || clazz == $Byte::TYPE || clazz == $Short::TYPE || clazz == $Integer::TYPE) {
		$init($Constants);
		$nc(il)->append(static_cast<$Instruction*>($Constants::I2D));
	} else {
		$init($Long);
		if (clazz == $Long::TYPE) {
			$init($Constants);
			$nc(il)->append(static_cast<$Instruction*>($Constants::L2D));
		} else {
			$init($Float);
			if (clazz == $Float::TYPE) {
				$init($Constants);
				$nc(il)->append(static_cast<$Instruction*>($Constants::F2D));
			} else {
				$init($Double);
				if (clazz == $Double::TYPE) {
					$init($Constants);
					$nc(il)->append($Constants::NOP);
				} else {
					$init($ErrorMsg);
					$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
					$var($Object, var$1, $of(toString()));
					$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of($nc(clazz)->getName()))));
					$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
				}
			}
		}
	}
}

void RealType::translateBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init($Type);
	translateTo(classGen, methodGen, $Type::Reference);
}

void RealType::translateUnBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($CHECKCAST, $nc(cpg)->addClass($Constants::DOUBLE_CLASS))));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref($Constants::DOUBLE_CLASS, $Constants::DOUBLE_VALUE, $Constants::DOUBLE_VALUE_SIG))));
}

$Instruction* RealType::ADD() {
	$init($InstructionConst);
	return $InstructionConst::DADD;
}

$Instruction* RealType::SUB() {
	$init($InstructionConst);
	return $InstructionConst::DSUB;
}

$Instruction* RealType::MUL() {
	$init($InstructionConst);
	return $InstructionConst::DMUL;
}

$Instruction* RealType::DIV() {
	$init($InstructionConst);
	return $InstructionConst::DDIV;
}

$Instruction* RealType::REM() {
	$init($InstructionConst);
	return $InstructionConst::DREM;
}

$Instruction* RealType::NEG() {
	$init($InstructionConst);
	return $InstructionConst::DNEG;
}

$Instruction* RealType::LOAD(int32_t slot) {
	return $new($DLOAD, slot);
}

$Instruction* RealType::STORE(int32_t slot) {
	return $new($DSTORE, slot);
}

$Instruction* RealType::POP() {
	$init($Constants);
	return $Constants::POP2;
}

$Instruction* RealType::CMP(bool less) {
	$init($InstructionConst);
	return less ? $InstructionConst::DCMPG : $InstructionConst::DCMPL;
}

$Instruction* RealType::DUP() {
	$init($Constants);
	return $Constants::DUP2;
}

RealType::RealType() {
}

$Class* RealType::load$($String* name, bool initialize) {
	$loadClass(RealType, name, initialize, &_RealType_ClassInfo_, allocate$RealType);
	return class$;
}

$Class* RealType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com