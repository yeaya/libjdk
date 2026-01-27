#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerImpl_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerImpl_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TransformerImpl
//$ extends javax.xml.transform.Transformer
//$ implements com.sun.org.apache.xalan.internal.xsltc.DOMCache

#include <com/sun/org/apache/xalan/internal/xsltc/DOMCache.h>
#include <javax/xml/transform/Transformer.h>

#pragma push_macro("LEXICAL_HANDLER_PROPERTY")
#undef LEXICAL_HANDLER_PROPERTY
#pragma push_macro("NAMESPACE_PREFIXES_FEATURE")
#undef NAMESPACE_PREFIXES_FEATURE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {
							class XMLSecurityManager;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
							class Translet;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class XSLTCDTMManager;
							}
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								class AbstractTranslet;
							}
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								namespace output {
									class TransletOutputHandlerFactory;
								}
							}
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {
								class TransformerFactoryImpl;
							}
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
						namespace serializer {
							class SerializationHandler;
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
						namespace utils {
							class XMLReaderManager;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Map;
		class Properties;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class CatalogFeatures;
			class CatalogResolver;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
			class Result;
			class Source;
			class URIResolver;
		}
	}
}
namespace jdk {
	namespace xml {
		namespace internal {
			class JdkProperty;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

class TransformerImpl : public ::javax::xml::transform::Transformer, public ::com::sun::org::apache::xalan::internal::xsltc::DOMCache {
	$class(TransformerImpl, 0, ::javax::xml::transform::Transformer, ::com::sun::org::apache::xalan::internal::xsltc::DOMCache)
public:
	TransformerImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Properties* outputProperties, int32_t indentNumber, ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* tfactory);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::java::util::Properties* outputProperties, int32_t indentNumber, ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* tfactory);
	virtual void clearParameters() override;
	::java::util::Properties* createOutputProperties(::java::util::Properties* outputProperties);
	::com::sun::org::apache::xalan::internal::xsltc::DOM* getDOM(::javax::xml::transform::Source* source);
	virtual ::javax::xml::transform::ErrorListener* getErrorListener() override;
	::com::sun::org::apache::xml::internal::serializer::SerializationHandler* getOutputHandler(::javax::xml::transform::Result* result);
	virtual ::java::util::Properties* getOutputProperties() override;
	virtual $String* getOutputProperty($String* name) override;
	virtual $Object* getParameter($String* name) override;
	::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* getTransformerFactory();
	::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* getTranslet();
	::com::sun::org::apache::xalan::internal::xsltc::runtime::output::TransletOutputHandlerFactory* getTransletOutputHandlerFactory();
	virtual ::javax::xml::transform::URIResolver* getURIResolver() override;
	bool isDefaultProperty($String* name, ::java::util::Properties* properties);
	bool isIdentity();
	bool isSecureProcessing();
	bool overrideDefaultParser();
	void postErrorToListener($String* message);
	void postWarningToListener($String* message);
	virtual void reset() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* retrieveDocument($String* baseURI, $String* href, ::com::sun::org::apache::xalan::internal::xsltc::Translet* translet) override;
	void setDOM(::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	void setDefaults(::java::util::Properties* props, $String* method);
	virtual void setErrorListener(::javax::xml::transform::ErrorListener* listener) override;
	virtual void setOutputProperties(::java::util::Properties* properties) override;
	virtual void setOutputProperty($String* name, $String* value) override;
	void setOverrideDefaultParser(bool flag);
	virtual void setParameter($String* name, Object$* value) override;
	void setSecureProcessing(bool flag);
	virtual void setURIResolver(::javax::xml::transform::URIResolver* resolver) override;
	virtual $String* toString() override;
	void transferOutputProperties(::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet);
	void transferOutputProperties(::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	virtual void transform(::javax::xml::transform::Source* source, ::javax::xml::transform::Result* result) override;
	void transform(::javax::xml::transform::Source* source, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler, $String* encoding);
	void transformIdentity(::javax::xml::transform::Source* source, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	bool validOutputProperty($String* name);
	static $String* LEXICAL_HANDLER_PROPERTY;
	static $String* NAMESPACE_PREFIXES_FEATURE;
	::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* _translet = nullptr;
	$String* _method = nullptr;
	$String* _encoding = nullptr;
	$String* _sourceSystemId = nullptr;
	::javax::xml::transform::ErrorListener* _defaultListener = nullptr;
	::javax::xml::transform::ErrorListener* _errorListener = nullptr;
	::javax::xml::transform::URIResolver* _uriResolver = nullptr;
	::java::util::Properties* _properties = nullptr;
	::java::util::Properties* _propertiesClone = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::runtime::output::TransletOutputHandlerFactory* _tohFactory = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::DOM* _dom = nullptr;
	int32_t _indentNumber = 0;
	::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* _tfactory = nullptr;
	::java::io::OutputStream* _ostream = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* _dtmManager = nullptr;
	::com::sun::org::apache::xml::internal::utils::XMLReaderManager* _readerManager = nullptr;
	bool _isIdentity = false;
	bool _isSecureProcessing = false;
	bool _overrideDefaultParser = false;
	$String* _accessExternalDTD = nullptr;
	::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager* _securityManager = nullptr;
	::java::util::Map* _parameters = nullptr;
	::javax::xml::catalog::CatalogFeatures* _catalogFeatures = nullptr;
	::javax::xml::catalog::CatalogResolver* _catalogUriResolver = nullptr;
	bool _useCatalog = false;
	int32_t _cdataChunkSize = 0;
	::jdk::xml::internal::JdkProperty* _xsltcIsStandalone = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LEXICAL_HANDLER_PROPERTY")
#pragma pop_macro("NAMESPACE_PREFIXES_FEATURE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerImpl_h_