#ifndef _sun_tools_jar_FingerPrint$ClassAttributes_h_
#define _sun_tools_jar_FingerPrint$ClassAttributes_h_
//$ class sun.tools.jar.FingerPrint$ClassAttributes
//$ extends jdk.internal.org.objectweb.asm.ClassVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>

namespace java {
	namespace util {
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class FieldVisitor;
					class MethodVisitor;
				}
			}
		}
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class FingerPrint$ClassAttributes : public ::jdk::internal::org::objectweb::asm$::ClassVisitor {
	$class(FingerPrint$ClassAttributes, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ClassVisitor)
public:
	FingerPrint$ClassAttributes();
	void init$();
	virtual bool equals(Object$* that) override;
	virtual int32_t hashCode() override;
	bool isPublic(int32_t access);
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::FieldVisitor* visitField(int32_t access, $String* name, $String* desc, $String* signature, Object$* value) override;
	virtual void visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) override;
	virtual ::jdk::internal::org::objectweb::asm$::MethodVisitor* visitMethod(int32_t access, $String* name, $String* desc, $String* signature, $StringArray* exceptions) override;
	virtual void visitOuterClass($String* owner, $String* name, $String* desc) override;
	$String* name = nullptr;
	$String* outerClassName = nullptr;
	$String* superName = nullptr;
	int32_t version = 0;
	int32_t access = 0;
	bool publicClass = false;
	bool nestedClass = false;
	::java::util::Set* fields = nullptr;
	::java::util::Set* methods = nullptr;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_FingerPrint$ClassAttributes_h_