#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_AbstractTranslet_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_AbstractTranslet_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.AbstractTranslet
//$ extends com.sun.org.apache.xalan.internal.xsltc.Translet

#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <java/lang/Array.h>

#pragma push_macro("CURRENT_TRANSLET_VERSION")
#undef CURRENT_TRANSLET_VERSION
#pragma push_macro("EMPTYSTRING")
#undef EMPTYSTRING
#pragma push_macro("FIRST_TRANSLET_VERSION")
#undef FIRST_TRANSLET_VERSION
#pragma push_macro("ID_INDEX_NAME")
#undef ID_INDEX_NAME
#pragma push_macro("VER_SPLIT_NAMES_ARRAY")
#undef VER_SPLIT_NAMES_ARRAY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
							class DOMCache;
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
								class DOMAdapter;
								class KeyIndex;
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
								class MessageHandler;
								class StringValueHandler;
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
						namespace dtm {
							class DTMAxisIterator;
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
namespace java {
	namespace io {
		class FileOutputStream;
	}
}
namespace java {
	namespace text {
		class DecimalFormat;
		class DecimalFormatSymbols;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Templates;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
			class Document;
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

class AbstractTranslet : public ::com::sun::org::apache::xalan::internal::xsltc::Translet {
	$class(AbstractTranslet, 0, ::com::sun::org::apache::xalan::internal::xsltc::Translet)
public:
	AbstractTranslet();
	void init$();
	virtual void addAuxiliaryClass($Class* auxClass) override;
	virtual void addCdataElement($String* name);
	virtual void addDecimalFormat($String* name, ::java::text::DecimalFormatSymbols* symbols);
	virtual $Object* addParameter($String* name, Object$* value) override;
	$Object* addParameter($String* name, Object$* value, bool isDefault);
	void buildIDIndex(::com::sun::org::apache::xalan::internal::xsltc::DOM* document);
	virtual void buildKeyIndex($String* name, int32_t node, $String* value);
	virtual void buildKeyIndex($String* name, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex* buildKeyIndexHelper($String* name);
	virtual void buildKeys(::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler, int32_t root) override;
	void characters($String* string, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	virtual void clearParameters();
	virtual void closeOutputHandler(::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex* createKeyIndex();
	void displayMessage($String* msg);
	virtual $String* getAllowedProtocols();
	virtual $Class* getAuxiliaryClass($String* className) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOMCache* getDOMCache();
	::java::text::DecimalFormat* getDecimalFormat($String* name);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex* getKeyIndex($String* name);
	virtual $StringArray* getNamesArray() override;
	virtual $StringArray* getNamespaceArray() override;
	$Object* getParameter($String* name);
	virtual ::javax::xml::transform::Templates* getTemplates();
	virtual $ints* getTypesArray() override;
	virtual $StringArray* getUrisArray() override;
	virtual bool hasIdCall();
	::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter* makeDOMAdapter(::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	virtual ::org::w3c::dom::Document* newDocument($String* uri, $String* qname);
	virtual ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* openOutputHandler($String* filename, bool append);
	virtual ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* openOutputHandler($String* filename);
	virtual bool overrideDefaultParser() override;
	void popParamFrame();
	void postInitialization();
	void prepassDocument(::com::sun::org::apache::xalan::internal::xsltc::DOM* document);
	virtual void printInternalState();
	void pushParamFrame();
	virtual void setAllowedProtocols($String* protocols);
	virtual void setAuxiliaryClasses(::java::util::Map* auxClasses);
	virtual void setDOMCache(::com::sun::org::apache::xalan::internal::xsltc::DOMCache* cache);
	virtual void setIndexSize(int32_t size);
	virtual void setKeyIndexDom($String* name, ::com::sun::org::apache::xalan::internal::xsltc::DOM* document);
	void setMessageHandler(::com::sun::org::apache::xalan::internal::xsltc::runtime::MessageHandler* handler);
	virtual void setOverrideDefaultParser(bool flag) override;
	void setRootForKeys(int32_t root);
	virtual void setTemplates(::javax::xml::transform::Templates* templates);
	virtual void transferOutputSettings(::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	using ::com::sun::org::apache::xalan::internal::xsltc::Translet::transform;
	virtual void transform(::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override {}
	virtual void transform(::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) override;
	$String* _version = nullptr;
	$String* _method = nullptr;
	$String* _encoding = nullptr;
	bool _omitHeader = false;
	$String* _standalone = nullptr;
	bool _isStandalone = false;
	$String* _doctypePublic = nullptr;
	$String* _doctypeSystem = nullptr;
	bool _indent = false;
	$String* _mediaType = nullptr;
	::java::util::List* _cdata = nullptr;
	int32_t _indentamount = 0;
	static const int32_t FIRST_TRANSLET_VERSION = 100;
	static const int32_t VER_SPLIT_NAMES_ARRAY = 101;
	static const int32_t CURRENT_TRANSLET_VERSION = VER_SPLIT_NAMES_ARRAY;
	int32_t transletVersion = 0;
	$StringArray* namesArray = nullptr;
	$StringArray* urisArray = nullptr;
	$ints* typesArray = nullptr;
	$StringArray* namespaceArray = nullptr;
	::javax::xml::transform::Templates* _templates = nullptr;
	bool _hasIdCall = false;
	::com::sun::org::apache::xalan::internal::xsltc::runtime::StringValueHandler* stringValueHandler = nullptr;
	static $String* EMPTYSTRING;
	static $String* ID_INDEX_NAME;
	bool _overrideDefaultParser = false;
	::java::io::FileOutputStream* output = nullptr;
	$String* _accessExternalStylesheet = nullptr;
	int32_t pbase = 0;
	int32_t pframe = 0;
	::java::util::List* paramsStack = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::runtime::MessageHandler* _msgHandler = nullptr;
	::java::util::Map* _formatSymbols = nullptr;
	::java::util::Map* _keyIndexes = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex* _emptyKeyIndex = nullptr;
	int32_t _indexSize = 0;
	int32_t _currentRootForKeys = 0;
	::com::sun::org::apache::xalan::internal::xsltc::DOMCache* _domCache = nullptr;
	::java::util::Map* _auxClasses = nullptr;
	::org::w3c::dom::DOMImplementation* _domImplementation = nullptr;
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CURRENT_TRANSLET_VERSION")
#pragma pop_macro("EMPTYSTRING")
#pragma pop_macro("FIRST_TRANSLET_VERSION")
#pragma pop_macro("ID_INDEX_NAME")
#pragma pop_macro("VER_SPLIT_NAMES_ARRAY")

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_AbstractTranslet_h_