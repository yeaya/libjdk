#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl
//$ extends java.util.AbstractMap
//$ implements com.sun.org.apache.xerces.internal.xs.XSNamedMap

#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <java/lang/Array.h>
#include <java/util/AbstractMap.h>

#pragma push_macro("EMPTY_MAP")
#undef EMPTY_MAP

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class SymbolHash;
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
							class XSObject;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
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

class XSNamedMapImpl : public ::java::util::AbstractMap, public ::com::sun::org::apache::xerces::internal::xs::XSNamedMap {
	$class(XSNamedMapImpl, 0, ::java::util::AbstractMap, ::com::sun::org::apache::xerces::internal::xs::XSNamedMap)
public:
	XSNamedMapImpl();
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual $Object* compute(Object$* arg0, ::java::util::function::BiFunction* arg1) override;
	virtual $Object* computeIfAbsent(Object$* arg0, ::java::util::function::Function* arg1) override;
	virtual $Object* computeIfPresent(Object$* arg0, ::java::util::function::BiFunction* arg1) override;
	virtual bool containsValue(Object$* arg0) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::BiConsumer* arg0) override;
	virtual $Object* getOrDefault(Object$* arg0, Object$* arg1) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	void init$($String* namespace$, ::com::sun::org::apache::xerces::internal::util::SymbolHash* map);
	void init$($StringArray* namespaces, $Array<::com::sun::org::apache::xerces::internal::util::SymbolHash>* maps, int32_t num);
	void init$($Array<::com::sun::org::apache::xerces::internal::xs::XSObject>* array, int32_t length);
	virtual bool containsKey(Object$* key) override;
	virtual ::java::util::Set* entrySet() override;
	virtual $Object* get(Object$* key) override;
	virtual int32_t getLength() override;
	static bool isEqual($String* one, $String* two);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObject* item(int32_t index) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObject* itemByName($String* namespace$, $String* localName) override;
	virtual $Object* merge(Object$* arg0, Object$* arg1, ::java::util::function::BiFunction* arg2) override;
	virtual $Object* put(Object$* arg0, Object$* arg1) override;
	virtual void putAll(::java::util::Map* arg0) override;
	virtual $Object* putIfAbsent(Object$* arg0, Object$* arg1) override;
	virtual $Object* remove(Object$* arg0) override;
	virtual bool remove(Object$* arg0, Object$* arg1) override;
	virtual bool replace(Object$* arg0, Object$* arg1, Object$* arg2) override;
	virtual $Object* replace(Object$* arg0, Object$* arg1) override;
	virtual void replaceAll(::java::util::function::BiFunction* arg0) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	static ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl* EMPTY_MAP;
	$StringArray* fNamespaces = nullptr;
	int32_t fNSNum = 0;
	$Array<::com::sun::org::apache::xerces::internal::util::SymbolHash>* fMaps = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xs::XSObject>* fArray = nullptr;
	int32_t fLength = 0;
	::java::util::Set* fEntrySet = nullptr;
};

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY_MAP")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl_h_