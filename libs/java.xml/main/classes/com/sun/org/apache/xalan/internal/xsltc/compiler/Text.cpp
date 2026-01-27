#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Text.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETSTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef OUTPUT_HANDLER
#undef POP
#undef STATIC_CHAR_DATA_FIELD
#undef STATIC_CHAR_DATA_FIELD_SIG
#undef STRING_SIG
#undef SWAP

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETSTATIC = ::com::sun::org::apache::bcel::internal::generic::GETSTATIC;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $LiteralElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralElement;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
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

$FieldInfo _Text_FieldInfo_[] = {
	{"_text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Text, _text)},
	{"_escaping", "Z", nullptr, $PRIVATE, $field(Text, _escaping)},
	{"_ignore", "Z", nullptr, $PRIVATE, $field(Text, _ignore)},
	{"_textElement", "Z", nullptr, $PRIVATE, $field(Text, _textElement)},
	{}
};

$MethodInfo _Text_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Text, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Text, init$, void, $String*)},
	{"canLoadAsArrayOffsetLength", "()Z", nullptr, $PUBLIC, $method(Text, canLoadAsArrayOffsetLength, bool)},
	{"contextDependent", "()Z", nullptr, $PROTECTED, $virtualMethod(Text, contextDependent, bool)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(Text, display, void, int32_t)},
	{"getText", "()Ljava/lang/String;", nullptr, $PROTECTED, $method(Text, getText, $String*)},
	{"ignore", "()V", nullptr, $PUBLIC, $method(Text, ignore, void)},
	{"isIgnore", "()Z", nullptr, $PUBLIC, $method(Text, isIgnore, bool)},
	{"isTextElement", "()Z", nullptr, $PUBLIC, $method(Text, isTextElement, bool)},
	{"isWhitespace", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Text, isWhitespace, bool, char16_t)},
	{"loadAsArrayOffsetLength", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(Text, loadAsArrayOffsetLength, void, $ClassGenerator*, $MethodGenerator*)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Text, parseContents, void, $Parser*)},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(Text, setText, void, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Text, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _Text_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Text",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_Text_FieldInfo_,
	_Text_MethodInfo_
};

$Object* allocate$Text($Class* clazz) {
	return $of($alloc(Text));
}

void Text::init$() {
	$Instruction::init$();
	this->_escaping = true;
	this->_ignore = false;
	this->_textElement = false;
	this->_textElement = true;
}

void Text::init$($String* text) {
	$Instruction::init$();
	this->_escaping = true;
	this->_ignore = false;
	this->_textElement = false;
	$set(this, _text, text);
}

$String* Text::getText() {
	return this->_text;
}

void Text::setText($String* text) {
	if (this->_text == nullptr) {
		$set(this, _text, text);
	} else {
		$set(this, _text, $str({this->_text, text}));
	}
}

void Text::display(int32_t indent) {
	this->indent(indent);
	$Util::println("Text"_s);
	this->indent(indent + $SyntaxTreeNode::IndentIncrement);
	$Util::println(this->_text);
}

void Text::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, getAttribute("disable-output-escaping"_s));
	if ((str != nullptr) && (str->equals("yes"_s))) {
		this->_escaping = false;
	}
	parseChildren(parser);
	if (this->_text == nullptr) {
		if (this->_textElement) {
			$init($Constants);
			$set(this, _text, $Constants::EMPTYSTRING);
		} else {
			this->_ignore = true;
		}
	} else if (this->_textElement) {
		if ($nc(this->_text)->length() == 0) {
			this->_ignore = true;
		}
	} else if ($instanceOf($LiteralElement, $(getParent()))) {
		$var($LiteralElement, element, $cast($LiteralElement, getParent()));
		$var($String, space, $nc(element)->getAttribute("xml:space"_s));
		if ((space == nullptr) || (!$nc(space)->equals("preserve"_s))) {
			int32_t i = 0;
			int32_t textLength = $nc(this->_text)->length();
			for (i = 0; i < textLength; ++i) {
				char16_t c = $nc(this->_text)->charAt(i);
				if (!isWhitespace(c)) {
					break;
				}
			}
			if (i == textLength) {
				this->_ignore = true;
			}
		}
	} else {
		int32_t i = 0;
		int32_t textLength = $nc(this->_text)->length();
		for (i = 0; i < textLength; ++i) {
			char16_t c = $nc(this->_text)->charAt(i);
			if (!isWhitespace(c)) {
				break;
			}
		}
		if (i == textLength) {
			this->_ignore = true;
		}
	}
}

void Text::ignore() {
	this->_ignore = true;
}

bool Text::isIgnore() {
	return this->_ignore;
}

bool Text::isTextElement() {
	return this->_textElement;
}

bool Text::contextDependent() {
	return false;
}

bool Text::isWhitespace(char16_t c) {
	$init(Text);
	return (c == 32 || c == 9 || c == 10 || c == 13);
}

void Text::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (!this->_ignore) {
		$init($Constants);
		int32_t esc = $nc(cpg)->addInterfaceMethodref($Constants::OUTPUT_HANDLER, "setEscaping"_s, "(Z)Z"_s);
		if (!this->_escaping) {
			$nc(il)->append($(methodGen->loadHandler()));
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, false)));
			il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, esc, 2)));
		}
		$nc(il)->append($(methodGen->loadHandler()));
		if (!canLoadAsArrayOffsetLength()) {
			int32_t characters = cpg->addInterfaceMethodref($Constants::OUTPUT_HANDLER, "characters"_s, $$str({"("_s, $Constants::STRING_SIG, ")V"_s}));
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_text)));
			il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, characters, 2)));
		} else {
			int32_t characters = cpg->addInterfaceMethodref($Constants::OUTPUT_HANDLER, "characters"_s, "([CII)V"_s);
			loadAsArrayOffsetLength(classGen, methodGen);
			il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, characters, 4)));
		}
		if (!this->_escaping) {
			il->append($(methodGen->loadHandler()));
			il->append(static_cast<$1Instruction*>($Constants::SWAP));
			il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, esc, 2)));
			il->append(static_cast<$1Instruction*>($Constants::POP));
		}
	}
	translateContents(classGen, methodGen);
}

bool Text::canLoadAsArrayOffsetLength() {
	return ($nc(this->_text)->length() <= 21845);
}

void Text::loadAsArrayOffsetLength($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($XSLTC, xsltc, $nc($(classGen->getParser()))->getXSLTC());
	int32_t offset = $nc(xsltc)->addCharacterData(this->_text);
	int32_t length = $nc(this->_text)->length();
	$init($Constants);
	$var($String, charDataFieldName, $str({$Constants::STATIC_CHAR_DATA_FIELD, $$str((xsltc->getCharacterDataCount() - 1))}));
	$nc(il)->append(static_cast<$1Instruction*>($$new($GETSTATIC, $nc(cpg)->addFieldref($(xsltc->getClassName()), charDataFieldName, $Constants::STATIC_CHAR_DATA_FIELD_SIG))));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, offset)));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $nc(this->_text)->length())));
}

Text::Text() {
}

$Class* Text::load$($String* name, bool initialize) {
	$loadClass(Text, name, initialize, &_Text_ClassInfo_, allocate$Text);
	return class$;
}

$Class* Text::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com