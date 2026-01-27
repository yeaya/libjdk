#ifndef _com_sun_org_apache_xml_internal_serialize_Printer_h_
#define _com_sun_org_apache_xml_internal_serialize_Printer_h_
//$ class com.sun.org.apache.xml.internal.serialize.Printer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {
							class OutputFormat;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class IOException;
		class StringWriter;
		class Writer;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class Printer : public ::java::lang::Object {
	$class(Printer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Printer();
	void init$(::java::io::Writer* writer, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	virtual void breakLine();
	virtual void breakLine(bool preserveSpace);
	virtual void enterDTD();
	virtual void flush();
	virtual void flushLine(bool preserveSpace);
	virtual ::java::io::IOException* getException();
	virtual int32_t getNextIndent();
	virtual void indent();
	virtual $String* leaveDTD();
	virtual void printSpace();
	virtual void printText($String* text);
	virtual void printText(::java::lang::StringBuffer* text);
	virtual void printText($chars* chars, int32_t start, int32_t length);
	virtual void printText(char16_t ch);
	virtual void setNextIndent(int32_t indent);
	virtual void setThisIndent(int32_t indent);
	virtual void unindent();
	::com::sun::org::apache::xml::internal::serialize::OutputFormat* _format = nullptr;
	::java::io::Writer* _writer = nullptr;
	::java::io::StringWriter* _dtdWriter = nullptr;
	::java::io::Writer* _docWriter = nullptr;
	::java::io::IOException* _exception = nullptr;
	static const int32_t BufferSize = 4096;
	$chars* _buffer = nullptr;
	int32_t _pos = 0;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_Printer_h_