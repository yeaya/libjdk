#ifndef _com_sun_org_apache_bcel_internal_generic_FieldGen_h_
#define _com_sun_org_apache_bcel_internal_generic_FieldGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.FieldGen
//$ extends com.sun.org.apache.bcel.internal.generic.FieldGenOrMethodGen

#include <com/sun/org/apache/bcel/internal/generic/FieldGenOrMethodGen.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Field;
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
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class FieldObserver;
							class Type;
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
				namespace bcel {
					namespace internal {
						namespace util {
							class BCELComparator;
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
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class FieldGen : public ::com::sun::org::apache::bcel::internal::generic::FieldGenOrMethodGen {
	$class(FieldGen, 0, ::com::sun::org::apache::bcel::internal::generic::FieldGenOrMethodGen)
public:
	FieldGen();
	void init$(int32_t access_flags, ::com::sun::org::apache::bcel::internal::generic::Type* type, $String* name, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	void init$(::com::sun::org::apache::bcel::internal::classfile::Field* field, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	void addAnnotationsAsAttribute(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	int32_t addConstant();
	virtual void addObserver(::com::sun::org::apache::bcel::internal::generic::FieldObserver* o);
	virtual void cancelInitValue();
	void checkType(::com::sun::org::apache::bcel::internal::generic::Type* atype);
	virtual ::com::sun::org::apache::bcel::internal::generic::FieldGen* copy(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	virtual bool equals(Object$* obj) override;
	static ::com::sun::org::apache::bcel::internal::util::BCELComparator* getComparator();
	virtual ::com::sun::org::apache::bcel::internal::classfile::Field* getField();
	virtual $String* getInitValue();
	virtual $String* getSignature() override;
	virtual int32_t hashCode() override;
	virtual void removeObserver(::com::sun::org::apache::bcel::internal::generic::FieldObserver* o);
	static void setComparator(::com::sun::org::apache::bcel::internal::util::BCELComparator* comparator);
	virtual void setInitValue($String* str);
	virtual void setInitValue(int64_t l);
	virtual void setInitValue(int32_t i);
	virtual void setInitValue(int16_t s);
	virtual void setInitValue(char16_t c);
	virtual void setInitValue(int8_t b);
	virtual void setInitValue(bool b);
	virtual void setInitValue(float f);
	virtual void setInitValue(double d);
	void setValue(int32_t index);
	virtual $String* toString() override;
	virtual void update();
	$Object* value = nullptr;
	static ::com::sun::org::apache::bcel::internal::util::BCELComparator* bcelComparator;
	::java::util::List* observers = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_FieldGen_h_