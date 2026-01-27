#ifndef _com_sun_org_apache_xerces_internal_xpointer_ShortHandPointer_h_
#define _com_sun_org_apache_xerces_internal_xpointer_ShortHandPointer_h_
//$ class com.sun.org.apache.xerces.internal.xpointer.ShortHandPointer
//$ extends com.sun.org.apache.xerces.internal.xpointer.XPointerPart

#include <com/sun/org/apache/xerces/internal/xpointer/XPointerPart.h>

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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class Augmentations;
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
						namespace xpointer {

class ShortHandPointer : public ::com::sun::org::apache::xerces::internal::xpointer::XPointerPart {
	$class(ShortHandPointer, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xpointer::XPointerPart)
public:
	ShortHandPointer();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	$String* getChildrenSchemaDeterminedID(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, int32_t index);
	$String* getDTDDeterminedID(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, int32_t index);
	$String* getSchemaDeterminedID(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, int32_t index);
	virtual $String* getSchemeData() override;
	virtual $String* getSchemeName() override;
	bool hasMatchingIdentifier(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, int32_t event);
	virtual bool isChildFragmentResolved() override;
	virtual bool isFragmentResolved() override;
	virtual void parseXPointer($String* part) override;
	virtual bool resolveXPointer(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, int32_t event) override;
	virtual void setSchemeData($String* schemeData) override;
	virtual void setSchemeName($String* schemeName) override;
	$String* fShortHandPointer = nullptr;
	bool fIsFragmentResolved = false;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	int32_t fMatchingChildCount = 0;
};

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xpointer_ShortHandPointer_h_