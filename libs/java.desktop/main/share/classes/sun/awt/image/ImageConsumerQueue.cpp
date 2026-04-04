#include <sun/awt/image/ImageConsumerQueue.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageProducer.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <sun/awt/image/ToolkitImage.h>
#include <jcpp.h>

using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;

namespace sun {
	namespace awt {
		namespace image {

ImageConsumerQueue* ImageConsumerQueue::removeConsumer(ImageConsumerQueue* cqbase$renamed, $ImageConsumer* ic, bool stillinterested) {
	$useLocalObjectStack();
	$var(ImageConsumerQueue, cqbase, cqbase$renamed);
	$var(ImageConsumerQueue, cqprev, nullptr);
	{
		$var(ImageConsumerQueue, cq, cqbase);
		for (; cq != nullptr; $assign(cq, cq->next)) {
			if (cq->consumer == ic) {
				if (cqprev == nullptr) {
					$assign(cqbase, cq->next);
				} else {
					$set(cqprev, next, cq->next);
				}
				cq->interested = stillinterested;
				break;
			}
			$assign(cqprev, cq);
		}
	}
	return cqbase;
}

bool ImageConsumerQueue::isConsumer(ImageConsumerQueue* cqbase, $ImageConsumer* ic) {
	$var(ImageConsumerQueue, cq, cqbase);
	for (; cq != nullptr; $assign(cq, cq->next)) {
		if (cq->consumer == ic) {
			return true;
		}
	}
	return false;
}

void ImageConsumerQueue::init$($InputStreamImageSource* src, $ImageConsumer* ic) {
	$useLocalObjectStack();
	$set(this, consumer, ic);
	this->interested = true;
	if ($instanceOf($ImageRepresentation, ic)) {
		$var($ImageRepresentation, ir, $cast($ImageRepresentation, ic));
		if (!$equals($nc(ir->image)->source, src)) {
			$throwNew($SecurityException, "ImageRep added to wrong image source"_s);
		}
		this->secure = true;
	} else {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			$set(this, securityContext, security->getSecurityContext());
		} else {
			$set(this, securityContext, nullptr);
		}
	}
}

$String* ImageConsumerQueue::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("["_s);
	var$0->append(this->consumer);
	var$0->append(", "_s);
	var$0->append(this->interested ? ""_s : "not "_s);
	var$0->append("interested"_s);
	var$0->append(this->securityContext != nullptr ? $$str({", "_s, this->securityContext}) : ""_s);
	var$0->append("]"_s);
	return ($str(var$0));
}

ImageConsumerQueue::ImageConsumerQueue() {
}

$Class* ImageConsumerQueue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"next", "Lsun/awt/image/ImageConsumerQueue;", nullptr, 0, $field(ImageConsumerQueue, next)},
		{"consumer", "Ljava/awt/image/ImageConsumer;", nullptr, 0, $field(ImageConsumerQueue, consumer)},
		{"interested", "Z", nullptr, 0, $field(ImageConsumerQueue, interested)},
		{"securityContext", "Ljava/lang/Object;", nullptr, 0, $field(ImageConsumerQueue, securityContext)},
		{"secure", "Z", nullptr, 0, $field(ImageConsumerQueue, secure)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/image/InputStreamImageSource;Ljava/awt/image/ImageConsumer;)V", nullptr, 0, $method(ImageConsumerQueue, init$, void, $InputStreamImageSource*, $ImageConsumer*)},
		{"isConsumer", "(Lsun/awt/image/ImageConsumerQueue;Ljava/awt/image/ImageConsumer;)Z", nullptr, $STATIC, $staticMethod(ImageConsumerQueue, isConsumer, bool, ImageConsumerQueue*, $ImageConsumer*)},
		{"removeConsumer", "(Lsun/awt/image/ImageConsumerQueue;Ljava/awt/image/ImageConsumer;Z)Lsun/awt/image/ImageConsumerQueue;", nullptr, $STATIC, $staticMethod(ImageConsumerQueue, removeConsumer, ImageConsumerQueue*, ImageConsumerQueue*, $ImageConsumer*, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImageConsumerQueue, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.image.ImageConsumerQueue",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImageConsumerQueue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageConsumerQueue);
	});
	return class$;
}

$Class* ImageConsumerQueue::class$ = nullptr;

		} // image
	} // awt
} // sun