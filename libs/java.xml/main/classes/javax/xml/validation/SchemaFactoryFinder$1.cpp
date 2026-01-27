#include <javax/xml/validation/SchemaFactoryFinder$1.h>

#include <javax/xml/validation/SchemaFactory.h>
#include <javax/xml/validation/SchemaFactoryFinder.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SchemaFactory = ::javax::xml::validation::SchemaFactory;
using $SchemaFactoryFinder = ::javax::xml::validation::SchemaFactoryFinder;

namespace javax {
	namespace xml {
		namespace validation {

$FieldInfo _SchemaFactoryFinder$1_FieldInfo_[] = {
	{"this$0", "Ljavax/xml/validation/SchemaFactoryFinder;", nullptr, $FINAL | $SYNTHETIC, $field(SchemaFactoryFinder$1, this$0)},
	{"val$schemaLanguage", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SchemaFactoryFinder$1, val$schemaLanguage)},
	{"val$factory", "Ljavax/xml/validation/SchemaFactory;", nullptr, $FINAL | $SYNTHETIC, $field(SchemaFactoryFinder$1, val$factory)},
	{}
};

$MethodInfo _SchemaFactoryFinder$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/validation/SchemaFactoryFinder;Ljavax/xml/validation/SchemaFactory;Ljava/lang/String;)V", "()V", 0, $method(SchemaFactoryFinder$1, init$, void, $SchemaFactoryFinder*, $SchemaFactory*, $String*)},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _SchemaFactoryFinder$1_EnclosingMethodInfo_ = {
	"javax.xml.validation.SchemaFactoryFinder",
	"isSchemaLanguageSupportedBy",
	"(Ljavax/xml/validation/SchemaFactory;Ljava/lang/String;Ljava/security/AccessControlContext;)Z"
};

$InnerClassInfo _SchemaFactoryFinder$1_InnerClassesInfo_[] = {
	{"javax.xml.validation.SchemaFactoryFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SchemaFactoryFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.validation.SchemaFactoryFinder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SchemaFactoryFinder$1_FieldInfo_,
	_SchemaFactoryFinder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_SchemaFactoryFinder$1_EnclosingMethodInfo_,
	_SchemaFactoryFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.validation.SchemaFactoryFinder"
};

$Object* allocate$SchemaFactoryFinder$1($Class* clazz) {
	return $of($alloc(SchemaFactoryFinder$1));
}

void SchemaFactoryFinder$1::init$($SchemaFactoryFinder* this$0, $SchemaFactory* val$factory, $String* val$schemaLanguage) {
	$set(this, this$0, this$0);
	$set(this, val$factory, val$factory);
	$set(this, val$schemaLanguage, val$schemaLanguage);
}

$Object* SchemaFactoryFinder$1::run() {
	return $of($Boolean::valueOf($nc(this->val$factory)->isSchemaLanguageSupported(this->val$schemaLanguage)));
}

SchemaFactoryFinder$1::SchemaFactoryFinder$1() {
}

$Class* SchemaFactoryFinder$1::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$1, name, initialize, &_SchemaFactoryFinder$1_ClassInfo_, allocate$SchemaFactoryFinder$1);
	return class$;
}

$Class* SchemaFactoryFinder$1::class$ = nullptr;

		} // validation
	} // xml
} // javax