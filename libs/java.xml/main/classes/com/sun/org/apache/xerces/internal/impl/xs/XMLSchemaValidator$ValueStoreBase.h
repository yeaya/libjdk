#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$ValueStoreBase_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$ValueStoreBase_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase
//$ extends com.sun.org.apache.xerces.internal.impl.xs.identity.ValueStore

#include <com/sun/org/apache/xerces/internal/impl/xs/identity/ValueStore.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class XMLSchemaValidator;
								class XMLSchemaValidator$ShortVector;
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
								namespace identity {
									class Field;
									class IdentityConstraint;
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
						namespace xs {
							class ShortList;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Vector;
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

class XMLSchemaValidator$ValueStoreBase : public ::com::sun::org::apache::xerces::internal::impl::xs::identity::ValueStore {
	$class(XMLSchemaValidator$ValueStoreBase, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::identity::ValueStore)
public:
	XMLSchemaValidator$ValueStoreBase();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* this$0, ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* identityConstraint);
	void addItemValueType(::com::sun::org::apache::xerces::internal::xs::ShortList* itemValueType);
	virtual void addValue(::com::sun::org::apache::xerces::internal::impl::xs::identity::Field* field, bool mayMatch, Object$* actualValue, int16_t valueType, ::com::sun::org::apache::xerces::internal::xs::ShortList* itemValueType) override;
	void addValueType(int16_t type);
	virtual void append(::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase* newVal);
	virtual void checkDuplicateValues();
	virtual void clear();
	virtual bool contains();
	virtual int32_t contains(::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase* vsb);
	virtual void endDocument();
	virtual void endDocumentFragment();
	virtual void endValueScope();
	::com::sun::org::apache::xerces::internal::xs::ShortList* getItemValueTypeAt(int32_t index);
	int16_t getValueTypeAt(int32_t index);
	bool itemValueTypeContains(::com::sun::org::apache::xerces::internal::xs::ShortList* value);
	virtual void reportError($String* key, $ObjectArray* args) override;
	virtual void startValueScope();
	virtual $String* toString($ObjectArray* values);
	virtual $String* toString(::java::util::Vector* values, int32_t start, int32_t length);
	virtual $String* toString() override;
	bool valueTypeContains(int16_t value);
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* this$0 = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* fIdentityConstraint = nullptr;
	int32_t fFieldCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::Field>* fFields = nullptr;
	$ObjectArray* fLocalValues = nullptr;
	$shorts* fLocalValueTypes = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xs::ShortList>* fLocalItemValueTypes = nullptr;
	int32_t fValuesCount = 0;
	bool fHasValue = false;
	::java::util::Vector* fValues = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ShortVector* fValueTypes = nullptr;
	::java::util::Vector* fItemValueTypes = nullptr;
	bool fUseValueTypeVector = false;
	int32_t fValueTypesLength = 0;
	int16_t fValueType = 0;
	bool fUseItemValueTypeVector = false;
	int32_t fItemValueTypesLength = 0;
	::com::sun::org::apache::xerces::internal::xs::ShortList* fItemValueType = nullptr;
	::java::lang::StringBuilder* fTempBuffer = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$ValueStoreBase_h_