#ifndef _com_sun_org_apache_bcel_internal_classfile_Visitor_h_
#define _com_sun_org_apache_bcel_internal_classfile_Visitor_h_
//$ interface com.sun.org.apache.bcel.internal.classfile.Visitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class AnnotationDefault;
							class AnnotationEntry;
							class Annotations;
							class BootstrapMethods;
							class Code;
							class CodeException;
							class ConstantClass;
							class ConstantDouble;
							class ConstantDynamic;
							class ConstantFieldref;
							class ConstantFloat;
							class ConstantInteger;
							class ConstantInterfaceMethodref;
							class ConstantInvokeDynamic;
							class ConstantLong;
							class ConstantMethodHandle;
							class ConstantMethodType;
							class ConstantMethodref;
							class ConstantModule;
							class ConstantNameAndType;
							class ConstantPackage;
							class ConstantPool;
							class ConstantString;
							class ConstantUtf8;
							class ConstantValue;
							class Deprecated;
							class EnclosingMethod;
							class ExceptionTable;
							class Field;
							class InnerClass;
							class InnerClasses;
							class JavaClass;
							class LineNumber;
							class LineNumberTable;
							class LocalVariable;
							class LocalVariableTable;
							class LocalVariableTypeTable;
							class Method;
							class MethodParameter;
							class MethodParameters;
							class Module;
							class ModuleExports;
							class ModuleMainClass;
							class ModuleOpens;
							class ModulePackages;
							class ModuleProvides;
							class ModuleRequires;
							class NestHost;
							class NestMembers;
							class ParameterAnnotationEntry;
							class ParameterAnnotations;
							class Signature;
							class SourceFile;
							class StackMap;
							class StackMapEntry;
							class Synthetic;
							class Unknown;
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
						namespace classfile {

class $import Visitor : public ::java::lang::Object {
	$interface(Visitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void visitAnnotation(::com::sun::org::apache::bcel::internal::classfile::Annotations* obj) {}
	virtual void visitAnnotationDefault(::com::sun::org::apache::bcel::internal::classfile::AnnotationDefault* obj) {}
	virtual void visitAnnotationEntry(::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry* obj) {}
	virtual void visitBootstrapMethods(::com::sun::org::apache::bcel::internal::classfile::BootstrapMethods* obj) {}
	virtual void visitCode(::com::sun::org::apache::bcel::internal::classfile::Code* obj) {}
	virtual void visitCodeException(::com::sun::org::apache::bcel::internal::classfile::CodeException* obj) {}
	virtual void visitConstantClass(::com::sun::org::apache::bcel::internal::classfile::ConstantClass* obj) {}
	virtual void visitConstantDouble(::com::sun::org::apache::bcel::internal::classfile::ConstantDouble* obj) {}
	virtual void visitConstantDynamic(::com::sun::org::apache::bcel::internal::classfile::ConstantDynamic* constantDynamic);
	virtual void visitConstantFieldref(::com::sun::org::apache::bcel::internal::classfile::ConstantFieldref* obj) {}
	virtual void visitConstantFloat(::com::sun::org::apache::bcel::internal::classfile::ConstantFloat* obj) {}
	virtual void visitConstantInteger(::com::sun::org::apache::bcel::internal::classfile::ConstantInteger* obj) {}
	virtual void visitConstantInterfaceMethodref(::com::sun::org::apache::bcel::internal::classfile::ConstantInterfaceMethodref* obj) {}
	virtual void visitConstantInvokeDynamic(::com::sun::org::apache::bcel::internal::classfile::ConstantInvokeDynamic* obj) {}
	virtual void visitConstantLong(::com::sun::org::apache::bcel::internal::classfile::ConstantLong* obj) {}
	virtual void visitConstantMethodHandle(::com::sun::org::apache::bcel::internal::classfile::ConstantMethodHandle* obj) {}
	virtual void visitConstantMethodType(::com::sun::org::apache::bcel::internal::classfile::ConstantMethodType* obj) {}
	virtual void visitConstantMethodref(::com::sun::org::apache::bcel::internal::classfile::ConstantMethodref* obj) {}
	virtual void visitConstantModule(::com::sun::org::apache::bcel::internal::classfile::ConstantModule* constantModule) {}
	virtual void visitConstantNameAndType(::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType* obj) {}
	virtual void visitConstantPackage(::com::sun::org::apache::bcel::internal::classfile::ConstantPackage* constantPackage) {}
	virtual void visitConstantPool(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* obj) {}
	virtual void visitConstantString(::com::sun::org::apache::bcel::internal::classfile::ConstantString* obj) {}
	virtual void visitConstantUtf8(::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8* obj) {}
	virtual void visitConstantValue(::com::sun::org::apache::bcel::internal::classfile::ConstantValue* obj) {}
	virtual void visitDeprecated(::com::sun::org::apache::bcel::internal::classfile::Deprecated* obj) {}
	virtual void visitEnclosingMethod(::com::sun::org::apache::bcel::internal::classfile::EnclosingMethod* obj) {}
	virtual void visitExceptionTable(::com::sun::org::apache::bcel::internal::classfile::ExceptionTable* obj) {}
	virtual void visitField(::com::sun::org::apache::bcel::internal::classfile::Field* obj) {}
	virtual void visitInnerClass(::com::sun::org::apache::bcel::internal::classfile::InnerClass* obj) {}
	virtual void visitInnerClasses(::com::sun::org::apache::bcel::internal::classfile::InnerClasses* obj) {}
	virtual void visitJavaClass(::com::sun::org::apache::bcel::internal::classfile::JavaClass* obj) {}
	virtual void visitLineNumber(::com::sun::org::apache::bcel::internal::classfile::LineNumber* obj) {}
	virtual void visitLineNumberTable(::com::sun::org::apache::bcel::internal::classfile::LineNumberTable* obj) {}
	virtual void visitLocalVariable(::com::sun::org::apache::bcel::internal::classfile::LocalVariable* obj) {}
	virtual void visitLocalVariableTable(::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable* obj) {}
	virtual void visitLocalVariableTypeTable(::com::sun::org::apache::bcel::internal::classfile::LocalVariableTypeTable* obj) {}
	virtual void visitMethod(::com::sun::org::apache::bcel::internal::classfile::Method* obj) {}
	virtual void visitMethodParameter(::com::sun::org::apache::bcel::internal::classfile::MethodParameter* obj);
	virtual void visitMethodParameters(::com::sun::org::apache::bcel::internal::classfile::MethodParameters* obj) {}
	virtual void visitModule(::com::sun::org::apache::bcel::internal::classfile::Module* constantModule);
	virtual void visitModuleExports(::com::sun::org::apache::bcel::internal::classfile::ModuleExports* constantModule);
	virtual void visitModuleMainClass(::com::sun::org::apache::bcel::internal::classfile::ModuleMainClass* obj);
	virtual void visitModuleOpens(::com::sun::org::apache::bcel::internal::classfile::ModuleOpens* constantModule);
	virtual void visitModulePackages(::com::sun::org::apache::bcel::internal::classfile::ModulePackages* constantModule);
	virtual void visitModuleProvides(::com::sun::org::apache::bcel::internal::classfile::ModuleProvides* constantModule);
	virtual void visitModuleRequires(::com::sun::org::apache::bcel::internal::classfile::ModuleRequires* constantModule);
	virtual void visitNestHost(::com::sun::org::apache::bcel::internal::classfile::NestHost* obj);
	virtual void visitNestMembers(::com::sun::org::apache::bcel::internal::classfile::NestMembers* obj);
	virtual void visitParameterAnnotation(::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations* obj) {}
	virtual void visitParameterAnnotationEntry(::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry* obj) {}
	virtual void visitSignature(::com::sun::org::apache::bcel::internal::classfile::Signature* obj) {}
	virtual void visitSourceFile(::com::sun::org::apache::bcel::internal::classfile::SourceFile* obj) {}
	virtual void visitStackMap(::com::sun::org::apache::bcel::internal::classfile::StackMap* obj) {}
	virtual void visitStackMapEntry(::com::sun::org::apache::bcel::internal::classfile::StackMapEntry* obj) {}
	virtual void visitSynthetic(::com::sun::org::apache::bcel::internal::classfile::Synthetic* obj) {}
	virtual void visitUnknown(::com::sun::org::apache::bcel::internal::classfile::Unknown* obj) {}
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Visitor_h_