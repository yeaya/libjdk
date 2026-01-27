#ifndef _com_sun_org_apache_xerces_internal_xni_XMLDTDContentModelHandler_h_
#define _com_sun_org_apache_xerces_internal_xni_XMLDTDContentModelHandler_h_
//$ interface com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("OCCURS_ONE_OR_MORE")
#undef OCCURS_ONE_OR_MORE
#pragma push_macro("OCCURS_ZERO_OR_MORE")
#undef OCCURS_ZERO_OR_MORE
#pragma push_macro("OCCURS_ZERO_OR_ONE")
#undef OCCURS_ZERO_OR_ONE
#pragma push_macro("SEPARATOR_CHOICE")
#undef SEPARATOR_CHOICE
#pragma push_macro("SEPARATOR_SEQUENCE")
#undef SEPARATOR_SEQUENCE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class Augmentations;
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
								class XMLDTDContentModelSource;
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
						namespace xni {

class XMLDTDContentModelHandler : public ::java::lang::Object {
	$interface(XMLDTDContentModelHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void any(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void element($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void empty(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void endContentModel(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void endGroup(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource* getDTDContentModelSource() {return nullptr;}
	virtual void occurrence(int16_t occurrence, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void pcdata(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void separator(int16_t separator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void setDTDContentModelSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource* source) {}
	virtual void startContentModel($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void startGroup(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	static const int16_t SEPARATOR_CHOICE = 0;
	static const int16_t SEPARATOR_SEQUENCE = 1;
	static const int16_t OCCURS_ZERO_OR_ONE = 2;
	static const int16_t OCCURS_ZERO_OR_MORE = 3;
	static const int16_t OCCURS_ONE_OR_MORE = 4;
};

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("OCCURS_ONE_OR_MORE")
#pragma pop_macro("OCCURS_ZERO_OR_MORE")
#pragma pop_macro("OCCURS_ZERO_OR_ONE")
#pragma pop_macro("SEPARATOR_CHOICE")
#pragma pop_macro("SEPARATOR_SEQUENCE")

#endif // _com_sun_org_apache_xerces_internal_xni_XMLDTDContentModelHandler_h_