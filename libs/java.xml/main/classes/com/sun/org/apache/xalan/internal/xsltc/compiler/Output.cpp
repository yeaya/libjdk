#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Output.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/serializer/Encodings.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Properties.h>
#include <java/util/StringTokenizer.h>
#include <javax/xml/transform/OutputKeys.h>
#include <jcpp.h>

#undef CDATA_SECTION_ELEMENTS
#undef DOCTYPE_PUBLIC
#undef DOCTYPE_SYSTEM
#undef DUP
#undef EMPTYSTRING
#undef ENCODING
#undef ERROR
#undef HTML_VERSION
#undef INDENT
#undef INVALID_METHOD_IN_OUTPUT
#undef INVALID_QNAME_ERR
#undef MEDIA_TYPE
#undef METHOD
#undef OMIT_XML_DECLARATION
#undef POP
#undef STANDALONE
#undef STRING_SIG
#undef TRANSLET_CLASS
#undef UNSUPPORTED_ENCODING
#undef VERSION
#undef WARNING
#undef XML_VERSION

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $Encodings = ::com::sun::org::apache::xml::internal::serializer::Encodings;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Properties = ::java::util::Properties;
using $StringTokenizer = ::java::util::StringTokenizer;
using $OutputKeys = ::javax::xml::transform::OutputKeys;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _Output_FieldInfo_[] = {
	{"_version", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Output, _version)},
	{"_method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Output, _method)},
	{"_encoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Output, _encoding)},
	{"_omitHeader", "Z", nullptr, $PRIVATE, $field(Output, _omitHeader)},
	{"_standalone", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Output, _standalone)},
	{"_doctypePublic", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Output, _doctypePublic)},
	{"_doctypeSystem", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Output, _doctypeSystem)},
	{"_cdata", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Output, _cdata)},
	{"_indent", "Z", nullptr, $PRIVATE, $field(Output, _indent)},
	{"_mediaType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Output, _mediaType)},
	{"_indentamount", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Output, _indentamount)},
	{"_disabled", "Z", nullptr, $PRIVATE, $field(Output, _disabled)},
	{"STRING_SIG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Output, STRING_SIG)},
	{"XML_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Output, XML_VERSION)},
	{"HTML_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Output, HTML_VERSION)},
	{}
};

$MethodInfo _Output_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Output, init$, void)},
	{"disable", "()V", nullptr, $PUBLIC, $method(Output, disable, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(Output, display, void, int32_t)},
	{"enabled", "()Z", nullptr, $PUBLIC, $method(Output, enabled, bool)},
	{"getCdata", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Output, getCdata, $String*)},
	{"getOutputMethod", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Output, getOutputMethod, $String*)},
	{"mergeOutput", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Output;)V", nullptr, $PUBLIC, $method(Output, mergeOutput, void, Output*)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Output, parseContents, void, $Parser*)},
	{"transferAttribute", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Output;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Output, transferAttribute, void, Output*, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Output, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _Output_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Output",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement",
	nullptr,
	_Output_FieldInfo_,
	_Output_MethodInfo_
};

$Object* allocate$Output($Class* clazz) {
	return $of($alloc(Output));
}

$String* Output::STRING_SIG = nullptr;
$String* Output::XML_VERSION = nullptr;
$String* Output::HTML_VERSION = nullptr;

void Output::init$() {
	$TopLevelElement::init$();
	this->_omitHeader = false;
	this->_indent = false;
	this->_disabled = false;
}

void Output::display(int32_t indent) {
	this->indent(indent);
	$Util::println($$str({"Output "_s, this->_method}));
}

void Output::disable() {
	this->_disabled = true;
}

bool Output::enabled() {
	return !this->_disabled;
}

$String* Output::getCdata() {
	return this->_cdata;
}

$String* Output::getOutputMethod() {
	return this->_method;
}

void Output::transferAttribute(Output* previous, $String* qname) {
	bool var$0 = !hasAttribute(qname);
	if (var$0 && $nc(previous)->hasAttribute(qname)) {
		addAttribute(qname, $(previous->getAttribute(qname)));
	}
}

void Output::mergeOutput(Output* previous) {
	$useLocalCurrentObjectStackCache();
	transferAttribute(previous, "version"_s);
	transferAttribute(previous, "method"_s);
	transferAttribute(previous, "encoding"_s);
	transferAttribute(previous, "doctype-system"_s);
	transferAttribute(previous, "doctype-public"_s);
	transferAttribute(previous, "media-type"_s);
	transferAttribute(previous, "indent"_s);
	transferAttribute(previous, "omit-xml-declaration"_s);
	transferAttribute(previous, "standalone"_s);
	if ($nc(previous)->hasAttribute("cdata-section-elements"_s)) {
		$var($String, var$0, $$str({$(previous->getAttribute("cdata-section-elements"_s)), $$str(u' ')}));
		addAttribute("cdata-section-elements"_s, $$concat(var$0, $(getAttribute("cdata-section-elements"_s))));
	}
	$var($String, prefix, lookupPrefix("http://xml.apache.org/xalan"_s));
	if (prefix != nullptr) {
		transferAttribute(previous, $$str({prefix, $$str(u':'), "indent-amount"_s}));
	}
	$assign(prefix, lookupPrefix("http://xml.apache.org/xslt"_s));
	if (prefix != nullptr) {
		transferAttribute(previous, $$str({prefix, $$str(u':'), "indent-amount"_s}));
	}
}

void Output::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($Properties, outputProperties, $new($Properties));
	$nc(parser)->setOutput(this);
	if (this->_disabled) {
		return;
	}
	$var($String, attrib, nullptr);
	$set(this, _version, getAttribute("version"_s));
	$init($Constants);
	if ($nc(this->_version)->equals($Constants::EMPTYSTRING)) {
		$set(this, _version, nullptr);
	} else {
		$init($OutputKeys);
		outputProperties->setProperty($OutputKeys::VERSION, this->_version);
	}
	$set(this, _method, getAttribute("method"_s));
	if ($nc(this->_method)->equals($Constants::EMPTYSTRING)) {
		$set(this, _method, nullptr);
	}
	if (this->_method != nullptr) {
		$set(this, _method, $nc(this->_method)->toLowerCase());
		bool var$2 = ($nc(this->_method)->equals("xml"_s));
		bool var$1 = var$2 || ($nc(this->_method)->equals("html"_s));
		bool var$0 = var$1 || ($nc(this->_method)->equals("text"_s));
		if (!var$0) {
			bool var$3 = $XML11Char::isXML11ValidQName(this->_method);
			var$0 = (var$3 && ($nc(this->_method)->indexOf(":"_s) > 0));
		}
		if (var$0) {
			$init($OutputKeys);
			outputProperties->setProperty($OutputKeys::METHOD, this->_method);
		} else {
			$init($ErrorMsg);
			reportError(this, parser, $ErrorMsg::INVALID_METHOD_IN_OUTPUT, this->_method);
		}
	}
	$set(this, _encoding, getAttribute("encoding"_s));
	if ($nc(this->_encoding)->equals($Constants::EMPTYSTRING)) {
		$set(this, _encoding, nullptr);
	} else {
		try {
			$var($String, canonicalEncoding, nullptr);
			$assign(canonicalEncoding, $Encodings::convertMime2JavaEncoding(this->_encoding));
			$var($OutputStreamWriter, writer, $new($OutputStreamWriter, static_cast<$OutputStream*>($System::out), canonicalEncoding));
		} catch ($UnsupportedEncodingException& e) {
			$init($ErrorMsg);
			$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::UNSUPPORTED_ENCODING, $of(this->_encoding), static_cast<$SyntaxTreeNode*>(this)));
			parser->reportError($Constants::WARNING, msg);
		}
		$init($OutputKeys);
		outputProperties->setProperty($OutputKeys::ENCODING, this->_encoding);
	}
	$assign(attrib, getAttribute("omit-xml-declaration"_s));
	if (!$nc(attrib)->equals($Constants::EMPTYSTRING)) {
		if (attrib->equals("yes"_s)) {
			this->_omitHeader = true;
		}
		$init($OutputKeys);
		outputProperties->setProperty($OutputKeys::OMIT_XML_DECLARATION, attrib);
	}
	$set(this, _standalone, getAttribute("standalone"_s));
	if ($nc(this->_standalone)->equals($Constants::EMPTYSTRING)) {
		$set(this, _standalone, nullptr);
	} else {
		$init($OutputKeys);
		outputProperties->setProperty($OutputKeys::STANDALONE, this->_standalone);
	}
	$set(this, _doctypeSystem, getAttribute("doctype-system"_s));
	if ($nc(this->_doctypeSystem)->equals($Constants::EMPTYSTRING)) {
		$set(this, _doctypeSystem, nullptr);
	} else {
		$init($OutputKeys);
		outputProperties->setProperty($OutputKeys::DOCTYPE_SYSTEM, this->_doctypeSystem);
	}
	$set(this, _doctypePublic, getAttribute("doctype-public"_s));
	if ($nc(this->_doctypePublic)->equals($Constants::EMPTYSTRING)) {
		$set(this, _doctypePublic, nullptr);
	} else {
		$init($OutputKeys);
		outputProperties->setProperty($OutputKeys::DOCTYPE_PUBLIC, this->_doctypePublic);
	}
	$set(this, _cdata, getAttribute("cdata-section-elements"_s));
	if ($nc(this->_cdata)->equals($Constants::EMPTYSTRING)) {
		$set(this, _cdata, nullptr);
	} else {
		$var($StringBuffer, expandedNames, $new($StringBuffer));
		$var($StringTokenizer, tokens, $new($StringTokenizer, this->_cdata));
		while (tokens->hasMoreTokens()) {
			$var($String, qname, tokens->nextToken());
			if (!$XML11Char::isXML11ValidQName(qname)) {
				$init($ErrorMsg);
				$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(qname), static_cast<$SyntaxTreeNode*>(this)));
				parser->reportError($Constants::ERROR, err);
			}
			expandedNames->append($($nc($(parser->getQName(qname)))->toString()))->append(u' ');
		}
		$set(this, _cdata, expandedNames->toString());
		$init($OutputKeys);
		outputProperties->setProperty($OutputKeys::CDATA_SECTION_ELEMENTS, this->_cdata);
	}
	$assign(attrib, getAttribute("indent"_s));
	if (!$nc(attrib)->equals($Constants::EMPTYSTRING)) {
		if (attrib->equals("yes"_s)) {
			this->_indent = true;
		}
		$init($OutputKeys);
		outputProperties->setProperty($OutputKeys::INDENT, attrib);
	} else if (this->_method != nullptr && $nc(this->_method)->equals("html"_s)) {
		this->_indent = true;
	}
	$set(this, _indentamount, getAttribute($(lookupPrefix("http://xml.apache.org/xalan"_s)), "indent-amount"_s));
	if ($nc(this->_indentamount)->equals($Constants::EMPTYSTRING)) {
		$set(this, _indentamount, getAttribute($(lookupPrefix("http://xml.apache.org/xslt"_s)), "indent-amount"_s));
	}
	if (!$nc(this->_indentamount)->equals($Constants::EMPTYSTRING)) {
		outputProperties->setProperty("indent_amount"_s, this->_indentamount);
	}
	$set(this, _mediaType, getAttribute("media-type"_s));
	if ($nc(this->_mediaType)->equals($Constants::EMPTYSTRING)) {
		$set(this, _mediaType, nullptr);
	} else {
		$init($OutputKeys);
		outputProperties->setProperty($OutputKeys::MEDIA_TYPE, this->_mediaType);
	}
	if (this->_method != nullptr) {
		if ($nc(this->_method)->equals("html"_s)) {
			if (this->_version == nullptr) {
				$set(this, _version, Output::HTML_VERSION);
			}
			if (this->_mediaType == nullptr) {
				$set(this, _mediaType, "text/html"_s);
			}
		} else if ($nc(this->_method)->equals("text"_s)) {
			if (this->_mediaType == nullptr) {
				$set(this, _mediaType, "text/plain"_s);
			}
		}
	}
	$nc($(parser->getCurrentStylesheet()))->setOutputProperties(outputProperties);
}

void Output::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	if (this->_disabled) {
		return;
	}
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	int32_t field = 0;
	$nc(il)->append($(classGen->loadTranslet()));
	if ((this->_version != nullptr) && (!$nc(this->_version)->equals(Output::XML_VERSION))) {
		$init($Constants);
		field = $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, "_version"_s, Output::STRING_SIG);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_version)));
		il->append(static_cast<$Instruction*>($$new($PUTFIELD, field)));
	}
	if (this->_method != nullptr) {
		$init($Constants);
		field = $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, "_method"_s, Output::STRING_SIG);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_method)));
		il->append(static_cast<$Instruction*>($$new($PUTFIELD, field)));
	}
	if (this->_encoding != nullptr) {
		$init($Constants);
		field = $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, "_encoding"_s, Output::STRING_SIG);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_encoding)));
		il->append(static_cast<$Instruction*>($$new($PUTFIELD, field)));
	}
	if (this->_omitHeader) {
		$init($Constants);
		field = $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, "_omitHeader"_s, "Z"_s);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_omitHeader)));
		il->append(static_cast<$Instruction*>($$new($PUTFIELD, field)));
	}
	if (this->_standalone != nullptr) {
		$init($Constants);
		field = $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, "_standalone"_s, Output::STRING_SIG);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_standalone)));
		il->append(static_cast<$Instruction*>($$new($PUTFIELD, field)));
	}
	$init($Constants);
	field = $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, "_doctypeSystem"_s, Output::STRING_SIG);
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_doctypeSystem)));
	il->append(static_cast<$Instruction*>($$new($PUTFIELD, field)));
	field = cpg->addFieldref($Constants::TRANSLET_CLASS, "_doctypePublic"_s, Output::STRING_SIG);
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_doctypePublic)));
	il->append(static_cast<$Instruction*>($$new($PUTFIELD, field)));
	if (this->_mediaType != nullptr) {
		field = cpg->addFieldref($Constants::TRANSLET_CLASS, "_mediaType"_s, Output::STRING_SIG);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_mediaType)));
		il->append(static_cast<$Instruction*>($$new($PUTFIELD, field)));
	}
	if (this->_indent) {
		field = cpg->addFieldref($Constants::TRANSLET_CLASS, "_indent"_s, "Z"_s);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_indent)));
		il->append(static_cast<$Instruction*>($$new($PUTFIELD, field)));
	}
	if (this->_indentamount != nullptr && !$nc(this->_indentamount)->equals($Constants::EMPTYSTRING)) {
		field = cpg->addFieldref($Constants::TRANSLET_CLASS, "_indentamount"_s, "I"_s);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Integer::parseInt(this->_indentamount))));
		il->append(static_cast<$Instruction*>($$new($PUTFIELD, field)));
	}
	if (this->_cdata != nullptr) {
		int32_t index = cpg->addMethodref($Constants::TRANSLET_CLASS, "addCdataElement"_s, "(Ljava/lang/String;)V"_s);
		$var($StringTokenizer, tokens, $new($StringTokenizer, this->_cdata));
		while (tokens->hasMoreTokens()) {
			il->append(static_cast<$Instruction*>($Constants::DUP));
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $(tokens->nextToken()))));
			il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, index)));
		}
	}
	il->append(static_cast<$Instruction*>($Constants::POP));
}

Output::Output() {
}

void clinit$Output($Class* class$) {
	$assignStatic(Output::STRING_SIG, "Ljava/lang/String;"_s);
	$assignStatic(Output::XML_VERSION, "1.0"_s);
	$assignStatic(Output::HTML_VERSION, "4.0"_s);
}

$Class* Output::load$($String* name, bool initialize) {
	$loadClass(Output, name, initialize, &_Output_ClassInfo_, clinit$Output, allocate$Output);
	return class$;
}

$Class* Output::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com