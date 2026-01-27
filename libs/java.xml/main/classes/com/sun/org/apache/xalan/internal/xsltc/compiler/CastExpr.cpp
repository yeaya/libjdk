#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPNE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/SIPUSH.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Step.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MultiHashtable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ResultTreeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef DATA_CONVERSION_ERR
#undef DOM_INTF
#undef SELF

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $IF_ICMPNE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPNE;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $SIPUSH = ::com::sun::org::apache::bcel::internal::generic::SIPUSH;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Step = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Step;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $MultiHashtable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MultiHashtable;
using $NodeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType;
using $ResultTreeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ResultTreeType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _CastExpr_FieldInfo_[] = {
	{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE | $FINAL, $field(CastExpr, _left)},
	{"InternalTypeMap", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MultiHashtable;", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MultiHashtable<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CastExpr, InternalTypeMap)},
	{"_typeTest", "Z", nullptr, $PRIVATE, $field(CastExpr, _typeTest)},
	{}
};

$MethodInfo _CastExpr_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC, $method(CastExpr, init$, void, $Expression*, $Type*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{"getExpr", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PUBLIC, $method(CastExpr, getExpr, $Expression*)},
	{"hasLastCall", "()Z", nullptr, $PUBLIC, $virtualMethod(CastExpr, hasLastCall, bool)},
	{"hasPositionCall", "()Z", nullptr, $PUBLIC, $virtualMethod(CastExpr, hasPositionCall, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CastExpr, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(CastExpr, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(CastExpr, translateDesynthesized, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(CastExpr, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _CastExpr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.CastExpr",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_CastExpr_FieldInfo_,
	_CastExpr_MethodInfo_
};

$Object* allocate$CastExpr($Class* clazz) {
	return $of($alloc(CastExpr));
}

$MultiHashtable* CastExpr::InternalTypeMap = nullptr;

void CastExpr::init$($Expression* left, $Type* type) {
	$useLocalCurrentObjectStackCache();
	$Expression::init$();
	this->_typeTest = false;
	$set(this, _left, left);
	$set(this, _type, type);
	$init($Type);
	if (($instanceOf($Step, this->_left)) && (this->_type == $Type::Boolean)) {
		$var($Step, step, $cast($Step, this->_left));
		bool var$0 = ($nc(step)->getAxis() == $Axis::SELF);
		if (var$0 && (step->getNodeType() != -1)) {
			this->_typeTest = true;
		}
	}
	setParser($($nc(left)->getParser()));
	setParent($($nc(left)->getParent()));
	$nc(left)->setParent(this);
	typeCheck($($nc($(left->getParser()))->getSymbolTable()));
}

$Expression* CastExpr::getExpr() {
	return this->_left;
}

bool CastExpr::hasPositionCall() {
	return ($nc(this->_left)->hasPositionCall());
}

bool CastExpr::hasLastCall() {
	return ($nc(this->_left)->hasLastCall());
}

$String* CastExpr::toString() {
	return $str({"cast("_s, this->_left, ", "_s, this->_type, ")"_s});
}

$Type* CastExpr::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($Type, tleft, $nc(this->_left)->getType());
	if (tleft == nullptr) {
		$assign(tleft, $nc(this->_left)->typeCheck(stable));
	}
	if ($instanceOf($NodeType, tleft)) {
		$init($Type);
		$assign(tleft, $Type::Node);
	} else if ($instanceOf($ResultTreeType, tleft)) {
		$init($Type);
		$assign(tleft, $Type::ResultTree);
	}
	if ($nc(CastExpr::InternalTypeMap)->maps(tleft, this->_type) != nullptr) {
		return this->_type;
	}
	$init($ErrorMsg);
	$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
	$var($Object, var$1, $of($nc(tleft)->toString()));
	$throwNew($TypeCheckError, $$new($ErrorMsg, var$0, var$1, $($of($nc(this->_type)->toString()))));
}

void CastExpr::translateDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($FlowList, fl, nullptr);
	$var($Type, ltype, $nc(this->_left)->getType());
	if (this->_typeTest) {
		$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
		$var($InstructionList, il, $nc(methodGen)->getInstructionList());
		$init($Constants);
		int32_t idx = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getExpandedTypeID"_s, "(I)I"_s);
		$nc(il)->append(static_cast<$Instruction*>($$new($SIPUSH, (int16_t)$nc(($cast($Step, this->_left)))->getNodeType())));
		il->append($(methodGen->loadDOM()));
		il->append($(methodGen->loadContextNode()));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, idx, 2)));
		$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($IF_ICMPNE, nullptr)))));
	} else {
		$nc(this->_left)->translate(classGen, methodGen);
		if (this->_type != ltype) {
			$nc(this->_left)->startIterator(classGen, methodGen);
			if ($instanceOf($BooleanType, this->_type)) {
				$assign(fl, $nc(ltype)->translateToDesynthesized(classGen, methodGen, this->_type));
				if (fl != nullptr) {
					$nc(this->_falseList)->append(fl);
				}
			} else {
				$nc(ltype)->translateTo(classGen, methodGen, this->_type);
			}
		}
	}
}

void CastExpr::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$var($Type, ltype, $nc(this->_left)->getType());
	$nc(this->_left)->translate(classGen, methodGen);
	if ($nc(this->_type)->identicalTo(ltype) == false) {
		$nc(this->_left)->startIterator(classGen, methodGen);
		$nc(ltype)->translateTo(classGen, methodGen, this->_type);
	}
}

void clinit$CastExpr($Class* class$) {
	$assignStatic(CastExpr::InternalTypeMap, $new($MultiHashtable));
	{
		$init($Type);
		$nc(CastExpr::InternalTypeMap)->put($Type::Boolean, $Type::Boolean);
		$nc(CastExpr::InternalTypeMap)->put($Type::Boolean, $Type::Real);
		$nc(CastExpr::InternalTypeMap)->put($Type::Boolean, $Type::String);
		$nc(CastExpr::InternalTypeMap)->put($Type::Boolean, $Type::Reference);
		$nc(CastExpr::InternalTypeMap)->put($Type::Boolean, $Type::Object);
		$nc(CastExpr::InternalTypeMap)->put($Type::Real, $Type::Real);
		$nc(CastExpr::InternalTypeMap)->put($Type::Real, $Type::Int);
		$nc(CastExpr::InternalTypeMap)->put($Type::Real, $Type::Boolean);
		$nc(CastExpr::InternalTypeMap)->put($Type::Real, $Type::String);
		$nc(CastExpr::InternalTypeMap)->put($Type::Real, $Type::Reference);
		$nc(CastExpr::InternalTypeMap)->put($Type::Real, $Type::Object);
		$nc(CastExpr::InternalTypeMap)->put($Type::Int, $Type::Int);
		$nc(CastExpr::InternalTypeMap)->put($Type::Int, $Type::Real);
		$nc(CastExpr::InternalTypeMap)->put($Type::Int, $Type::Boolean);
		$nc(CastExpr::InternalTypeMap)->put($Type::Int, $Type::String);
		$nc(CastExpr::InternalTypeMap)->put($Type::Int, $Type::Reference);
		$nc(CastExpr::InternalTypeMap)->put($Type::Int, $Type::Object);
		$nc(CastExpr::InternalTypeMap)->put($Type::String, $Type::String);
		$nc(CastExpr::InternalTypeMap)->put($Type::String, $Type::Boolean);
		$nc(CastExpr::InternalTypeMap)->put($Type::String, $Type::Real);
		$nc(CastExpr::InternalTypeMap)->put($Type::String, $Type::Reference);
		$nc(CastExpr::InternalTypeMap)->put($Type::String, $Type::Object);
		$nc(CastExpr::InternalTypeMap)->put($Type::NodeSet, $Type::NodeSet);
		$nc(CastExpr::InternalTypeMap)->put($Type::NodeSet, $Type::Boolean);
		$nc(CastExpr::InternalTypeMap)->put($Type::NodeSet, $Type::Real);
		$nc(CastExpr::InternalTypeMap)->put($Type::NodeSet, $Type::String);
		$nc(CastExpr::InternalTypeMap)->put($Type::NodeSet, $Type::Node);
		$nc(CastExpr::InternalTypeMap)->put($Type::NodeSet, $Type::Reference);
		$nc(CastExpr::InternalTypeMap)->put($Type::NodeSet, $Type::Object);
		$nc(CastExpr::InternalTypeMap)->put($Type::Node, $Type::Node);
		$nc(CastExpr::InternalTypeMap)->put($Type::Node, $Type::Boolean);
		$nc(CastExpr::InternalTypeMap)->put($Type::Node, $Type::Real);
		$nc(CastExpr::InternalTypeMap)->put($Type::Node, $Type::String);
		$nc(CastExpr::InternalTypeMap)->put($Type::Node, $Type::NodeSet);
		$nc(CastExpr::InternalTypeMap)->put($Type::Node, $Type::Reference);
		$nc(CastExpr::InternalTypeMap)->put($Type::Node, $Type::Object);
		$nc(CastExpr::InternalTypeMap)->put($Type::ResultTree, $Type::ResultTree);
		$nc(CastExpr::InternalTypeMap)->put($Type::ResultTree, $Type::Boolean);
		$nc(CastExpr::InternalTypeMap)->put($Type::ResultTree, $Type::Real);
		$nc(CastExpr::InternalTypeMap)->put($Type::ResultTree, $Type::String);
		$nc(CastExpr::InternalTypeMap)->put($Type::ResultTree, $Type::NodeSet);
		$nc(CastExpr::InternalTypeMap)->put($Type::ResultTree, $Type::Reference);
		$nc(CastExpr::InternalTypeMap)->put($Type::ResultTree, $Type::Object);
		$nc(CastExpr::InternalTypeMap)->put($Type::Reference, $Type::Reference);
		$nc(CastExpr::InternalTypeMap)->put($Type::Reference, $Type::Boolean);
		$nc(CastExpr::InternalTypeMap)->put($Type::Reference, $Type::Int);
		$nc(CastExpr::InternalTypeMap)->put($Type::Reference, $Type::Real);
		$nc(CastExpr::InternalTypeMap)->put($Type::Reference, $Type::String);
		$nc(CastExpr::InternalTypeMap)->put($Type::Reference, $Type::Node);
		$nc(CastExpr::InternalTypeMap)->put($Type::Reference, $Type::NodeSet);
		$nc(CastExpr::InternalTypeMap)->put($Type::Reference, $Type::ResultTree);
		$nc(CastExpr::InternalTypeMap)->put($Type::Reference, $Type::Object);
		$nc(CastExpr::InternalTypeMap)->put($Type::Object, $Type::String);
		$nc(CastExpr::InternalTypeMap)->put($Type::Void, $Type::String);
		$nc(CastExpr::InternalTypeMap)->makeUnmodifiable();
	}
}

CastExpr::CastExpr() {
}

$Class* CastExpr::load$($String* name, bool initialize) {
	$loadClass(CastExpr, name, initialize, &_CastExpr_ClassInfo_, clinit$CastExpr, allocate$CastExpr);
	return class$;
}

$Class* CastExpr::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com