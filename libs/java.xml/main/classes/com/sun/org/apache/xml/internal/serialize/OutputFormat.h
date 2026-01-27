#ifndef _com_sun_org_apache_xml_internal_serialize_OutputFormat_h_
#define _com_sun_org_apache_xml_internal_serialize_OutputFormat_h_
//$ class com.sun.org.apache.xml.internal.serialize.OutputFormat
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {
							class EncodingInfo;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class OutputFormat : public ::java::lang::Object {
	$class(OutputFormat, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OutputFormat();
	void init$();
	void init$($String* method, $String* encoding, bool indenting);
	virtual $StringArray* getCDataElements();
	virtual $String* getDoctypePublic();
	virtual $String* getDoctypeSystem();
	virtual $String* getEncoding();
	virtual ::com::sun::org::apache::xml::internal::serialize::EncodingInfo* getEncodingInfo();
	virtual int32_t getIndent();
	virtual bool getIndenting();
	virtual char16_t getLastPrintable();
	virtual $String* getLineSeparator();
	virtual int32_t getLineWidth();
	virtual $String* getMediaType();
	virtual $String* getMethod();
	virtual $StringArray* getNonEscapingElements();
	virtual bool getOmitComments();
	virtual bool getOmitDocumentType();
	virtual bool getOmitXMLDeclaration();
	virtual bool getPreserveEmptyAttributes();
	virtual bool getPreserveSpace();
	virtual bool getStandalone();
	virtual $String* getVersion();
	virtual bool isCDataElement($String* tagName);
	virtual bool isNonEscapingElement($String* tagName);
	virtual void setAllowJavaNames(bool allow);
	virtual bool setAllowJavaNames();
	virtual void setCDataElements($StringArray* cdataElements);
	virtual void setDoctype($String* publicId, $String* systemId);
	virtual void setEncoding($String* encoding);
	virtual void setEncoding(::com::sun::org::apache::xml::internal::serialize::EncodingInfo* encInfo);
	virtual void setIndent(int32_t indent);
	virtual void setIndenting(bool on);
	virtual void setLineSeparator($String* lineSeparator);
	virtual void setLineWidth(int32_t lineWidth);
	virtual void setMediaType($String* mediaType);
	virtual void setMethod($String* method);
	virtual void setNonEscapingElements($StringArray* nonEscapingElements);
	virtual void setOmitComments(bool omit);
	virtual void setOmitDocumentType(bool omit);
	virtual void setOmitXMLDeclaration(bool omit);
	virtual void setPreserveEmptyAttributes(bool preserve);
	virtual void setPreserveSpace(bool preserve);
	virtual void setStandalone(bool standalone);
	virtual void setVersion($String* version);
	static $String* whichMediaType($String* method);
	$String* _method = nullptr;
	$String* _version = nullptr;
	int32_t _indent = 0;
	$String* _encoding = nullptr;
	::com::sun::org::apache::xml::internal::serialize::EncodingInfo* _encodingInfo = nullptr;
	bool _allowJavaNames = false;
	$String* _mediaType = nullptr;
	$String* _doctypeSystem = nullptr;
	$String* _doctypePublic = nullptr;
	bool _omitXmlDeclaration = false;
	bool _omitDoctype = false;
	bool _omitComments = false;
	bool _stripComments = false;
	bool _standalone = false;
	$StringArray* _cdataElements = nullptr;
	$StringArray* _nonEscapingElements = nullptr;
	$String* _lineSeparator = nullptr;
	int32_t _lineWidth = 0;
	bool _preserve = false;
	bool _preserveEmptyAttributes = false;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_OutputFormat_h_