#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_XSLTC_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_XSLTC_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.XSLTC
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BYTEARRAY_AND_FILE_OUTPUT")
#undef BYTEARRAY_AND_FILE_OUTPUT
#pragma push_macro("BYTEARRAY_AND_JAR_OUTPUT")
#undef BYTEARRAY_AND_JAR_OUTPUT
#pragma push_macro("BYTEARRAY_OUTPUT")
#undef BYTEARRAY_OUTPUT
#pragma push_macro("CLASSLOADER_OUTPUT")
#undef CLASSLOADER_OUTPUT
#pragma push_macro("JAR_OUTPUT")
#undef JAR_OUTPUT
#pragma push_macro("XSLTC")
#undef XSLTC

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class JavaClass;
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
							namespace compiler {
								class Parser;
								class QName;
								class SourceLoader;
								class Stylesheet;
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
		class File;
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Properties;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class CatalogFeatures;
		}
	}
}
namespace jdk {
	namespace xml {
		namespace internal {
			class JdkXmlFeatures;
			class JdkXmlFeatures$XmlFeature;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
			class XMLReader;
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
							namespace compiler {

class XSLTC : public ::java::lang::Object {
	$class(XSLTC, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSLTC();
	void init$(::jdk::xml::internal::JdkXmlFeatures* featureManager, bool hasListener);
	int32_t addCharacterData($String* newData);
	bool callsNodeset();
	$String* classFileName($String* className);
	bool compile(::java::net::URL* url);
	bool compile(::java::net::URL* url, $String* name);
	bool compile(::java::io::InputStream* stream, $String* name);
	bool compile(::org::xml::sax::InputSource* input, $String* name);
	bool compile(::java::util::List* stylesheets);
	$Array<int8_t, 2>* compile($String* name, ::org::xml::sax::InputSource* input, int32_t outputType);
	$Array<int8_t, 2>* compile($String* name, ::org::xml::sax::InputSource* input);
	bool debug();
	void dumpClass(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz);
	$String* entryName(::java::io::File* f);
	$Array<int8_t, 2>* getBytecodes();
	$String* getCharacterData(int32_t index);
	int32_t getCharacterDataCount();
	$String* getClassName();
	::java::util::List* getErrors();
	::java::util::Map* getExternalExtensionFunctions();
	bool getFeature(::jdk::xml::internal::JdkXmlFeatures$XmlFeature* name);
	$String* getHelperClassName();
	$String* getJarFileName();
	::java::util::List* getNamesIndex();
	::java::util::List* getNamespaceIndex();
	$ints* getNumberFieldIndexes();
	::java::io::File* getOutputFile($String* className);
	::java::util::Properties* getOutputProperties();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* getParser();
	$Object* getProperty($String* name);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* getStylesheet();
	bool getTemplateInlining();
	::java::util::List* getWarnings();
	::org::xml::sax::XMLReader* getXMLReader();
	bool hasIdCall();
	void init();
	bool isMultiDocument();
	bool isSecureProcessing();
	$Class* loadExternalFunction($String* name);
	int32_t nextAttributeSetSerial();
	int32_t nextHelperClassSerial();
	int32_t nextModeSerial();
	int32_t nextStepPatternSerial();
	int32_t nextStylesheetSerial();
	void outputToJar();
	void printErrors();
	void printWarnings();
	int32_t registerAttribute(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	int32_t registerElement(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	int32_t registerNamespace($String* namespaceURI);
	int32_t registerNamespacePrefix(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* name);
	void reset();
	void setCallsNodeset(bool flag);
	void setClassName($String* className);
	void setDebug(bool debug);
	bool setDestDirectory($String* dstDirName);
	void setExternalExtensionFunctions($String* name, $Class* clazz);
	void setHasIdCall(bool flag);
	void setJarFileName($String* jarFileName);
	void setMultiDocument(bool flag);
	void setOutputType(int32_t type);
	void setPIParameters($String* media, $String* title, $String* charset);
	void setPackageName($String* packageName);
	void setProperty($String* name, Object$* value);
	void setSecureProcessing(bool flag);
	void setSourceLoader(::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader* loader);
	void setStylesheet(::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* stylesheet);
	void setTemplateInlining(bool templateInlining);
	void setXMLReader(::org::xml::sax::XMLReader* reader);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* _parser = nullptr;
	::org::xml::sax::XMLReader* _reader = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader* _loader = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet* _stylesheet = nullptr;
	int32_t _modeSerial = 0;
	int32_t _stylesheetSerial = 0;
	int32_t _stepPatternSerial = 0;
	int32_t _helperClassSerial = 0;
	int32_t _attributeSetSerial = 0;
	$ints* _numberFieldIndexes = nullptr;
	int32_t _nextGType = 0;
	::java::util::List* _namesIndex = nullptr;
	::java::util::Map* _elements = nullptr;
	::java::util::Map* _attributes = nullptr;
	int32_t _nextNSType = 0;
	::java::util::List* _namespaceIndex = nullptr;
	::java::util::Map* _namespaces = nullptr;
	::java::util::Map* _namespacePrefixes = nullptr;
	::java::util::List* m_characterData = nullptr;
	static const int32_t JAR_OUTPUT = 1;
	static const int32_t BYTEARRAY_OUTPUT = 2;
	static const int32_t CLASSLOADER_OUTPUT = 3;
	static const int32_t BYTEARRAY_AND_FILE_OUTPUT = 4;
	static const int32_t BYTEARRAY_AND_JAR_OUTPUT = 5;
	bool _debug = false;
	$String* _jarFileName = nullptr;
	$String* _className = nullptr;
	$String* _packageName = nullptr;
	::java::io::File* _destDir = nullptr;
	int32_t _outputType = 0;
	::java::util::List* _classes = nullptr;
	::java::util::List* _bcelClasses = nullptr;
	bool _callsNodeset = false;
	bool _multiDocument = false;
	bool _hasIdCall = false;
	bool _templateInlining = false;
	bool _isSecureProcessing = false;
	bool _overrideDefaultParser = false;
	$String* _accessExternalStylesheet = nullptr;
	$String* _accessExternalDTD = nullptr;
	::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager* _xmlSecurityManager = nullptr;
	::jdk::xml::internal::JdkXmlFeatures* _xmlFeatures = nullptr;
	::java::lang::ClassLoader* _extensionClassLoader = nullptr;
	::java::util::Map* _externalExtensionFunctions = nullptr;
	::javax::xml::catalog::CatalogFeatures* _catalogFeatures = nullptr;
	int32_t _cdataChunkSize = 0;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BYTEARRAY_AND_FILE_OUTPUT")
#pragma pop_macro("BYTEARRAY_AND_JAR_OUTPUT")
#pragma pop_macro("BYTEARRAY_OUTPUT")
#pragma pop_macro("CLASSLOADER_OUTPUT")
#pragma pop_macro("JAR_OUTPUT")
#pragma pop_macro("XSLTC")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_XSLTC_h_