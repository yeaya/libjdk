#ifndef _com_sun_org_apache_xml_internal_serializer_ToStream$WritertoStringBuffer_h_
#define _com_sun_org_apache_xml_internal_serializer_ToStream$WritertoStringBuffer_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToStream$WritertoStringBuffer
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class ToStream;
						}
					}
				}
			}
		}
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
						namespace serializer {

class ToStream$WritertoStringBuffer : public ::java::io::Writer {
	$class(ToStream$WritertoStringBuffer, $NO_CLASS_INIT, ::java::io::Writer)
public:
	ToStream$WritertoStringBuffer();
	void init$(::com::sun::org::apache::xml::internal::serializer::ToStream* this$0, ::java::lang::StringBuffer* sb);
	virtual void close() override;
	virtual void flush() override;
	using ::java::io::Writer::write;
	virtual void write($chars* arg0, int32_t arg1, int32_t arg2) override;
	virtual void write(int32_t i) override;
	virtual void write($String* s) override;
	::com::sun::org::apache::xml::internal::serializer::ToStream* this$0 = nullptr;
	::java::lang::StringBuffer* m_stringbuf = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToStream$WritertoStringBuffer_h_