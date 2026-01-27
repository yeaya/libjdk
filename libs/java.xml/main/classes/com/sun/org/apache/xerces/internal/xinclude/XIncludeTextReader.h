#ifndef _com_sun_org_apache_xerces_internal_xinclude_XIncludeTextReader_h_
#define _com_sun_org_apache_xerces_internal_xinclude_XIncludeTextReader_h_
//$ class com.sun.org.apache.xerces.internal.xinclude.XIncludeTextReader
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLErrorReporter;
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
						namespace xinclude {
							class XIncludeHandler;
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
						namespace xni {
							class XMLString;
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
						namespace xni {
							namespace parser {
								class XMLInputSource;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {

class XIncludeTextReader : public ::java::lang::Object {
	$class(XIncludeTextReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XIncludeTextReader();
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source, ::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler* handler, int32_t bufferSize);
	virtual void close();
	virtual $String* consumeBOM(::java::io::InputStream* stream, $String* encoding);
	::java::io::Reader* createASCIIReader(::java::io::InputStream* stream);
	::java::io::Reader* createLatin1Reader(::java::io::InputStream* stream);
	::java::io::Reader* createUTF16Reader(::java::io::InputStream* stream, bool isBigEndian);
	::java::io::Reader* createUTF8Reader(::java::io::InputStream* stream);
	virtual $String* getEncodingName(::java::io::InputStream* stream);
	virtual $String* getEncodingName($bytes* b4);
	virtual ::java::io::Reader* getReader(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source);
	virtual bool isValid(int32_t ch);
	virtual void parse();
	virtual void setBufferSize(int32_t bufferSize);
	virtual void setErrorReporter(::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter);
	virtual void setInputSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source);
	::java::io::Reader* fReader = nullptr;
	::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler* fHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* fSource = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fTempString = nullptr;
};

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xinclude_XIncludeTextReader_h_