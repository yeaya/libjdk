#ifndef _com_sun_org_apache_bcel_internal_classfile_EmptyVisitor_h_
#define _com_sun_org_apache_bcel_internal_classfile_EmptyVisitor_h_
//$ class com.sun.org.apache.bcel.internal.classfile.EmptyVisitor
//$ extends com.sun.org.apache.bcel.internal.classfile.Visitor

#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>

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

class $export EmptyVisitor : public ::com::sun::org::apache::bcel::internal::classfile::Visitor {
	$class(EmptyVisitor, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Visitor)
public:
	EmptyVisitor();
	void init$();
	virtual void visitAnnotation(::com::sun::org::apache::bcel::internal::classfile::Annotations* obj) override;
	virtual void visitAnnotationDefault(::com::sun::org::apache::bcel::internal::classfile::AnnotationDefault* obj) override;
	virtual void visitAnnotationEntry(::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry* obj) override;
	virtual void visitBootstrapMethods(::com::sun::org::apache::bcel::internal::classfile::BootstrapMethods* obj) override;
	virtual void visitCode(::com::sun::org::apache::bcel::internal::classfile::Code* obj) override;
	virtual void visitCodeException(::com::sun::org::apache::bcel::internal::classfile::CodeException* obj) override;
	virtual void visitConstantClass(::com::sun::org::apache::bcel::internal::classfile::ConstantClass* obj) override;
	virtual void visitConstantDouble(::com::sun::org::apache::bcel::internal::classfile::ConstantDouble* obj) override;
	virtual void visitConstantDynamic(::com::sun::org::apache::bcel::internal::classfile::ConstantDynamic* obj) override;
	virtual void visitConstantFieldref(::com::sun::org::apache::bcel::internal::classfile::ConstantFieldref* obj) override;
	virtual void visitConstantFloat(::com::sun::org::apache::bcel::internal::classfile::ConstantFloat* obj) override;
	virtual void visitConstantInteger(::com::sun::org::apache::bcel::internal::classfile::ConstantInteger* obj) override;
	virtual void visitConstantInterfaceMethodref(::com::sun::org::apache::bcel::internal::classfile::ConstantInterfaceMethodref* obj) override;
	virtual void visitConstantInvokeDynamic(::com::sun::org::apache::bcel::internal::classfile::ConstantInvokeDynamic* obj) override;
	virtual void visitConstantLong(::com::sun::org::apache::bcel::internal::classfile::ConstantLong* obj) override;
	virtual void visitConstantMethodHandle(::com::sun::org::apache::bcel::internal::classfile::ConstantMethodHandle* constantMethodHandle) override;
	virtual void visitConstantMethodType(::com::sun::org::apache::bcel::internal::classfile::ConstantMethodType* obj) override;
	virtual void visitConstantMethodref(::com::sun::org::apache::bcel::internal::classfile::ConstantMethodref* obj) override;
	virtual void visitConstantModule(::com::sun::org::apache::bcel::internal::classfile::ConstantModule* constantModule) override;
	virtual void visitConstantNameAndType(::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType* obj) override;
	virtual void visitConstantPackage(::com::sun::org::apache::bcel::internal::classfile::ConstantPackage* constantPackage) override;
	virtual void visitConstantPool(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* obj) override;
	virtual void visitConstantString(::com::sun::org::apache::bcel::internal::classfile::ConstantString* obj) override;
	virtual void visitConstantUtf8(::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8* obj) override;
	virtual void visitConstantValue(::com::sun::org::apache::bcel::internal::classfile::ConstantValue* obj) override;
	virtual void visitDeprecated(::com::sun::org::apache::bcel::internal::classfile::Deprecated* obj) override;
	virtual void visitEnclosingMethod(::com::sun::org::apache::bcel::internal::classfile::EnclosingMethod* obj) override;
	virtual void visitExceptionTable(::com::sun::org::apache::bcel::internal::classfile::ExceptionTable* obj) override;
	virtual void visitField(::com::sun::org::apache::bcel::internal::classfile::Field* obj) override;
	virtual void visitInnerClass(::com::sun::org::apache::bcel::internal::classfile::InnerClass* obj) override;
	virtual void visitInnerClasses(::com::sun::org::apache::bcel::internal::classfile::InnerClasses* obj) override;
	virtual void visitJavaClass(::com::sun::org::apache::bcel::internal::classfile::JavaClass* obj) override;
	virtual void visitLineNumber(::com::sun::org::apache::bcel::internal::classfile::LineNumber* obj) override;
	virtual void visitLineNumberTable(::com::sun::org::apache::bcel::internal::classfile::LineNumberTable* obj) override;
	virtual void visitLocalVariable(::com::sun::org::apache::bcel::internal::classfile::LocalVariable* obj) override;
	virtual void visitLocalVariableTable(::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable* obj) override;
	virtual void visitLocalVariableTypeTable(::com::sun::org::apache::bcel::internal::classfile::LocalVariableTypeTable* obj) override;
	virtual void visitMethod(::com::sun::org::apache::bcel::internal::classfile::Method* obj) override;
	virtual void visitMethodParameter(::com::sun::org::apache::bcel::internal::classfile::MethodParameter* obj) override;
	virtual void visitMethodParameters(::com::sun::org::apache::bcel::internal::classfile::MethodParameters* obj) override;
	virtual void visitModule(::com::sun::org::apache::bcel::internal::classfile::Module* obj) override;
	virtual void visitModuleExports(::com::sun::org::apache::bcel::internal::classfile::ModuleExports* obj) override;
	virtual void visitModuleMainClass(::com::sun::org::apache::bcel::internal::classfile::ModuleMainClass* obj) override;
	virtual void visitModuleOpens(::com::sun::org::apache::bcel::internal::classfile::ModuleOpens* obj) override;
	virtual void visitModulePackages(::com::sun::org::apache::bcel::internal::classfile::ModulePackages* obj) override;
	virtual void visitModuleProvides(::com::sun::org::apache::bcel::internal::classfile::ModuleProvides* obj) override;
	virtual void visitModuleRequires(::com::sun::org::apache::bcel::internal::classfile::ModuleRequires* obj) override;
	virtual void visitNestHost(::com::sun::org::apache::bcel::internal::classfile::NestHost* obj) override;
	virtual void visitNestMembers(::com::sun::org::apache::bcel::internal::classfile::NestMembers* obj) override;
	virtual void visitParameterAnnotation(::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations* obj) override;
	virtual void visitParameterAnnotationEntry(::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry* parameterAnnotationEntry) override;
	virtual void visitSignature(::com::sun::org::apache::bcel::internal::classfile::Signature* obj) override;
	virtual void visitSourceFile(::com::sun::org::apache::bcel::internal::classfile::SourceFile* obj) override;
	virtual void visitStackMap(::com::sun::org::apache::bcel::internal::classfile::StackMap* obj) override;
	virtual void visitStackMapEntry(::com::sun::org::apache::bcel::internal::classfile::StackMapEntry* obj) override;
	virtual void visitSynthetic(::com::sun::org::apache::bcel::internal::classfile::Synthetic* obj) override;
	virtual void visitUnknown(::com::sun::org::apache::bcel::internal::classfile::Unknown* obj) override;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_EmptyVisitor_h_