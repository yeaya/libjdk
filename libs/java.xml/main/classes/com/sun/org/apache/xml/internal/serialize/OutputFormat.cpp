#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>

#include <com/sun/org/apache/xml/internal/serialize/EncodingInfo.h>
#include <com/sun/org/apache/xml/internal/serialize/Encodings.h>
#include <com/sun/org/apache/xml/internal/serialize/LineSeparator.h>
#include <com/sun/org/apache/xml/internal/serialize/Method.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat$Defaults.h>
#include <jcpp.h>

#undef FOP
#undef HTML
#undef TEXT
#undef XHTML
#undef XML

using $EncodingInfo = ::com::sun::org::apache::xml::internal::serialize::EncodingInfo;
using $Encodings = ::com::sun::org::apache::xml::internal::serialize::Encodings;
using $LineSeparator = ::com::sun::org::apache::xml::internal::serialize::LineSeparator;
using $Method = ::com::sun::org::apache::xml::internal::serialize::Method;
using $OutputFormat$Defaults = ::com::sun::org::apache::xml::internal::serialize::OutputFormat$Defaults;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _OutputFormat_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _OutputFormat_FieldInfo_[] = {
	{"_method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputFormat, _method)},
	{"_version", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputFormat, _version)},
	{"_indent", "I", nullptr, $PRIVATE, $field(OutputFormat, _indent)},
	{"_encoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputFormat, _encoding)},
	{"_encodingInfo", "Lcom/sun/org/apache/xml/internal/serialize/EncodingInfo;", nullptr, $PRIVATE, $field(OutputFormat, _encodingInfo)},
	{"_allowJavaNames", "Z", nullptr, $PRIVATE, $field(OutputFormat, _allowJavaNames)},
	{"_mediaType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputFormat, _mediaType)},
	{"_doctypeSystem", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputFormat, _doctypeSystem)},
	{"_doctypePublic", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputFormat, _doctypePublic)},
	{"_omitXmlDeclaration", "Z", nullptr, $PRIVATE, $field(OutputFormat, _omitXmlDeclaration)},
	{"_omitDoctype", "Z", nullptr, $PRIVATE, $field(OutputFormat, _omitDoctype)},
	{"_omitComments", "Z", nullptr, $PRIVATE, $field(OutputFormat, _omitComments)},
	{"_stripComments", "Z", nullptr, $PRIVATE, $field(OutputFormat, _stripComments)},
	{"_standalone", "Z", nullptr, $PRIVATE, $field(OutputFormat, _standalone)},
	{"_cdataElements", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputFormat, _cdataElements)},
	{"_nonEscapingElements", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputFormat, _nonEscapingElements)},
	{"_lineSeparator", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputFormat, _lineSeparator)},
	{"_lineWidth", "I", nullptr, $PRIVATE, $field(OutputFormat, _lineWidth)},
	{"_preserve", "Z", nullptr, $PRIVATE, $field(OutputFormat, _preserve)},
	{"_preserveEmptyAttributes", "Z", nullptr, $PRIVATE, $field(OutputFormat, _preserveEmptyAttributes)},
	{}
};

$MethodInfo _OutputFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OutputFormat, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(OutputFormat, init$, void, $String*, $String*, bool)},
	{"getCDataElements", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getCDataElements, $StringArray*)},
	{"getDoctypePublic", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getDoctypePublic, $String*)},
	{"getDoctypeSystem", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getDoctypeSystem, $String*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getEncoding, $String*)},
	{"getEncodingInfo", "()Lcom/sun/org/apache/xml/internal/serialize/EncodingInfo;", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getEncodingInfo, $EncodingInfo*), "java.io.UnsupportedEncodingException"},
	{"getIndent", "()I", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getIndent, int32_t)},
	{"getIndenting", "()Z", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getIndenting, bool)},
	{"getLastPrintable", "()C", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getLastPrintable, char16_t)},
	{"getLineSeparator", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getLineSeparator, $String*)},
	{"getLineWidth", "()I", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getLineWidth, int32_t)},
	{"getMediaType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getMediaType, $String*)},
	{"getMethod", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getMethod, $String*)},
	{"getNonEscapingElements", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getNonEscapingElements, $StringArray*)},
	{"getOmitComments", "()Z", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getOmitComments, bool)},
	{"getOmitDocumentType", "()Z", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getOmitDocumentType, bool)},
	{"getOmitXMLDeclaration", "()Z", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getOmitXMLDeclaration, bool)},
	{"getPreserveEmptyAttributes", "()Z", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getPreserveEmptyAttributes, bool)},
	{"getPreserveSpace", "()Z", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getPreserveSpace, bool)},
	{"getStandalone", "()Z", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getStandalone, bool)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutputFormat, getVersion, $String*)},
	{"isCDataElement", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(OutputFormat, isCDataElement, bool, $String*)},
	{"isNonEscapingElement", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(OutputFormat, isNonEscapingElement, bool, $String*)},
	{"setAllowJavaNames", "(Z)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setAllowJavaNames, void, bool)},
	{"setAllowJavaNames", "()Z", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setAllowJavaNames, bool)},
	{"setCDataElements", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setCDataElements, void, $StringArray*)},
	{"setDoctype", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setDoctype, void, $String*, $String*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setEncoding, void, $String*)},
	{"setEncoding", "(Lcom/sun/org/apache/xml/internal/serialize/EncodingInfo;)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setEncoding, void, $EncodingInfo*)},
	{"setIndent", "(I)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setIndent, void, int32_t)},
	{"setIndenting", "(Z)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setIndenting, void, bool)},
	{"setLineSeparator", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setLineSeparator, void, $String*)},
	{"setLineWidth", "(I)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setLineWidth, void, int32_t)},
	{"setMediaType", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setMediaType, void, $String*)},
	{"setMethod", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setMethod, void, $String*)},
	{"setNonEscapingElements", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setNonEscapingElements, void, $StringArray*)},
	{"setOmitComments", "(Z)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setOmitComments, void, bool)},
	{"setOmitDocumentType", "(Z)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setOmitDocumentType, void, bool)},
	{"setOmitXMLDeclaration", "(Z)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setOmitXMLDeclaration, void, bool)},
	{"setPreserveEmptyAttributes", "(Z)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setPreserveEmptyAttributes, void, bool)},
	{"setPreserveSpace", "(Z)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setPreserveSpace, void, bool)},
	{"setStandalone", "(Z)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setStandalone, void, bool)},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(OutputFormat, setVersion, void, $String*)},
	{"whichMediaType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(OutputFormat, whichMediaType, $String*, $String*)},
	{}
};

$InnerClassInfo _OutputFormat_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serialize.OutputFormat$Defaults", "com.sun.org.apache.xml.internal.serialize.OutputFormat", "Defaults", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.serialize.OutputFormat$DTD", "com.sun.org.apache.xml.internal.serialize.OutputFormat", "DTD", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _OutputFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.OutputFormat",
	"java.lang.Object",
	nullptr,
	_OutputFormat_FieldInfo_,
	_OutputFormat_MethodInfo_,
	nullptr,
	nullptr,
	_OutputFormat_InnerClassesInfo_,
	_OutputFormat_Annotations_,
	nullptr,
	"com.sun.org.apache.xml.internal.serialize.OutputFormat$Defaults,com.sun.org.apache.xml.internal.serialize.OutputFormat$DTD"
};

$Object* allocate$OutputFormat($Class* clazz) {
	return $of($alloc(OutputFormat));
}

void OutputFormat::init$() {
	this->_indent = 0;
	$init($OutputFormat$Defaults);
	$set(this, _encoding, $OutputFormat$Defaults::Encoding);
	$set(this, _encodingInfo, nullptr);
	this->_allowJavaNames = false;
	this->_omitXmlDeclaration = false;
	this->_omitDoctype = false;
	this->_omitComments = false;
	this->_stripComments = false;
	this->_standalone = false;
	$init($LineSeparator);
	$set(this, _lineSeparator, $LineSeparator::Web);
	this->_lineWidth = $OutputFormat$Defaults::LineWidth;
	this->_preserve = false;
	this->_preserveEmptyAttributes = false;
}

void OutputFormat::init$($String* method, $String* encoding, bool indenting) {
	this->_indent = 0;
	$init($OutputFormat$Defaults);
	$set(this, _encoding, $OutputFormat$Defaults::Encoding);
	$set(this, _encodingInfo, nullptr);
	this->_allowJavaNames = false;
	this->_omitXmlDeclaration = false;
	this->_omitDoctype = false;
	this->_omitComments = false;
	this->_stripComments = false;
	this->_standalone = false;
	$init($LineSeparator);
	$set(this, _lineSeparator, $LineSeparator::Web);
	this->_lineWidth = $OutputFormat$Defaults::LineWidth;
	this->_preserve = false;
	this->_preserveEmptyAttributes = false;
	setMethod(method);
	setEncoding(encoding);
	setIndenting(indenting);
}

$String* OutputFormat::getMethod() {
	return this->_method;
}

void OutputFormat::setMethod($String* method) {
	$set(this, _method, method);
}

$String* OutputFormat::getVersion() {
	return this->_version;
}

void OutputFormat::setVersion($String* version) {
	$set(this, _version, version);
}

int32_t OutputFormat::getIndent() {
	return this->_indent;
}

bool OutputFormat::getIndenting() {
	return (this->_indent > 0);
}

void OutputFormat::setIndent(int32_t indent) {
	if (indent < 0) {
		this->_indent = 0;
	} else {
		this->_indent = indent;
	}
}

void OutputFormat::setIndenting(bool on) {
	if (on) {
		this->_indent = $OutputFormat$Defaults::Indent;
		this->_lineWidth = $OutputFormat$Defaults::LineWidth;
	} else {
		this->_indent = 0;
		this->_lineWidth = 0;
	}
}

$String* OutputFormat::getEncoding() {
	return this->_encoding;
}

void OutputFormat::setEncoding($String* encoding) {
	$set(this, _encoding, encoding);
	$set(this, _encodingInfo, nullptr);
}

void OutputFormat::setEncoding($EncodingInfo* encInfo) {
	$set(this, _encoding, $nc(encInfo)->getIANAName());
	$set(this, _encodingInfo, encInfo);
}

$EncodingInfo* OutputFormat::getEncodingInfo() {
	if (this->_encodingInfo == nullptr) {
		$set(this, _encodingInfo, $Encodings::getEncodingInfo(this->_encoding, this->_allowJavaNames));
	}
	return this->_encodingInfo;
}

void OutputFormat::setAllowJavaNames(bool allow) {
	this->_allowJavaNames = allow;
}

bool OutputFormat::setAllowJavaNames() {
	return this->_allowJavaNames;
}

$String* OutputFormat::getMediaType() {
	return this->_mediaType;
}

void OutputFormat::setMediaType($String* mediaType) {
	$set(this, _mediaType, mediaType);
}

void OutputFormat::setDoctype($String* publicId, $String* systemId) {
	$set(this, _doctypePublic, publicId);
	$set(this, _doctypeSystem, systemId);
}

$String* OutputFormat::getDoctypePublic() {
	return this->_doctypePublic;
}

$String* OutputFormat::getDoctypeSystem() {
	return this->_doctypeSystem;
}

bool OutputFormat::getOmitComments() {
	return this->_omitComments;
}

void OutputFormat::setOmitComments(bool omit) {
	this->_omitComments = omit;
}

bool OutputFormat::getOmitDocumentType() {
	return this->_omitDoctype;
}

void OutputFormat::setOmitDocumentType(bool omit) {
	this->_omitDoctype = omit;
}

bool OutputFormat::getOmitXMLDeclaration() {
	return this->_omitXmlDeclaration;
}

void OutputFormat::setOmitXMLDeclaration(bool omit) {
	this->_omitXmlDeclaration = omit;
}

bool OutputFormat::getStandalone() {
	return this->_standalone;
}

void OutputFormat::setStandalone(bool standalone) {
	this->_standalone = standalone;
}

$StringArray* OutputFormat::getCDataElements() {
	return this->_cdataElements;
}

bool OutputFormat::isCDataElement($String* tagName) {
	int32_t i = 0;
	if (this->_cdataElements == nullptr) {
		return false;
	}
	for (i = 0; i < $nc(this->_cdataElements)->length; ++i) {
		if ($nc($nc(this->_cdataElements)->get(i))->equals(tagName)) {
			return true;
		}
	}
	return false;
}

void OutputFormat::setCDataElements($StringArray* cdataElements) {
	$set(this, _cdataElements, cdataElements);
}

$StringArray* OutputFormat::getNonEscapingElements() {
	return this->_nonEscapingElements;
}

bool OutputFormat::isNonEscapingElement($String* tagName) {
	int32_t i = 0;
	if (this->_nonEscapingElements == nullptr) {
		return false;
	}
	for (i = 0; i < $nc(this->_nonEscapingElements)->length; ++i) {
		if ($nc($nc(this->_nonEscapingElements)->get(i))->equals(tagName)) {
			return true;
		}
	}
	return false;
}

void OutputFormat::setNonEscapingElements($StringArray* nonEscapingElements) {
	$set(this, _nonEscapingElements, nonEscapingElements);
}

$String* OutputFormat::getLineSeparator() {
	return this->_lineSeparator;
}

void OutputFormat::setLineSeparator($String* lineSeparator) {
	if (lineSeparator == nullptr) {
		$init($LineSeparator);
		$set(this, _lineSeparator, $LineSeparator::Web);
	} else {
		$set(this, _lineSeparator, lineSeparator);
	}
}

bool OutputFormat::getPreserveSpace() {
	return this->_preserve;
}

void OutputFormat::setPreserveSpace(bool preserve) {
	this->_preserve = preserve;
}

int32_t OutputFormat::getLineWidth() {
	return this->_lineWidth;
}

void OutputFormat::setLineWidth(int32_t lineWidth) {
	if (lineWidth <= 0) {
		this->_lineWidth = 0;
	} else {
		this->_lineWidth = lineWidth;
	}
}

bool OutputFormat::getPreserveEmptyAttributes() {
	return this->_preserveEmptyAttributes;
}

void OutputFormat::setPreserveEmptyAttributes(bool preserve) {
	this->_preserveEmptyAttributes = preserve;
}

char16_t OutputFormat::getLastPrintable() {
	bool var$0 = getEncoding() != nullptr;
	if (var$0 && ($nc($(getEncoding()))->equalsIgnoreCase("ASCII"_s))) {
		return (char16_t)255;
	} else {
		return (char16_t)0x0000FFFF;
	}
}

$String* OutputFormat::whichMediaType($String* method) {
	$init($Method);
	if ($nc(method)->equalsIgnoreCase($Method::XML)) {
		return "text/xml"_s;
	}
	if ($nc(method)->equalsIgnoreCase($Method::HTML)) {
		return "text/html"_s;
	}
	if ($nc(method)->equalsIgnoreCase($Method::XHTML)) {
		return "text/html"_s;
	}
	if ($nc(method)->equalsIgnoreCase($Method::TEXT)) {
		return "text/plain"_s;
	}
	if ($nc(method)->equalsIgnoreCase($Method::FOP)) {
		return "application/pdf"_s;
	}
	return nullptr;
}

OutputFormat::OutputFormat() {
}

$Class* OutputFormat::load$($String* name, bool initialize) {
	$loadClass(OutputFormat, name, initialize, &_OutputFormat_ClassInfo_, allocate$OutputFormat);
	return class$;
}

$Class* OutputFormat::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com