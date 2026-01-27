#include <javax/xml/validation/SchemaFactoryFinder$2.h>

#include <java/security/AccessControlContext.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <javax/xml/validation/SchemaFactory.h>
#include <javax/xml/validation/SchemaFactoryFinder.h>
#include <jcpp.h>

#undef SERVICE_CLASS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;
using $SchemaFactory = ::javax::xml::validation::SchemaFactory;
using $SchemaFactoryFinder = ::javax::xml::validation::SchemaFactoryFinder;

namespace javax {
	namespace xml {
		namespace validation {

$FieldInfo _SchemaFactoryFinder$2_FieldInfo_[] = {
	{"this$0", "Ljavax/xml/validation/SchemaFactoryFinder;", nullptr, $FINAL | $SYNTHETIC, $field(SchemaFactoryFinder$2, this$0)},
	{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(SchemaFactoryFinder$2, val$acc)},
	{"val$schemaLanguage", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SchemaFactoryFinder$2, val$schemaLanguage)},
	{}
};

$MethodInfo _SchemaFactoryFinder$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/validation/SchemaFactoryFinder;Ljava/lang/String;Ljava/security/AccessControlContext;)V", "()V", 0, $method(SchemaFactoryFinder$2, init$, void, $SchemaFactoryFinder*, $String*, $AccessControlContext*)},
	{"run", "()Ljavax/xml/validation/SchemaFactory;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _SchemaFactoryFinder$2_EnclosingMethodInfo_ = {
	"javax.xml.validation.SchemaFactoryFinder",
	"findServiceProvider",
	"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;"
};

$InnerClassInfo _SchemaFactoryFinder$2_InnerClassesInfo_[] = {
	{"javax.xml.validation.SchemaFactoryFinder$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SchemaFactoryFinder$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.validation.SchemaFactoryFinder$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SchemaFactoryFinder$2_FieldInfo_,
	_SchemaFactoryFinder$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/xml/validation/SchemaFactory;>;",
	&_SchemaFactoryFinder$2_EnclosingMethodInfo_,
	_SchemaFactoryFinder$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.validation.SchemaFactoryFinder"
};

$Object* allocate$SchemaFactoryFinder$2($Class* clazz) {
	return $of($alloc(SchemaFactoryFinder$2));
}

void SchemaFactoryFinder$2::init$($SchemaFactoryFinder* this$0, $String* val$schemaLanguage, $AccessControlContext* val$acc) {
	$set(this, this$0, this$0);
	$set(this, val$schemaLanguage, val$schemaLanguage);
	$set(this, val$acc, val$acc);
}

$Object* SchemaFactoryFinder$2::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($SchemaFactoryFinder);
	$var($ServiceLoader, loader, $ServiceLoader::load($SchemaFactoryFinder::SERVICE_CLASS));
	{
		$var($Iterator, i$, $nc(loader)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SchemaFactory, factory, $cast($SchemaFactory, i$->next()));
			{
				if (this->this$0->isSchemaLanguageSupportedBy(factory, this->val$schemaLanguage, this->val$acc)) {
					return $of(factory);
				}
			}
		}
	}
	return $of(nullptr);
}

SchemaFactoryFinder$2::SchemaFactoryFinder$2() {
}

$Class* SchemaFactoryFinder$2::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$2, name, initialize, &_SchemaFactoryFinder$2_ClassInfo_, allocate$SchemaFactoryFinder$2);
	return class$;
}

$Class* SchemaFactoryFinder$2::class$ = nullptr;

		} // validation
	} // xml
} // javax