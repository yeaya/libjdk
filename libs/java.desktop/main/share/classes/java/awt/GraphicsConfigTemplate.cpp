#include <java/awt/GraphicsConfigTemplate.h>

#include <java/awt/GraphicsConfiguration.h>
#include <jcpp.h>

#undef PREFERRED
#undef REQUIRED
#undef UNNECESSARY

using $GraphicsConfigurationArray = $Array<::java::awt::GraphicsConfiguration>;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _GraphicsConfigTemplate_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GraphicsConfigTemplate, serialVersionUID)},
	{"REQUIRED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicsConfigTemplate, REQUIRED)},
	{"PREFERRED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicsConfigTemplate, PREFERRED)},
	{"UNNECESSARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicsConfigTemplate, UNNECESSARY)},
	{}
};

$MethodInfo _GraphicsConfigTemplate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GraphicsConfigTemplate, init$, void)},
	{"getBestConfiguration", "([Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsConfigTemplate, getBestConfiguration, $GraphicsConfiguration*, $GraphicsConfigurationArray*)},
	{"isGraphicsConfigSupported", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsConfigTemplate, isGraphicsConfigSupported, bool, $GraphicsConfiguration*)},
	{}
};

$ClassInfo _GraphicsConfigTemplate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.GraphicsConfigTemplate",
	"java.lang.Object",
	"java.io.Serializable",
	_GraphicsConfigTemplate_FieldInfo_,
	_GraphicsConfigTemplate_MethodInfo_
};

$Object* allocate$GraphicsConfigTemplate($Class* clazz) {
	return $of($alloc(GraphicsConfigTemplate));
}

void GraphicsConfigTemplate::init$() {
}

GraphicsConfigTemplate::GraphicsConfigTemplate() {
}

$Class* GraphicsConfigTemplate::load$($String* name, bool initialize) {
	$loadClass(GraphicsConfigTemplate, name, initialize, &_GraphicsConfigTemplate_ClassInfo_, allocate$GraphicsConfigTemplate);
	return class$;
}

$Class* GraphicsConfigTemplate::class$ = nullptr;

	} // awt
} // java