#ifndef _com_sun_org_apache_xerces_internal_impl_dv_ValidatedInfo_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_ValidatedInfo_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.ValidatedInfo
//$ extends com.sun.org.apache.xerces.internal.xs.XSValue

#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <java/lang/Array.h>

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
						namespace xs {
							class ShortList;
							class XSObjectList;
							class XSSimpleTypeDefinition;
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
							namespace dv {

class ValidatedInfo : public ::com::sun::org::apache::xerces::internal::xs::XSValue {
	$class(ValidatedInfo, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSValue)
public:
	ValidatedInfo();
	void init$();
	static int16_t convertToPrimitiveKind(int16_t valueType);
	virtual void copyFrom(::com::sun::org::apache::xerces::internal::xs::XSValue* o);
	virtual $Object* getActualValue() override;
	virtual int16_t getActualValueType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getListValueTypes() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getMemberTypeDefinition() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getMemberTypeDefinitions() override;
	virtual $String* getNormalizedValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getTypeDefinition() override;
	static bool isComparable(::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* info1, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* info2);
	virtual void reset();
	virtual $String* stringValue();
	$String* normalizedValue = nullptr;
	$Object* actualValue = nullptr;
	int16_t actualValueType = 0;
	::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* actualType = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* memberType = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>* memberTypes = nullptr;
	::com::sun::org::apache::xerces::internal::xs::ShortList* itemValueTypes = nullptr;
};

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_ValidatedInfo_h_