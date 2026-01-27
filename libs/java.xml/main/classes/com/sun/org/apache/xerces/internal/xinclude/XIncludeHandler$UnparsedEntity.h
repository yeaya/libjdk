#ifndef _com_sun_org_apache_xerces_internal_xinclude_XIncludeHandler$UnparsedEntity_h_
#define _com_sun_org_apache_xerces_internal_xinclude_XIncludeHandler$UnparsedEntity_h_
//$ class com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler$UnparsedEntity
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
						namespace xinclude {

class XIncludeHandler$UnparsedEntity : public ::java::lang::Object {
	$class(XIncludeHandler$UnparsedEntity, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XIncludeHandler$UnparsedEntity();
	void init$();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual bool isDuplicate(Object$* obj);
	$String* name = nullptr;
	$String* systemId = nullptr;
	$String* baseURI = nullptr;
	$String* publicId = nullptr;
	$String* expandedSystemId = nullptr;
	$String* notation = nullptr;
	::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations = nullptr;
};

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xinclude_XIncludeHandler$UnparsedEntity_h_