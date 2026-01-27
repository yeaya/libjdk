#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralAttribute.h>

#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SimpleAttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/serializer/ElemDesc.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <jcpp.h>

#undef ATTREMPTY
#undef ATTRURL
#undef HTML_ATTREMPTY
#undef HTML_ATTRURL
#undef NO_BAD_CHARS

using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $AttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $LiteralElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralElement;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SimpleAttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SimpleAttributeValue;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ElemDesc = ::com::sun::org::apache::xml::internal::serializer::ElemDesc;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
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

$FieldInfo _LiteralAttribute_FieldInfo_[] = {
	{"_name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LiteralAttribute, _name)},
	{"_value", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue;", nullptr, $PRIVATE | $FINAL, $field(LiteralAttribute, _value)},
	{}
};

$MethodInfo _LiteralAttribute_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PUBLIC, $method(LiteralAttribute, init$, void, $String*, $String*, $Parser*, $SyntaxTreeNode*)},
	{"contextDependent", "()Z", nullptr, $PROTECTED, $virtualMethod(LiteralAttribute, contextDependent, bool)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(LiteralAttribute, display, void, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(LiteralAttribute, getName, $String*)},
	{"getValue", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue;", nullptr, $PUBLIC, $method(LiteralAttribute, getValue, $AttributeValue*)},
	{"hasBadChars", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(LiteralAttribute, hasBadChars, bool, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(LiteralAttribute, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(LiteralAttribute, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _LiteralAttribute_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.LiteralAttribute",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_LiteralAttribute_FieldInfo_,
	_LiteralAttribute_MethodInfo_
};

$Object* allocate$LiteralAttribute($Class* clazz) {
	return $of($alloc(LiteralAttribute));
}

void LiteralAttribute::init$($String* name, $String* value, $Parser* parser, $SyntaxTreeNode* parent) {
	$Instruction::init$();
	$set(this, _name, name);
	setParent(parent);
	$set(this, _value, $AttributeValue::create(this, value, parser));
}

void LiteralAttribute::display(int32_t indent) {
	this->indent(indent);
	$Util::println($$str({"LiteralAttribute name="_s, this->_name, " value="_s, this->_value}));
}

$Type* LiteralAttribute::typeCheck($SymbolTable* stable) {
	$nc(this->_value)->typeCheck(stable);
	typeCheckContents(stable);
	$init($Type);
	return $Type::Void;
}

bool LiteralAttribute::contextDependent() {
	return $nc(this->_value)->contextDependent();
}

void LiteralAttribute::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append($(methodGen->loadHandler()));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_name)));
	$nc(this->_value)->translate(classGen, methodGen);
	$var($SyntaxTreeNode, parent, getParent());
	if ($instanceOf($LiteralElement, parent) && $nc(($cast($LiteralElement, parent)))->allAttributesUnique()) {
		int32_t flags = 0;
		bool isHTMLAttrEmpty = false;
		$var($ElemDesc, elemDesc, $nc(($cast($LiteralElement, parent)))->getElemDesc());
		if (elemDesc != nullptr) {
			if (elemDesc->isAttrFlagSet(this->_name, $ElemDesc::ATTREMPTY)) {
				flags = flags | $SerializationHandler::HTML_ATTREMPTY;
				isHTMLAttrEmpty = true;
			} else if (elemDesc->isAttrFlagSet(this->_name, $ElemDesc::ATTRURL)) {
				flags = flags | $SerializationHandler::HTML_ATTRURL;
			}
		}
		if ($instanceOf($SimpleAttributeValue, this->_value)) {
			$var($String, attrValue, $nc(($cast($SimpleAttributeValue, this->_value)))->toString());
			if (!hasBadChars(attrValue) && !isHTMLAttrEmpty) {
				flags = flags | $SerializationHandler::NO_BAD_CHARS;
			}
		}
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, flags)));
		il->append($(methodGen->uniqueAttribute()));
	} else {
		il->append($(methodGen->attribute()));
	}
}

bool LiteralAttribute::hasBadChars($String* value) {
	$var($chars, chars, $nc(value)->toCharArray());
	int32_t size = chars->length;
	for (int32_t i = 0; i < size; ++i) {
		char16_t ch = chars->get(i);
		if (ch < 32 || 126 < ch || ch == u'<' || ch == u'>' || ch == u'&' || ch == u'\"') {
			return true;
		}
	}
	return false;
}

$String* LiteralAttribute::getName() {
	return this->_name;
}

$AttributeValue* LiteralAttribute::getValue() {
	return this->_value;
}

LiteralAttribute::LiteralAttribute() {
}

$Class* LiteralAttribute::load$($String* name, bool initialize) {
	$loadClass(LiteralAttribute, name, initialize, &_LiteralAttribute_ClassInfo_, allocate$LiteralAttribute);
	return class$;
}

$Class* LiteralAttribute::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com