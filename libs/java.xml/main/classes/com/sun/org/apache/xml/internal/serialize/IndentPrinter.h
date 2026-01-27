#ifndef _com_sun_org_apache_xml_internal_serialize_IndentPrinter_h_
#define _com_sun_org_apache_xml_internal_serialize_IndentPrinter_h_
//$ class com.sun.org.apache.xml.internal.serialize.IndentPrinter
//$ extends com.sun.org.apache.xml.internal.serialize.Printer

#include <com/sun/org/apache/xml/internal/serialize/Printer.h>
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

class IndentPrinter : public ::com::sun::org::apache::xml::internal::serialize::Printer {
	$class(IndentPrinter, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serialize::Printer)
public:
	IndentPrinter();
	void init$(::java::io::Writer* writer, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	virtual void breakLine() override;
	virtual void breakLine(bool preserveSpace) override;
	virtual void enterDTD() override;
	virtual void flush() override;
	virtual void flushLine(bool preserveSpace) override;
	virtual int32_t getNextIndent() override;
	virtual void indent() override;
	virtual $String* leaveDTD() override;
	virtual void printSpace() override;
	virtual void printText($String* text) override;
	virtual void printText(::java::lang::StringBuffer* text) override;
	virtual void printText(char16_t ch) override;
	virtual void printText($chars* chars, int32_t start, int32_t length) override;
	virtual void setNextIndent(int32_t indent) override;
	virtual void setThisIndent(int32_t indent) override;
	virtual void unindent() override;
	::java::lang::StringBuffer* _line = nullptr;
	::java::lang::StringBuffer* _text = nullptr;
	int32_t _spaces = 0;
	int32_t _thisIndent = 0;
	int32_t _nextIndent = 0;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_IndentPrinter_h_