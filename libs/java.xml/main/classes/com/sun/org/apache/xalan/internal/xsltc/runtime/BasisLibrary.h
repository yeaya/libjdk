#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_BasisLibrary_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_BasisLibrary_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AXIS_SUPPORT_ERR")
#undef AXIS_SUPPORT_ERR
#pragma push_macro("CANT_RESOLVE_RELATIVE_URI_ERR")
#undef CANT_RESOLVE_RELATIVE_URI_ERR
#pragma push_macro("DATA_CONVERSION_ERR")
#undef DATA_CONVERSION_ERR
#pragma push_macro("DOM_ADAPTER_INIT_ERR")
#undef DOM_ADAPTER_INIT_ERR
#pragma push_macro("DOUBLE_FRACTION_DIGITS")
#undef DOUBLE_FRACTION_DIGITS
#pragma push_macro("EMPTYSTRING")
#undef EMPTYSTRING
#pragma push_macro("EQUALITY_EXPR_ERR")
#undef EQUALITY_EXPR_ERR
#pragma push_macro("ERROR_MESSAGES_KEY")
#undef ERROR_MESSAGES_KEY
#pragma push_macro("EXTERNAL_FUNC_ERR")
#undef EXTERNAL_FUNC_ERR
#pragma push_macro("FORMAT_NUMBER_ERR")
#undef FORMAT_NUMBER_ERR
#pragma push_macro("INVALID_ARGUMENT_ERR")
#undef INVALID_ARGUMENT_ERR
#pragma push_macro("INVALID_NCNAME_ERR")
#undef INVALID_NCNAME_ERR
#pragma push_macro("INVALID_QNAME_ERR")
#undef INVALID_QNAME_ERR
#pragma push_macro("ITERATOR_CLONE_ERR")
#undef ITERATOR_CLONE_ERR
#pragma push_macro("NAMESPACES_SUPPORT_ERR")
#undef NAMESPACES_SUPPORT_ERR
#pragma push_macro("NAMESPACE_PREFIX_ERR")
#undef NAMESPACE_PREFIX_ERR
#pragma push_macro("PARSER_DTD_SUPPORT_ERR")
#undef PARSER_DTD_SUPPORT_ERR
#pragma push_macro("RUN_TIME_COPY_ERR")
#undef RUN_TIME_COPY_ERR
#pragma push_macro("RUN_TIME_INTERNAL_ERR")
#undef RUN_TIME_INTERNAL_ERR
#pragma push_macro("STRAY_ATTRIBUTE_ERR")
#undef STRAY_ATTRIBUTE_ERR
#pragma push_macro("STRAY_NAMESPACE_ERR")
#undef STRAY_NAMESPACE_ERR
#pragma push_macro("TYPED_AXIS_SUPPORT_ERR")
#undef TYPED_AXIS_SUPPORT_ERR
#pragma push_macro("UNALLOWED_EXTENSION_ELEMENT_ERR")
#undef UNALLOWED_EXTENSION_ELEMENT_ERR
#pragma push_macro("UNALLOWED_EXTENSION_FUNCTION_ERR")
#undef UNALLOWED_EXTENSION_FUNCTION_ERR
#pragma push_macro("UNKNOWN_TRANSLET_VERSION_ERR")
#undef UNKNOWN_TRANSLET_VERSION_ERR
#pragma push_macro("UNSUPPORTED_EXT_ERR")
#undef UNSUPPORTED_EXT_ERR
#pragma push_macro("UNSUPPORTED_XSL_ERR")
#undef UNSUPPORTED_XSL_ERR

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
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace text {
		class DecimalFormat;
		class FieldPosition;
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
			class NodeList;
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

class BasisLibrary : public ::java::lang::Object {
	$class(BasisLibrary, 0, ::java::lang::Object)
public:
	BasisLibrary();
	void init$();
	static bool booleanF(Object$* obj);
	static void checkAttribQName($String* name);
	static void checkNCName($String* name);
	static void checkQName($String* name);
	static bool compare(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* left, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* right, int32_t op, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static bool compare(int32_t node, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, int32_t op, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static bool compare(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* left, double rnumber, int32_t op, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static bool compare(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* left, $String* rstring, int32_t op, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static bool compare(Object$* left, Object$* right, int32_t op, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static bool compareStrings($String* lstring, $String* rstring, int32_t op, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static void consoleOutput($String* msg);
	static void copy(Object$* obj, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler, int32_t node, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static int32_t countF(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator);
	static $String* formatNumber(double number, $String* pattern, ::java::text::DecimalFormat* formatter);
	static $String* generatePrefix();
	static $String* generate_idF(int32_t node);
	static $String* getLocalName($String* value);
	static $String* getPrefix($String* qname);
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getSingleNode(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator);
	static int32_t getStringLength($String* str);
	static bool hasSimpleType(Object$* obj);
	static bool isWhiteSpace(char16_t ch);
	static $String* mapQNameToJavaName($String* base);
	static $String* namespace_uriF(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static $String* namespace_uriF(int32_t node, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* node2Iterator(::org::w3c::dom::Node* node, ::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* nodeList2Iterator(::org::w3c::dom::NodeList* nodeList, ::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* nodeList2IteratorUsingHandleFromNode(::org::w3c::dom::NodeList* nodeList, ::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* nodesetF(Object$* obj);
	static $String* normalize_spaceF(int32_t node, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static $String* normalize_spaceF($String* value);
	static double numberF(int32_t node, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static double numberF(Object$* obj, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static $String* objectTypeF(Object$* obj);
	static int32_t positionF(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator);
	static int32_t realToInt(double d);
	static $String* realToString(double d);
	static bool referenceToBoolean(Object$* obj);
	static double referenceToDouble(Object$* obj);
	static int64_t referenceToLong(Object$* obj);
	static ::org::w3c::dom::Node* referenceToNode(Object$* obj, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static ::org::w3c::dom::NodeList* referenceToNodeList(Object$* obj, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* referenceToNodeSet(Object$* obj);
	static ::com::sun::org::apache::xalan::internal::xsltc::DOM* referenceToResultTree(Object$* obj);
	static $String* referenceToString(Object$* obj, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static $String* replace($String* base, char16_t ch, $String* str);
	static $String* replace($String* base, $String* delim, $StringArray* str);
	static void resetPrefixIndex();
	static double roundF(double d);
	static void runTimeError($String* code);
	static void runTimeError($String* code, $ObjectArray* args);
	static void runTimeError($String* code, Object$* arg0);
	static void runTimeError($String* code, Object$* arg0, Object$* arg1);
	static $String* startXslElement($String* qname, $String* namespace$, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom, int32_t node);
	static $String* stringF(int32_t node, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static $String* stringF(Object$* obj, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static $String* stringF(Object$* obj, int32_t node, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static int32_t stringToInt($String* s);
	static double stringToReal($String* s);
	static $String* substringF($String* value, double start);
	static $String* substringF($String* value, double start, double length);
	static $String* substring_afterF($String* value, $String* substring);
	static $String* substring_beforeF($String* value, $String* substring);
	static double sumF(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom);
	static $String* system_propertyF($String* name);
	static bool testLanguage($String* testLang, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom, int32_t node);
	static $String* translateF($String* value, $String* from, $String* to);
	static void unallowed_extension_elementF($String* name);
	static void unallowed_extension_functionF($String* name);
	static void unresolved_externalF($String* name);
	static void unsupported_ElementF($String* qname, bool isExtension);
	static $String* EMPTYSTRING;
	static ::java::lang::ThreadLocal* threadLocalStringBuilder;
	static ::java::lang::ThreadLocal* threadLocalStringBuffer;
	static const int32_t DOUBLE_FRACTION_DIGITS = 340;
	static double lowerBounds;
	static double upperBounds;
	static ::java::text::DecimalFormat* defaultFormatter;
	static ::java::text::DecimalFormat* xpathFormatter;
	static $String* defaultPattern;
	static ::java::text::FieldPosition* _fieldPosition;
	static $chars* _characterArray;
	static ::java::lang::ThreadLocal* threadLocalPrefixIndex;
	static $String* RUN_TIME_INTERNAL_ERR;
	static $String* RUN_TIME_COPY_ERR;
	static $String* DATA_CONVERSION_ERR;
	static $String* EXTERNAL_FUNC_ERR;
	static $String* EQUALITY_EXPR_ERR;
	static $String* INVALID_ARGUMENT_ERR;
	static $String* FORMAT_NUMBER_ERR;
	static $String* ITERATOR_CLONE_ERR;
	static $String* AXIS_SUPPORT_ERR;
	static $String* TYPED_AXIS_SUPPORT_ERR;
	static $String* STRAY_ATTRIBUTE_ERR;
	static $String* STRAY_NAMESPACE_ERR;
	static $String* NAMESPACE_PREFIX_ERR;
	static $String* DOM_ADAPTER_INIT_ERR;
	static $String* PARSER_DTD_SUPPORT_ERR;
	static $String* NAMESPACES_SUPPORT_ERR;
	static $String* CANT_RESOLVE_RELATIVE_URI_ERR;
	static $String* UNSUPPORTED_XSL_ERR;
	static $String* UNSUPPORTED_EXT_ERR;
	static $String* UNKNOWN_TRANSLET_VERSION_ERR;
	static $String* INVALID_QNAME_ERR;
	static $String* INVALID_NCNAME_ERR;
	static $String* UNALLOWED_EXTENSION_FUNCTION_ERR;
	static $String* UNALLOWED_EXTENSION_ELEMENT_ERR;
	static ::java::util::ResourceBundle* m_bundle;
	static $String* ERROR_MESSAGES_KEY;
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("AXIS_SUPPORT_ERR")
#pragma pop_macro("CANT_RESOLVE_RELATIVE_URI_ERR")
#pragma pop_macro("DATA_CONVERSION_ERR")
#pragma pop_macro("DOM_ADAPTER_INIT_ERR")
#pragma pop_macro("DOUBLE_FRACTION_DIGITS")
#pragma pop_macro("EMPTYSTRING")
#pragma pop_macro("EQUALITY_EXPR_ERR")
#pragma pop_macro("ERROR_MESSAGES_KEY")
#pragma pop_macro("EXTERNAL_FUNC_ERR")
#pragma pop_macro("FORMAT_NUMBER_ERR")
#pragma pop_macro("INVALID_ARGUMENT_ERR")
#pragma pop_macro("INVALID_NCNAME_ERR")
#pragma pop_macro("INVALID_QNAME_ERR")
#pragma pop_macro("ITERATOR_CLONE_ERR")
#pragma pop_macro("NAMESPACES_SUPPORT_ERR")
#pragma pop_macro("NAMESPACE_PREFIX_ERR")
#pragma pop_macro("PARSER_DTD_SUPPORT_ERR")
#pragma pop_macro("RUN_TIME_COPY_ERR")
#pragma pop_macro("RUN_TIME_INTERNAL_ERR")
#pragma pop_macro("STRAY_ATTRIBUTE_ERR")
#pragma pop_macro("STRAY_NAMESPACE_ERR")
#pragma pop_macro("TYPED_AXIS_SUPPORT_ERR")
#pragma pop_macro("UNALLOWED_EXTENSION_ELEMENT_ERR")
#pragma pop_macro("UNALLOWED_EXTENSION_FUNCTION_ERR")
#pragma pop_macro("UNKNOWN_TRANSLET_VERSION_ERR")
#pragma pop_macro("UNSUPPORTED_EXT_ERR")
#pragma pop_macro("UNSUPPORTED_XSL_ERR")

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_BasisLibrary_h_