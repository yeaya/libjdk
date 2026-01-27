#ifndef _com_sun_org_apache_xml_internal_serializer_WriterToASCI_h_
#define _com_sun_org_apache_xml_internal_serializer_WriterToASCI_h_
//$ class com.sun.org.apache.xml.internal.serializer.WriterToASCI
//$ extends java.io.Writer
//$ implements com.sun.org.apache.xml.internal.serializer.WriterChain

#include <com/sun/org/apache/xml/internal/serializer/WriterChain.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class WriterToASCI : public ::java::io::Writer, public ::com::sun::org::apache::xml::internal::serializer::WriterChain {
	$class(WriterToASCI, $NO_CLASS_INIT, ::java::io::Writer, ::com::sun::org::apache::xml::internal::serializer::WriterChain)
public:
	WriterToASCI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::OutputStream* os);
	virtual void close() override;
	virtual void flush() override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual ::java::io::Writer* getWriter() override;
	virtual $String* toString() override;
	virtual void write($chars* arg0) override;
	virtual void write($String* arg0, int32_t arg1, int32_t arg2) override;
	virtual void write($chars* chars, int32_t start, int32_t length) override;
	virtual void write(int32_t c) override;
	virtual void write($String* s) override;
	::java::io::OutputStream* m_os = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_WriterToASCI_h_