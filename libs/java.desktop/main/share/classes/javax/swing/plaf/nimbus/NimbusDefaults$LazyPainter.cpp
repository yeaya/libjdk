#include <javax/swing/plaf/nimbus/NimbusDefaults$LazyPainter.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/reflect/Constructor.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults.h>
#include <jcpp.h>

#undef TYPE

using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Constructor = ::java::lang::reflect::Constructor;
using $UIDefaults = ::javax::swing::UIDefaults;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;
using $AbstractRegionPainter$PaintContext$CacheMode = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void NimbusDefaults$LazyPainter::init$($String* className, int32_t which, $Insets* insets, $Dimension* canvasSize, bool inverted) {
	if (className == nullptr) {
		$throwNew($IllegalArgumentException, "The className must be specified"_s);
	}
	$set(this, className, className);
	this->which = which;
	$set(this, ctx, $new($AbstractRegionPainter$PaintContext, insets, canvasSize, inverted));
}

void NimbusDefaults$LazyPainter::init$($String* className, int32_t which, $Insets* insets, $Dimension* canvasSize, bool inverted, $AbstractRegionPainter$PaintContext$CacheMode* cacheMode, double maxH, double maxV) {
	if (className == nullptr) {
		$throwNew($IllegalArgumentException, "The className must be specified"_s);
	}
	$set(this, className, className);
	this->which = which;
	$set(this, ctx, $new($AbstractRegionPainter$PaintContext, insets, canvasSize, inverted, cacheMode, maxH, maxV));
}

$Object* NimbusDefaults$LazyPainter::createValue($UIDefaults* table) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$Class* c = nullptr;
		$var($Object, cl, nullptr);
		if (table == nullptr || !($instanceOf($ClassLoader, $assign(cl, table->get("ClassLoader"_s))))) {
			$assign(cl, $($Thread::currentThread())->getContextClassLoader());
			if (cl == nullptr) {
				$assign(cl, $ClassLoader::getSystemClassLoader());
			}
		}
		c = $Class::forName(this->className, true, $cast($ClassLoader, cl));
		$load($AbstractRegionPainter$PaintContext);
		$var($Constructor, constructor, c->getConstructor($$new($ClassArray, {
			$AbstractRegionPainter$PaintContext::class$,
			$Integer::TYPE
		})));
		if (constructor == nullptr) {
			$throwNew($NullPointerException, $$str({"Failed to find the constructor for the class: "_s, this->className}));
		}
		return $nc(constructor)->newInstance($$new($ObjectArray, {
			this->ctx,
			$($Integer::valueOf(this->which))
		}));
	} catch ($Exception& e) {
		e->printStackTrace();
		return nullptr;
	}
	$shouldNotReachHere();
}

NimbusDefaults$LazyPainter::NimbusDefaults$LazyPainter() {
}

$Class* NimbusDefaults$LazyPainter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"which", "I", nullptr, $PRIVATE, $field(NimbusDefaults$LazyPainter, which)},
		{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(NimbusDefaults$LazyPainter, ctx)},
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusDefaults$LazyPainter, className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/awt/Insets;Ljava/awt/Dimension;Z)V", nullptr, 0, $method(NimbusDefaults$LazyPainter, init$, void, $String*, int32_t, $Insets*, $Dimension*, bool)},
		{"<init>", "(Ljava/lang/String;ILjava/awt/Insets;Ljava/awt/Dimension;ZLjavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;DD)V", nullptr, 0, $method(NimbusDefaults$LazyPainter, init$, void, $String*, int32_t, $Insets*, $Dimension*, bool, $AbstractRegionPainter$PaintContext$CacheMode*, double, double)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NimbusDefaults$LazyPainter, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.NimbusDefaults$LazyPainter", "javax.swing.plaf.nimbus.NimbusDefaults", "LazyPainter", $PRIVATE | $STATIC | $FINAL},
		{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.plaf.nimbus.NimbusDefaults$LazyPainter",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.NimbusDefaults"
	};
	$loadClass(NimbusDefaults$LazyPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusDefaults$LazyPainter);
	});
	return class$;
}

$Class* NimbusDefaults$LazyPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax