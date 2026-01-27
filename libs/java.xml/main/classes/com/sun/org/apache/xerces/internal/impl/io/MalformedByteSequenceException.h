#ifndef _com_sun_org_apache_xerces_internal_impl_io_MalformedByteSequenceException_h_
#define _com_sun_org_apache_xerces_internal_impl_io_MalformedByteSequenceException_h_
//$ class com.sun.org.apache.xerces.internal.impl.io.MalformedByteSequenceException
//$ extends java.io.CharConversionException

#include <java/io/CharConversionException.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class MessageFormatter;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace io {

class MalformedByteSequenceException : public ::java::io::CharConversionException {
	$class(MalformedByteSequenceException, $NO_CLASS_INIT, ::java::io::CharConversionException)
public:
	MalformedByteSequenceException();
	void init$(::com::sun::org::apache::xerces::internal::util::MessageFormatter* formatter, ::java::util::Locale* locale, $String* domain, $String* key, $ObjectArray* arguments);
	virtual $ObjectArray* getArguments();
	virtual $String* getDomain();
	virtual $String* getKey();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0x75140CF43984A223;
	::com::sun::org::apache::xerces::internal::util::MessageFormatter* fFormatter = nullptr;
	::java::util::Locale* fLocale = nullptr;
	$String* fDomain = nullptr;
	$String* fKey = nullptr;
	$ObjectArray* fArguments = nullptr;
	$String* fMessage = nullptr;
	MalformedByteSequenceException(const MalformedByteSequenceException& e);
	virtual void throw$() override;
	inline MalformedByteSequenceException* operator ->() {
		return (MalformedByteSequenceException*)throwing$;
	}
};

							} // io
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_io_MalformedByteSequenceException_h_