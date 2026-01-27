#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_XPathMatcher_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_XPathMatcher_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.identity.XPathMatcher
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEBUG_ALL")
#undef DEBUG_ALL
#pragma push_macro("DEBUG_ANY")
#undef DEBUG_ANY
#pragma push_macro("DEBUG_MATCH")
#undef DEBUG_MATCH
#pragma push_macro("DEBUG_METHODS")
#undef DEBUG_METHODS
#pragma push_macro("DEBUG_METHODS2")
#undef DEBUG_METHODS2
#pragma push_macro("DEBUG_METHODS3")
#undef DEBUG_METHODS3
#pragma push_macro("DEBUG_STACK")
#undef DEBUG_STACK
#pragma push_macro("MATCHED")
#undef MATCHED
#pragma push_macro("MATCHED_ATTRIBUTE")
#undef MATCHED_ATTRIBUTE
#pragma push_macro("MATCHED_DESCENDANT")
#undef MATCHED_DESCENDANT
#pragma push_macro("MATCHED_DESCENDANT_PREVIOUS")
#undef MATCHED_DESCENDANT_PREVIOUS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								class XPath;
								class XPath$LocationPath;
								class XPath$NodeTest;
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
							class IntStack;
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
							class QName;
							class XMLAttributes;
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
						namespace xs {
							class ShortList;
							class XSTypeDefinition;
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
								namespace identity {

class XPathMatcher : public ::java::lang::Object {
	$class(XPathMatcher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XPathMatcher();
	void init$(::com::sun::org::apache::xerces::internal::impl::xpath::XPath* xpath);
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type, bool nillable, Object$* value, int16_t valueType, ::com::sun::org::apache::xerces::internal::xs::ShortList* itemValueType);
	virtual void handleContent(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type, bool nillable, Object$* value, int16_t valueType, ::com::sun::org::apache::xerces::internal::xs::ShortList* itemValueType);
	virtual bool isMatched();
	virtual void matched(Object$* actualValue, int16_t valueType, ::com::sun::org::apache::xerces::internal::xs::ShortList* itemValueType, bool isNil);
	static bool matches(::com::sun::org::apache::xerces::internal::impl::xpath::XPath$NodeTest* nodeTest, ::com::sun::org::apache::xerces::internal::xni::QName* value);
	$String* normalize($String* s);
	virtual void startDocumentFragment();
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual $String* toString() override;
	static const bool DEBUG_ALL = false;
	static const bool DEBUG_METHODS = DEBUG_ALL;
	static const bool DEBUG_METHODS2 = DEBUG_ALL;
	static const bool DEBUG_METHODS3 = DEBUG_ALL;
	static const bool DEBUG_MATCH = DEBUG_ALL;
	static const bool DEBUG_STACK = DEBUG_ALL;
	static const bool DEBUG_ANY = DEBUG_STACK;
	static const int32_t MATCHED = 1;
	static const int32_t MATCHED_ATTRIBUTE = 3;
	static const int32_t MATCHED_DESCENDANT = 5;
	static const int32_t MATCHED_DESCENDANT_PREVIOUS = 13;
	$Array<::com::sun::org::apache::xerces::internal::impl::xpath::XPath$LocationPath>* fLocationPaths = nullptr;
	$ints* fMatched = nullptr;
	$Object* fMatchedString = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::util::IntStack>* fStepIndexes = nullptr;
	$ints* fCurrentStep = nullptr;
	$ints* fNoMatchDepth = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fQName = nullptr;
};

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG_ALL")
#pragma pop_macro("DEBUG_ANY")
#pragma pop_macro("DEBUG_MATCH")
#pragma pop_macro("DEBUG_METHODS")
#pragma pop_macro("DEBUG_METHODS2")
#pragma pop_macro("DEBUG_METHODS3")
#pragma pop_macro("DEBUG_STACK")
#pragma pop_macro("MATCHED")
#pragma pop_macro("MATCHED_ATTRIBUTE")
#pragma pop_macro("MATCHED_DESCENDANT")
#pragma pop_macro("MATCHED_DESCENDANT_PREVIOUS")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_XPathMatcher_h_