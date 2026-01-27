#ifndef _com_sun_org_apache_xerces_internal_impl_XMLEntityManager$RewindableInputStream_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLEntityManager$RewindableInputStream_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLEntityManager$RewindableInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLEntityManager;
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
				namespace xerces {
					namespace internal {
						namespace impl {

class XMLEntityManager$RewindableInputStream : public ::java::io::InputStream {
	$class(XMLEntityManager$RewindableInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	XMLEntityManager$RewindableInputStream();
	void init$(::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* this$0, ::java::io::InputStream* is);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void mark(int32_t howMuch) override;
	virtual bool markSupported() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	int32_t readAndBuffer();
	virtual void reset() override;
	void rewind();
	void setStartOffset(int32_t offset);
	virtual int64_t skip(int64_t n) override;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* this$0 = nullptr;
	::java::io::InputStream* fInputStream = nullptr;
	$bytes* fData = nullptr;
	int32_t fStartOffset = 0;
	int32_t fEndOffset = 0;
	int32_t fOffset = 0;
	int32_t fLength = 0;
	int32_t fMark = 0;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLEntityManager$RewindableInputStream_h_