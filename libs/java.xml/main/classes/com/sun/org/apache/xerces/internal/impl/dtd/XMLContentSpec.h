#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XMLContentSpec_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XMLContentSpec_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.XMLContentSpec
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONTENTSPECNODE_ANY")
#undef CONTENTSPECNODE_ANY
#pragma push_macro("CONTENTSPECNODE_ANY_LAX")
#undef CONTENTSPECNODE_ANY_LAX
#pragma push_macro("CONTENTSPECNODE_ANY_LOCAL")
#undef CONTENTSPECNODE_ANY_LOCAL
#pragma push_macro("CONTENTSPECNODE_ANY_LOCAL_LAX")
#undef CONTENTSPECNODE_ANY_LOCAL_LAX
#pragma push_macro("CONTENTSPECNODE_ANY_LOCAL_SKIP")
#undef CONTENTSPECNODE_ANY_LOCAL_SKIP
#pragma push_macro("CONTENTSPECNODE_ANY_OTHER")
#undef CONTENTSPECNODE_ANY_OTHER
#pragma push_macro("CONTENTSPECNODE_ANY_OTHER_LAX")
#undef CONTENTSPECNODE_ANY_OTHER_LAX
#pragma push_macro("CONTENTSPECNODE_ANY_OTHER_SKIP")
#undef CONTENTSPECNODE_ANY_OTHER_SKIP
#pragma push_macro("CONTENTSPECNODE_ANY_SKIP")
#undef CONTENTSPECNODE_ANY_SKIP
#pragma push_macro("CONTENTSPECNODE_CHOICE")
#undef CONTENTSPECNODE_CHOICE
#pragma push_macro("CONTENTSPECNODE_LEAF")
#undef CONTENTSPECNODE_LEAF
#pragma push_macro("CONTENTSPECNODE_ONE_OR_MORE")
#undef CONTENTSPECNODE_ONE_OR_MORE
#pragma push_macro("CONTENTSPECNODE_SEQ")
#undef CONTENTSPECNODE_SEQ
#pragma push_macro("CONTENTSPECNODE_ZERO_OR_MORE")
#undef CONTENTSPECNODE_ZERO_OR_MORE
#pragma push_macro("CONTENTSPECNODE_ZERO_OR_ONE")
#undef CONTENTSPECNODE_ZERO_OR_ONE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								class XMLContentSpec$Provider;
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
							namespace dtd {

class XMLContentSpec : public ::java::lang::Object {
	$class(XMLContentSpec, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLContentSpec();
	void init$();
	void init$(int16_t type, Object$* value, Object$* otherValue);
	void init$(::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec* contentSpec);
	void init$(::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec$Provider* provider, int32_t contentSpecIndex);
	virtual void clear();
	virtual bool equals(Object$* object) override;
	virtual int32_t hashCode() override;
	virtual void setValues(int16_t type, Object$* value, Object$* otherValue);
	virtual void setValues(::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec* contentSpec);
	virtual void setValues(::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec$Provider* provider, int32_t contentSpecIndex);
	static const int16_t CONTENTSPECNODE_LEAF = 0;
	static const int16_t CONTENTSPECNODE_ZERO_OR_ONE = 1;
	static const int16_t CONTENTSPECNODE_ZERO_OR_MORE = 2;
	static const int16_t CONTENTSPECNODE_ONE_OR_MORE = 3;
	static const int16_t CONTENTSPECNODE_CHOICE = 4;
	static const int16_t CONTENTSPECNODE_SEQ = 5;
	static const int16_t CONTENTSPECNODE_ANY = 6;
	static const int16_t CONTENTSPECNODE_ANY_OTHER = 7;
	static const int16_t CONTENTSPECNODE_ANY_LOCAL = 8;
	static const int16_t CONTENTSPECNODE_ANY_LAX = 22;
	static const int16_t CONTENTSPECNODE_ANY_OTHER_LAX = 23;
	static const int16_t CONTENTSPECNODE_ANY_LOCAL_LAX = 24;
	static const int16_t CONTENTSPECNODE_ANY_SKIP = 38;
	static const int16_t CONTENTSPECNODE_ANY_OTHER_SKIP = 39;
	static const int16_t CONTENTSPECNODE_ANY_LOCAL_SKIP = 40;
	int16_t type = 0;
	$Object* value = nullptr;
	$Object* otherValue = nullptr;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CONTENTSPECNODE_ANY")
#pragma pop_macro("CONTENTSPECNODE_ANY_LAX")
#pragma pop_macro("CONTENTSPECNODE_ANY_LOCAL")
#pragma pop_macro("CONTENTSPECNODE_ANY_LOCAL_LAX")
#pragma pop_macro("CONTENTSPECNODE_ANY_LOCAL_SKIP")
#pragma pop_macro("CONTENTSPECNODE_ANY_OTHER")
#pragma pop_macro("CONTENTSPECNODE_ANY_OTHER_LAX")
#pragma pop_macro("CONTENTSPECNODE_ANY_OTHER_SKIP")
#pragma pop_macro("CONTENTSPECNODE_ANY_SKIP")
#pragma pop_macro("CONTENTSPECNODE_CHOICE")
#pragma pop_macro("CONTENTSPECNODE_LEAF")
#pragma pop_macro("CONTENTSPECNODE_ONE_OR_MORE")
#pragma pop_macro("CONTENTSPECNODE_SEQ")
#pragma pop_macro("CONTENTSPECNODE_ZERO_OR_MORE")
#pragma pop_macro("CONTENTSPECNODE_ZERO_OR_ONE")

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XMLContentSpec_h_