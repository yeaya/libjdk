#ifndef _com_sun_org_apache_bcel_internal_classfile_JavaClass_h_
#define _com_sun_org_apache_bcel_internal_classfile_JavaClass_h_
//$ class com.sun.org.apache.bcel.internal.classfile.JavaClass
//$ extends com.sun.org.apache.bcel.internal.classfile.AccessFlags
//$ implements java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node,java.lang.Comparable

#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/Node.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Comparable.h>

#pragma push_macro("FILE")
#undef FILE
#pragma push_macro("HEAP")
#undef HEAP
#pragma push_macro("ZIP")
#undef ZIP

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class AnnotationEntry;
							class Attribute;
							class ConstantPool;
							class Field;
							class Method;
							class Visitor;
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
							class Repository;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class DataOutputStream;
		class File;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class JavaClass : public ::com::sun::org::apache::bcel::internal::classfile::AccessFlags, public ::java::lang::Cloneable, public ::com::sun::org::apache::bcel::internal::classfile::Node, public ::java::lang::Comparable {
	$class(JavaClass, 0, ::com::sun::org::apache::bcel::internal::classfile::AccessFlags, ::java::lang::Cloneable, ::com::sun::org::apache::bcel::internal::classfile::Node, ::java::lang::Comparable)
public:
	JavaClass();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t classNameIndex, int32_t superclassNameIndex, $String* fileName, int32_t major, int32_t minor, int32_t access_flags, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool, $ints* interfaces, $Array<::com::sun::org::apache::bcel::internal::classfile::Field>* fields, $Array<::com::sun::org::apache::bcel::internal::classfile::Method>* methods, $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes, int8_t source);
	void init$(int32_t classNameIndex, int32_t superclassNameIndex, $String* fileName, int32_t major, int32_t minor, int32_t access_flags, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool, $ints* interfaces, $Array<::com::sun::org::apache::bcel::internal::classfile::Field>* fields, $Array<::com::sun::org::apache::bcel::internal::classfile::Method>* methods, $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes);
	static void Debug($String* str);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual int32_t compareTo(::com::sun::org::apache::bcel::internal::classfile::JavaClass* obj);
	virtual int32_t compareTo(Object$* obj) override;
	void computeNestedTypeStatus();
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* copy();
	virtual void dump(::java::io::File* file);
	virtual void dump($String* _file_name);
	virtual void dump(::java::io::OutputStream* file);
	virtual void dump(::java::io::DataOutputStream* file);
	virtual bool equals(Object$* obj) override;
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>* getAllInterfaces();
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* getAnnotationEntries();
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* getAttributes();
	virtual $bytes* getBytes();
	virtual $String* getClassName();
	virtual int32_t getClassNameIndex();
	static ::com::sun::org::apache::bcel::internal::util::BCELComparator* getComparator();
	virtual ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* getConstantPool();
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::Field>* getFields();
	virtual $String* getFileName();
	virtual $ints* getInterfaceIndices();
	virtual $StringArray* getInterfaceNames();
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>* getInterfaces();
	virtual int32_t getMajor();
	virtual ::com::sun::org::apache::bcel::internal::classfile::Method* getMethod(::java::lang::reflect::Method* m);
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::Method>* getMethods();
	virtual int32_t getMinor();
	virtual $String* getPackageName();
	virtual ::com::sun::org::apache::bcel::internal::util::Repository* getRepository();
	int8_t getSource();
	virtual $String* getSourceFileName();
	virtual ::com::sun::org::apache::bcel::internal::classfile::JavaClass* getSuperClass();
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>* getSuperClasses();
	virtual $String* getSuperclassName();
	virtual int32_t getSuperclassNameIndex();
	virtual int32_t hashCode() override;
	virtual bool implementationOf(::com::sun::org::apache::bcel::internal::classfile::JavaClass* inter);
	static $String* indent(Object$* obj);
	bool instanceOf(::com::sun::org::apache::bcel::internal::classfile::JavaClass* super_class);
	bool isAnonymous();
	bool isClass();
	bool isNested();
	bool isSuper();
	virtual void setAttributes($Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes);
	virtual void setClassName($String* className);
	virtual void setClassNameIndex(int32_t classNameIndex);
	static void setComparator(::com::sun::org::apache::bcel::internal::util::BCELComparator* comparator);
	virtual void setConstantPool(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	virtual void setFields($Array<::com::sun::org::apache::bcel::internal::classfile::Field>* fields);
	virtual void setFileName($String* fileName);
	virtual void setInterfaceNames($StringArray* interfaceNames);
	virtual void setInterfaces($ints* interfaces);
	virtual void setMajor(int32_t major);
	virtual void setMethods($Array<::com::sun::org::apache::bcel::internal::classfile::Method>* methods);
	virtual void setMinor(int32_t minor);
	virtual void setRepository(::com::sun::org::apache::bcel::internal::util::Repository* repository);
	virtual void setSourceFileName($String* sourceFileName);
	virtual void setSuperclassName($String* superclassName);
	virtual void setSuperclassNameIndex(int32_t superclassNameIndex);
	virtual $String* toString() override;
	$String* fileName = nullptr;
	$String* packageName = nullptr;
	$String* sourceFileName = nullptr;
	int32_t classNameIndex = 0;
	int32_t superclassNameIndex = 0;
	$String* className = nullptr;
	$String* superclassName = nullptr;
	int32_t major = 0;
	int32_t minor = 0;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool = nullptr;
	$ints* interfaces = nullptr;
	$StringArray* interfaceNames = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Field>* fields = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Method>* methods = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* annotations = nullptr;
	int8_t source = 0;
	bool isAnonymous$ = false;
	bool isNested$ = false;
	bool computedNestedTypeStatus = false;
	static const int8_t HEAP = 1;
	static const int8_t FILE = 2;
	static const int8_t ZIP = 3;
	static const bool debug = false;
	static ::com::sun::org::apache::bcel::internal::util::BCELComparator* bcelComparator;
	::com::sun::org::apache::bcel::internal::util::Repository* repository = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("FILE")
#pragma pop_macro("HEAP")
#pragma pop_macro("ZIP")

#endif // _com_sun_org_apache_bcel_internal_classfile_JavaClass_h_