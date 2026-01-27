#ifndef _com_sun_org_apache_bcel_internal_generic_ClassGen_h_
#define _com_sun_org_apache_bcel_internal_generic_ClassGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.ClassGen
//$ extends com.sun.org.apache.bcel.internal.classfile.AccessFlags
//$ implements java.lang.Cloneable

#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Attribute;
							class Field;
							class JavaClass;
							class Method;
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
							class AnnotationEntryGen;
							class ClassObserver;
							class ConstantPoolGen;
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

class ClassGen : public ::com::sun::org::apache::bcel::internal::classfile::AccessFlags, public ::java::lang::Cloneable {
	$class(ClassGen, 0, ::com::sun::org::apache::bcel::internal::classfile::AccessFlags, ::java::lang::Cloneable)
public:
	ClassGen();
	virtual void finalize() override;
	void init$($String* className, $String* superClassName, $String* fileName, int32_t accessFlags, $StringArray* interfaces, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	void init$($String* className, $String* superClassName, $String* fileName, int32_t accessFlags, $StringArray* interfaces);
	void init$(::com::sun::org::apache::bcel::internal::classfile::JavaClass* clazz);
	virtual void addAnnotationEntry(::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen* a);
	virtual void addAttribute(::com::sun::org::apache::bcel::internal::classfile::Attribute* a);
	virtual void addEmptyConstructor(int32_t access_flags);
	virtual void addField(::com::sun::org::apache::bcel::internal::classfile::Field* f);
	virtual void addInterface($String* name);
	virtual void addMethod(::com::sun::org::apache::bcel::internal::classfile::Method* m);
	virtual void addObserver(::com::sun::org::apache::bcel::internal::generic::ClassObserver* o);
	virtual $Object* clone() override;
	virtual bool containsField(::com::sun::org::apache::bcel::internal::classfile::Field* f);
	virtual ::com::sun::org::apache::bcel::internal::classfile::Field* containsField($String* name);
	virtual ::com::sun::org::apache::bcel::internal::classfile::Method* containsMethod($String* name, $String* signature);
	virtual bool equals(Object$* obj) override;
	virtual $Array<::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen>* getAnnotationEntries();
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* getAttributes();
	virtual $String* getClassName();
	virtual int32_t getClassNameIndex();
	static ::com::sun::org::apache::bcel::internal::util::BCELComparator* getComparator();
	virtual ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* getConstantPool();
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::Field>* getFields();
	virtual $String* getFileName();
	virtual $StringArray* getInterfaceNames();
	virtual $ints* getInterfaces();
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* getJavaClass();
	virtual int32_t getMajor();
	virtual ::com::sun::org::apache::bcel::internal::classfile::Method* getMethodAt(int32_t pos);
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::Method>* getMethods();
	virtual int32_t getMinor();
	virtual $String* getSuperclassName();
	virtual int32_t getSuperclassNameIndex();
	virtual int32_t hashCode() override;
	virtual void removeAttribute(::com::sun::org::apache::bcel::internal::classfile::Attribute* a);
	virtual void removeField(::com::sun::org::apache::bcel::internal::classfile::Field* f);
	virtual void removeInterface($String* name);
	virtual void removeMethod(::com::sun::org::apache::bcel::internal::classfile::Method* m);
	virtual void removeObserver(::com::sun::org::apache::bcel::internal::generic::ClassObserver* o);
	virtual void replaceField(::com::sun::org::apache::bcel::internal::classfile::Field* old, ::com::sun::org::apache::bcel::internal::classfile::Field* new_);
	virtual void replaceMethod(::com::sun::org::apache::bcel::internal::classfile::Method* old, ::com::sun::org::apache::bcel::internal::classfile::Method* new_);
	virtual void setClassName($String* name);
	virtual void setClassNameIndex(int32_t class_name_index);
	static void setComparator(::com::sun::org::apache::bcel::internal::util::BCELComparator* comparator);
	virtual void setConstantPool(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* constant_pool);
	virtual void setMajor(int32_t major);
	virtual void setMethodAt(::com::sun::org::apache::bcel::internal::classfile::Method* method, int32_t pos);
	virtual void setMethods($Array<::com::sun::org::apache::bcel::internal::classfile::Method>* methods);
	virtual void setMinor(int32_t minor);
	virtual void setSuperclassName($String* name);
	virtual void setSuperclassNameIndex(int32_t superclass_name_index);
	virtual $String* toString() override;
	$Array<::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen>* unpackAnnotations($Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attrs);
	virtual void update();
	$String* className = nullptr;
	$String* superClassName = nullptr;
	$String* fileName = nullptr;
	int32_t classNameIndex = 0;
	int32_t superclass_name_index = 0;
	int32_t major = 0;
	int32_t minor = 0;
	::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp = nullptr;
	::java::util::List* fieldList = nullptr;
	::java::util::List* methodList = nullptr;
	::java::util::List* attributeList = nullptr;
	::java::util::List* interfaceList = nullptr;
	::java::util::List* annotationList = nullptr;
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

#endif // _com_sun_org_apache_bcel_internal_generic_ClassGen_h_