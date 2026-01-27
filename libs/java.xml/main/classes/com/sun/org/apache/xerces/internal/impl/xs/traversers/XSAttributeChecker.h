#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSAttributeChecker_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSAttributeChecker_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSAttributeChecker
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ATTIDX_ABSTRACT")
#undef ATTIDX_ABSTRACT
#pragma push_macro("ATTIDX_AFORMDEFAULT")
#undef ATTIDX_AFORMDEFAULT
#pragma push_macro("ATTIDX_BASE")
#undef ATTIDX_BASE
#pragma push_macro("ATTIDX_BLOCK")
#undef ATTIDX_BLOCK
#pragma push_macro("ATTIDX_BLOCKDEFAULT")
#undef ATTIDX_BLOCKDEFAULT
#pragma push_macro("ATTIDX_COUNT")
#undef ATTIDX_COUNT
#pragma push_macro("ATTIDX_DEFAULT")
#undef ATTIDX_DEFAULT
#pragma push_macro("ATTIDX_EFORMDEFAULT")
#undef ATTIDX_EFORMDEFAULT
#pragma push_macro("ATTIDX_ENUMNSDECLS")
#undef ATTIDX_ENUMNSDECLS
#pragma push_macro("ATTIDX_FINAL")
#undef ATTIDX_FINAL
#pragma push_macro("ATTIDX_FINALDEFAULT")
#undef ATTIDX_FINALDEFAULT
#pragma push_macro("ATTIDX_FIXED")
#undef ATTIDX_FIXED
#pragma push_macro("ATTIDX_FORM")
#undef ATTIDX_FORM
#pragma push_macro("ATTIDX_FROMDEFAULT")
#undef ATTIDX_FROMDEFAULT
#pragma push_macro("ATTIDX_ID")
#undef ATTIDX_ID
#pragma push_macro("ATTIDX_ISRETURNED")
#undef ATTIDX_ISRETURNED
#pragma push_macro("ATTIDX_ITEMTYPE")
#undef ATTIDX_ITEMTYPE
#pragma push_macro("ATTIDX_MAXOCCURS")
#undef ATTIDX_MAXOCCURS
#pragma push_macro("ATTIDX_MEMBERTYPES")
#undef ATTIDX_MEMBERTYPES
#pragma push_macro("ATTIDX_MINOCCURS")
#undef ATTIDX_MINOCCURS
#pragma push_macro("ATTIDX_MIXED")
#undef ATTIDX_MIXED
#pragma push_macro("ATTIDX_NAME")
#undef ATTIDX_NAME
#pragma push_macro("ATTIDX_NAMESPACE")
#undef ATTIDX_NAMESPACE
#pragma push_macro("ATTIDX_NAMESPACE_LIST")
#undef ATTIDX_NAMESPACE_LIST
#pragma push_macro("ATTIDX_NILLABLE")
#undef ATTIDX_NILLABLE
#pragma push_macro("ATTIDX_NONSCHEMA")
#undef ATTIDX_NONSCHEMA
#pragma push_macro("ATTIDX_PROCESSCONTENTS")
#undef ATTIDX_PROCESSCONTENTS
#pragma push_macro("ATTIDX_PUBLIC")
#undef ATTIDX_PUBLIC
#pragma push_macro("ATTIDX_REF")
#undef ATTIDX_REF
#pragma push_macro("ATTIDX_REFER")
#undef ATTIDX_REFER
#pragma push_macro("ATTIDX_SCHEMALOCATION")
#undef ATTIDX_SCHEMALOCATION
#pragma push_macro("ATTIDX_SOURCE")
#undef ATTIDX_SOURCE
#pragma push_macro("ATTIDX_SUBSGROUP")
#undef ATTIDX_SUBSGROUP
#pragma push_macro("ATTIDX_SYSTEM")
#undef ATTIDX_SYSTEM
#pragma push_macro("ATTIDX_TARGETNAMESPACE")
#undef ATTIDX_TARGETNAMESPACE
#pragma push_macro("ATTIDX_TYPE")
#undef ATTIDX_TYPE
#pragma push_macro("ATTIDX_USE")
#undef ATTIDX_USE
#pragma push_macro("ATTIDX_VALUE")
#undef ATTIDX_VALUE
#pragma push_macro("ATTIDX_VERSION")
#undef ATTIDX_VERSION
#pragma push_macro("ATTIDX_XML_LANG")
#undef ATTIDX_XML_LANG
#pragma push_macro("ATTIDX_XPATH")
#undef ATTIDX_XPATH
#pragma push_macro("ATTRIBUTE_N")
#undef ATTRIBUTE_N
#pragma push_macro("ATTRIBUTE_R")
#undef ATTRIBUTE_R
#pragma push_macro("DT_ANYURI")
#undef DT_ANYURI
#pragma push_macro("DT_BLOCK")
#undef DT_BLOCK
#pragma push_macro("DT_BLOCK1")
#undef DT_BLOCK1
#pragma push_macro("DT_BOOLEAN")
#undef DT_BOOLEAN
#pragma push_macro("DT_COUNT")
#undef DT_COUNT
#pragma push_macro("DT_FINAL")
#undef DT_FINAL
#pragma push_macro("DT_FINAL1")
#undef DT_FINAL1
#pragma push_macro("DT_FINAL2")
#undef DT_FINAL2
#pragma push_macro("DT_FORM")
#undef DT_FORM
#pragma push_macro("DT_ID")
#undef DT_ID
#pragma push_macro("DT_LANGUAGE")
#undef DT_LANGUAGE
#pragma push_macro("DT_MAXOCCURS")
#undef DT_MAXOCCURS
#pragma push_macro("DT_MAXOCCURS1")
#undef DT_MAXOCCURS1
#pragma push_macro("DT_MEMBERTYPES")
#undef DT_MEMBERTYPES
#pragma push_macro("DT_MINOCCURS1")
#undef DT_MINOCCURS1
#pragma push_macro("DT_NAMESPACE")
#undef DT_NAMESPACE
#pragma push_macro("DT_NCNAME")
#undef DT_NCNAME
#pragma push_macro("DT_NONNEGINT")
#undef DT_NONNEGINT
#pragma push_macro("DT_POSINT")
#undef DT_POSINT
#pragma push_macro("DT_PROCESSCONTENTS")
#undef DT_PROCESSCONTENTS
#pragma push_macro("DT_QNAME")
#undef DT_QNAME
#pragma push_macro("DT_STRING")
#undef DT_STRING
#pragma push_macro("DT_TOKEN")
#undef DT_TOKEN
#pragma push_macro("DT_USE")
#undef DT_USE
#pragma push_macro("DT_WHITESPACE")
#undef DT_WHITESPACE
#pragma push_macro("DT_XPATH")
#undef DT_XPATH
#pragma push_macro("DT_XPATH1")
#undef DT_XPATH1
#pragma push_macro("ELEMENT_N")
#undef ELEMENT_N
#pragma push_macro("ELEMENT_R")
#undef ELEMENT_R
#pragma push_macro("INC_POOL_SIZE")
#undef INC_POOL_SIZE
#pragma push_macro("INIT_POOL_SIZE")
#undef INIT_POOL_SIZE
#pragma push_macro("INT_ANY_ANY")
#undef INT_ANY_ANY
#pragma push_macro("INT_ANY_LAX")
#undef INT_ANY_LAX
#pragma push_macro("INT_ANY_LIST")
#undef INT_ANY_LIST
#pragma push_macro("INT_ANY_NOT")
#undef INT_ANY_NOT
#pragma push_macro("INT_ANY_SKIP")
#undef INT_ANY_SKIP
#pragma push_macro("INT_ANY_STRICT")
#undef INT_ANY_STRICT
#pragma push_macro("INT_EMPTY_SET")
#undef INT_EMPTY_SET
#pragma push_macro("INT_QUALIFIED")
#undef INT_QUALIFIED
#pragma push_macro("INT_UNBOUNDED")
#undef INT_UNBOUNDED
#pragma push_macro("INT_UNQUALIFIED")
#undef INT_UNQUALIFIED
#pragma push_macro("INT_USE_OPTIONAL")
#undef INT_USE_OPTIONAL
#pragma push_macro("INT_USE_PROHIBITED")
#undef INT_USE_PROHIBITED
#pragma push_macro("INT_USE_REQUIRED")
#undef INT_USE_REQUIRED
#pragma push_macro("INT_WS_COLLAPSE")
#undef INT_WS_COLLAPSE
#pragma push_macro("INT_WS_PRESERVE")
#undef INT_WS_PRESERVE
#pragma push_macro("INT_WS_REPLACE")
#undef INT_WS_REPLACE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class XSSimpleType;
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
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SchemaNamespaceSupport;
								class XSGrammarBucket;
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
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {
									class XSDHandler;
									class XSDocumentInfo;
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
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {
									class XInt;
									class XIntPool;
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
				namespace xerces {
					namespace internal {
						namespace util {
							class SymbolTable;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class Element;
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
							namespace xs {
								namespace traversers {

class XSAttributeChecker : public ::java::lang::Object {
	$class(XSAttributeChecker, 0, ::java::lang::Object)
public:
	XSAttributeChecker();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* schemaHandler);
	virtual $ObjectArray* checkAttributes(::org::w3c::dom::Element* element, bool isGlobal, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc);
	virtual $ObjectArray* checkAttributes(::org::w3c::dom::Element* element, bool isGlobal, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc, bool enumAsQName);
	virtual void checkNonSchemaAttributes(::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket* grammarBucket);
	virtual $ObjectArray* getAvailableArray();
	static $String* normalize($String* content, int16_t ws);
	virtual void reportSchemaError($String* key, $ObjectArray* args, ::org::w3c::dom::Element* ele);
	virtual void reportSchemaFatalError($String* key, $ObjectArray* args, ::org::w3c::dom::Element* ele);
	virtual void reset(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual void resolveNamespace(::org::w3c::dom::Element* element, $Array<::org::w3c::dom::Attr>* attrs, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaNamespaceSupport* nsSupport);
	virtual void returnAttrArray($ObjectArray* attrArray, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc);
	$Object* validate($ObjectArray* attrValues, $String* attr, $String* ivalue, int32_t dvIndex, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo* schemaDoc);
	static $String* ELEMENT_N;
	static $String* ELEMENT_R;
	static $String* ATTRIBUTE_N;
	static $String* ATTRIBUTE_R;
	static int32_t ATTIDX_COUNT;
	static int32_t ATTIDX_ABSTRACT;
	static int32_t ATTIDX_AFORMDEFAULT;
	static int32_t ATTIDX_BASE;
	static int32_t ATTIDX_BLOCK;
	static int32_t ATTIDX_BLOCKDEFAULT;
	static int32_t ATTIDX_DEFAULT;
	static int32_t ATTIDX_EFORMDEFAULT;
	static int32_t ATTIDX_FINAL;
	static int32_t ATTIDX_FINALDEFAULT;
	static int32_t ATTIDX_FIXED;
	static int32_t ATTIDX_FORM;
	static int32_t ATTIDX_ID;
	static int32_t ATTIDX_ITEMTYPE;
	static int32_t ATTIDX_MAXOCCURS;
	static int32_t ATTIDX_MEMBERTYPES;
	static int32_t ATTIDX_MINOCCURS;
	static int32_t ATTIDX_MIXED;
	static int32_t ATTIDX_NAME;
	static int32_t ATTIDX_NAMESPACE;
	static int32_t ATTIDX_NAMESPACE_LIST;
	static int32_t ATTIDX_NILLABLE;
	static int32_t ATTIDX_NONSCHEMA;
	static int32_t ATTIDX_PROCESSCONTENTS;
	static int32_t ATTIDX_PUBLIC;
	static int32_t ATTIDX_REF;
	static int32_t ATTIDX_REFER;
	static int32_t ATTIDX_SCHEMALOCATION;
	static int32_t ATTIDX_SOURCE;
	static int32_t ATTIDX_SUBSGROUP;
	static int32_t ATTIDX_SYSTEM;
	static int32_t ATTIDX_TARGETNAMESPACE;
	static int32_t ATTIDX_TYPE;
	static int32_t ATTIDX_USE;
	static int32_t ATTIDX_VALUE;
	static int32_t ATTIDX_ENUMNSDECLS;
	static int32_t ATTIDX_VERSION;
	static int32_t ATTIDX_XML_LANG;
	static int32_t ATTIDX_XPATH;
	static int32_t ATTIDX_FROMDEFAULT;
	static int32_t ATTIDX_ISRETURNED;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XIntPool* fXIntPool;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_QUALIFIED;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_UNQUALIFIED;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_EMPTY_SET;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_ANY_STRICT;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_ANY_LAX;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_ANY_SKIP;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_ANY_ANY;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_ANY_LIST;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_ANY_NOT;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_USE_OPTIONAL;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_USE_REQUIRED;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_USE_PROHIBITED;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_WS_PRESERVE;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_WS_REPLACE;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_WS_COLLAPSE;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* INT_UNBOUNDED;
	static ::java::util::Map* fEleAttrsMapG;
	static ::java::util::Map* fEleAttrsMapL;
	static const int32_t DT_ANYURI = 0;
	static const int32_t DT_ID = 1;
	static const int32_t DT_QNAME = 2;
	static const int32_t DT_STRING = 3;
	static const int32_t DT_TOKEN = 4;
	static const int32_t DT_NCNAME = 5;
	static const int32_t DT_XPATH = 6;
	static const int32_t DT_XPATH1 = 7;
	static const int32_t DT_LANGUAGE = 8;
	static const int32_t DT_COUNT = 9; // DT_LANGUAGE + 1
	static $Array<::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>* fExtraDVs;
	static const int32_t DT_BLOCK = (-1);
	static const int32_t DT_BLOCK1 = (-2);
	static const int32_t DT_FINAL = (-3);
	static const int32_t DT_FINAL1 = (-4);
	static const int32_t DT_FINAL2 = (-5);
	static const int32_t DT_FORM = (-6);
	static const int32_t DT_MAXOCCURS = (-7);
	static const int32_t DT_MAXOCCURS1 = (-8);
	static const int32_t DT_MEMBERTYPES = (-9);
	static const int32_t DT_MINOCCURS1 = (-10);
	static const int32_t DT_NAMESPACE = (-11);
	static const int32_t DT_PROCESSCONTENTS = (-12);
	static const int32_t DT_USE = (-13);
	static const int32_t DT_WHITESPACE = (-14);
	static const int32_t DT_BOOLEAN = (-15);
	static const int32_t DT_NONNEGINT = (-16);
	static const int32_t DT_POSINT = (-17);
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler* fSchemaHandler = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::java::util::Map* fNonSchemaAttrs = nullptr;
	::java::util::List* fNamespaceList = nullptr;
	$booleans* fSeen = nullptr;
	static $booleans* fSeenTemp;
	static const int32_t INIT_POOL_SIZE = 10;
	static const int32_t INC_POOL_SIZE = 10;
	$Array<::java::lang::Object, 2>* fArrayPool = nullptr;
	static $ObjectArray* fTempArray;
	int32_t fPoolPos = 0;
};

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ATTIDX_ABSTRACT")
#pragma pop_macro("ATTIDX_AFORMDEFAULT")
#pragma pop_macro("ATTIDX_BASE")
#pragma pop_macro("ATTIDX_BLOCK")
#pragma pop_macro("ATTIDX_BLOCKDEFAULT")
#pragma pop_macro("ATTIDX_COUNT")
#pragma pop_macro("ATTIDX_DEFAULT")
#pragma pop_macro("ATTIDX_EFORMDEFAULT")
#pragma pop_macro("ATTIDX_ENUMNSDECLS")
#pragma pop_macro("ATTIDX_FINAL")
#pragma pop_macro("ATTIDX_FINALDEFAULT")
#pragma pop_macro("ATTIDX_FIXED")
#pragma pop_macro("ATTIDX_FORM")
#pragma pop_macro("ATTIDX_FROMDEFAULT")
#pragma pop_macro("ATTIDX_ID")
#pragma pop_macro("ATTIDX_ISRETURNED")
#pragma pop_macro("ATTIDX_ITEMTYPE")
#pragma pop_macro("ATTIDX_MAXOCCURS")
#pragma pop_macro("ATTIDX_MEMBERTYPES")
#pragma pop_macro("ATTIDX_MINOCCURS")
#pragma pop_macro("ATTIDX_MIXED")
#pragma pop_macro("ATTIDX_NAME")
#pragma pop_macro("ATTIDX_NAMESPACE")
#pragma pop_macro("ATTIDX_NAMESPACE_LIST")
#pragma pop_macro("ATTIDX_NILLABLE")
#pragma pop_macro("ATTIDX_NONSCHEMA")
#pragma pop_macro("ATTIDX_PROCESSCONTENTS")
#pragma pop_macro("ATTIDX_PUBLIC")
#pragma pop_macro("ATTIDX_REF")
#pragma pop_macro("ATTIDX_REFER")
#pragma pop_macro("ATTIDX_SCHEMALOCATION")
#pragma pop_macro("ATTIDX_SOURCE")
#pragma pop_macro("ATTIDX_SUBSGROUP")
#pragma pop_macro("ATTIDX_SYSTEM")
#pragma pop_macro("ATTIDX_TARGETNAMESPACE")
#pragma pop_macro("ATTIDX_TYPE")
#pragma pop_macro("ATTIDX_USE")
#pragma pop_macro("ATTIDX_VALUE")
#pragma pop_macro("ATTIDX_VERSION")
#pragma pop_macro("ATTIDX_XML_LANG")
#pragma pop_macro("ATTIDX_XPATH")
#pragma pop_macro("ATTRIBUTE_N")
#pragma pop_macro("ATTRIBUTE_R")
#pragma pop_macro("DT_ANYURI")
#pragma pop_macro("DT_BLOCK")
#pragma pop_macro("DT_BLOCK1")
#pragma pop_macro("DT_BOOLEAN")
#pragma pop_macro("DT_COUNT")
#pragma pop_macro("DT_FINAL")
#pragma pop_macro("DT_FINAL1")
#pragma pop_macro("DT_FINAL2")
#pragma pop_macro("DT_FORM")
#pragma pop_macro("DT_ID")
#pragma pop_macro("DT_LANGUAGE")
#pragma pop_macro("DT_MAXOCCURS")
#pragma pop_macro("DT_MAXOCCURS1")
#pragma pop_macro("DT_MEMBERTYPES")
#pragma pop_macro("DT_MINOCCURS1")
#pragma pop_macro("DT_NAMESPACE")
#pragma pop_macro("DT_NCNAME")
#pragma pop_macro("DT_NONNEGINT")
#pragma pop_macro("DT_POSINT")
#pragma pop_macro("DT_PROCESSCONTENTS")
#pragma pop_macro("DT_QNAME")
#pragma pop_macro("DT_STRING")
#pragma pop_macro("DT_TOKEN")
#pragma pop_macro("DT_USE")
#pragma pop_macro("DT_WHITESPACE")
#pragma pop_macro("DT_XPATH")
#pragma pop_macro("DT_XPATH1")
#pragma pop_macro("ELEMENT_N")
#pragma pop_macro("ELEMENT_R")
#pragma pop_macro("INC_POOL_SIZE")
#pragma pop_macro("INIT_POOL_SIZE")
#pragma pop_macro("INT_ANY_ANY")
#pragma pop_macro("INT_ANY_LAX")
#pragma pop_macro("INT_ANY_LIST")
#pragma pop_macro("INT_ANY_NOT")
#pragma pop_macro("INT_ANY_SKIP")
#pragma pop_macro("INT_ANY_STRICT")
#pragma pop_macro("INT_EMPTY_SET")
#pragma pop_macro("INT_QUALIFIED")
#pragma pop_macro("INT_UNBOUNDED")
#pragma pop_macro("INT_UNQUALIFIED")
#pragma pop_macro("INT_USE_OPTIONAL")
#pragma pop_macro("INT_USE_PROHIBITED")
#pragma pop_macro("INT_USE_REQUIRED")
#pragma pop_macro("INT_WS_COLLAPSE")
#pragma pop_macro("INT_WS_PRESERVE")
#pragma pop_macro("INT_WS_REPLACE")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSAttributeChecker_h_