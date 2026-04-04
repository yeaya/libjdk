#include <sun/awt/image/InputStreamImageSource.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageProducer.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <sun/awt/image/GifImageDecoder.h>
#include <sun/awt/image/ImageConsumerQueue.h>
#include <sun/awt/image/ImageDecoder.h>
#include <sun/awt/image/ImageFetcher.h>
#include <sun/awt/image/ImageFormatException.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/JPEGImageDecoder.h>
#include <sun/awt/image/PNGImageDecoder.h>
#include <sun/awt/image/ToolkitImage.h>
#include <sun/awt/image/XbmImageDecoder.h>
#include <jcpp.h>

#undef IMAGEERROR

using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $GifImageDecoder = ::sun::awt::image::GifImageDecoder;
using $ImageConsumerQueue = ::sun::awt::image::ImageConsumerQueue;
using $ImageDecoder = ::sun::awt::image::ImageDecoder;
using $ImageFetcher = ::sun::awt::image::ImageFetcher;
using $ImageFormatException = ::sun::awt::image::ImageFormatException;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $JPEGImageDecoder = ::sun::awt::image::JPEGImageDecoder;
using $PNGImageDecoder = ::sun::awt::image::PNGImageDecoder;
using $XbmImageDecoder = ::sun::awt::image::XbmImageDecoder;

namespace sun {
	namespace awt {
		namespace image {

int32_t InputStreamImageSource::hashCode() {
	 return this->$ImageProducer::hashCode();
}

bool InputStreamImageSource::equals(Object$* arg0) {
	 return this->$ImageProducer::equals(arg0);
}

$Object* InputStreamImageSource::clone() {
	 return this->$ImageProducer::clone();
}

$String* InputStreamImageSource::toString() {
	 return this->$ImageProducer::toString();
}

void InputStreamImageSource::finalize() {
	this->$ImageProducer::finalize();
}

void InputStreamImageSource::init$() {
	this->awaitingFetch = false;
}

int32_t InputStreamImageSource::countConsumers($ImageConsumerQueue* cq$renamed) {
	$var($ImageConsumerQueue, cq, cq$renamed);
	int32_t i = 0;
	while (cq != nullptr) {
		++i;
		$assign(cq, cq->next);
	}
	return i;
}

int32_t InputStreamImageSource::countConsumers() {
	$synchronized(this) {
		$var($ImageDecoder, id, this->decoders);
		int32_t i = countConsumers(this->consumers);
		while (id != nullptr) {
			i += countConsumers(id->queue);
			$assign(id, id->next);
		}
		return i;
	}
}

void InputStreamImageSource::addConsumer($ImageConsumer* ic) {
	addConsumer(ic, false);
}

void InputStreamImageSource::printQueue($ImageConsumerQueue* cq$renamed, $String* prefix) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($ImageConsumerQueue, cq, cq$renamed);
		while (cq != nullptr) {
			$nc($System::out)->println($$str({prefix, cq}));
			$assign(cq, cq->next);
		}
	}
}

void InputStreamImageSource::printQueues($String* title) {
	$synchronized(this) {
		$useLocalObjectStack();
		$nc($System::out)->println($$str({title, "[ -----------"_s}));
		printQueue(this->consumers, "  "_s);
		{
			$var($ImageDecoder, id, this->decoders);
			for (; id != nullptr; $assign(id, id->next)) {
				$System::out->println($$str({"    "_s, id}));
				printQueue(id->queue, "      "_s);
			}
		}
		$System::out->println($$str({"----------- ]"_s, title}));
	}
}

void InputStreamImageSource::addConsumer($ImageConsumer* ic, bool produce) {
	$synchronized(this) {
		$useLocalObjectStack();
		checkSecurity(nullptr, false);
		{
			$var($ImageDecoder, id, this->decoders);
			for (; id != nullptr; $assign(id, id->next)) {
				if (id->isConsumer(ic)) {
					return;
				}
			}
		}
		$var($ImageConsumerQueue, cq, this->consumers);
		while (cq != nullptr && cq->consumer != ic) {
			$assign(cq, cq->next);
		}
		if (cq == nullptr) {
			$assign(cq, $new($ImageConsumerQueue, this, ic));
			$set(cq, next, this->consumers);
			$set(this, consumers, cq);
		} else {
			if (!cq->secure) {
				$var($Object, context, nullptr);
				$var($SecurityManager, security, $System::getSecurityManager());
				if (security != nullptr) {
					$assign(context, security->getSecurityContext());
				}
				if (cq->securityContext == nullptr) {
					$set(cq, securityContext, context);
				} else if (!cq->securityContext->equals(context)) {
					errorConsumer(cq, false);
					$throwNew($SecurityException, "Applets are trading image data!"_s);
				}
			}
			cq->interested = true;
		}
		if (produce && this->decoder == nullptr) {
			startProduction();
		}
	}
}

bool InputStreamImageSource::isConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		{
			$var($ImageDecoder, id, this->decoders);
			for (; id != nullptr; $assign(id, id->next)) {
				if (id->isConsumer(ic)) {
					return true;
				}
			}
		}
		return $ImageConsumerQueue::isConsumer(this->consumers, ic);
	}
}

void InputStreamImageSource::errorAllConsumers($ImageConsumerQueue* cq$renamed, bool needReload) {
	$var($ImageConsumerQueue, cq, cq$renamed);
	while (cq != nullptr) {
		if (cq->interested) {
			errorConsumer(cq, needReload);
		}
		$assign(cq, cq->next);
	}
}

void InputStreamImageSource::errorConsumer($ImageConsumerQueue* cq, bool needReload) {
	$nc($nc(cq)->consumer)->imageComplete($ImageConsumer::IMAGEERROR);
	if (needReload && $instanceOf($ImageRepresentation, cq->consumer)) {
		$nc($cast($ImageRepresentation, cq->consumer)->image)->flush();
	}
	removeConsumer(cq->consumer);
}

void InputStreamImageSource::removeConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		{
			$var($ImageDecoder, id, this->decoders);
			for (; id != nullptr; $assign(id, id->next)) {
				id->removeConsumer(ic);
			}
		}
		$set(this, consumers, $ImageConsumerQueue::removeConsumer(this->consumers, ic, false));
	}
}

void InputStreamImageSource::startProduction($ImageConsumer* ic) {
	addConsumer(ic, true);
}

void InputStreamImageSource::startProduction() {
	$synchronized(this) {
		if (!this->awaitingFetch) {
			if ($ImageFetcher::add(this)) {
				this->awaitingFetch = true;
			} else {
				$var($ImageConsumerQueue, cq, this->consumers);
				$set(this, consumers, nullptr);
				errorAllConsumers(cq, false);
			}
		}
	}
}

void InputStreamImageSource::stopProduction() {
	$synchronized(this) {
		if (this->awaitingFetch) {
			$ImageFetcher::remove(this);
			this->awaitingFetch = false;
		}
	}
}

void InputStreamImageSource::requestTopDownLeftRightResend($ImageConsumer* ic) {
}

$ImageDecoder* InputStreamImageSource::decoderForType($InputStream* is, $String* content_type) {
	return nullptr;
}

$ImageDecoder* InputStreamImageSource::getDecoder($InputStream* is$renamed) {
	$var($InputStream, is, is$renamed);
	if (!$nc(is)->markSupported()) {
		$assign(is, $new($BufferedInputStream, is));
	}
	try {
		is->mark(8);
		int32_t c1 = is->read();
		int32_t c2 = is->read();
		int32_t c3 = is->read();
		int32_t c4 = is->read();
		int32_t c5 = is->read();
		int32_t c6 = is->read();
		int32_t c7 = is->read();
		int32_t c8 = is->read();
		is->reset();
		is->mark(-1);
		if (c1 == u'G' && c2 == u'I' && c3 == u'F' && c4 == u'8') {
			return $new($GifImageDecoder, this, is);
		} else if (c1 == (char16_t)0xff && c2 == (char16_t)0xd8 && c3 == (char16_t)0xff) {
			return $new($JPEGImageDecoder, this, is);
		} else if (c1 == u'#' && c2 == u'd' && c3 == u'e' && c4 == u'f') {
			return $new($XbmImageDecoder, this, is);
		} else if (c1 == 137 && c2 == 80 && c3 == 78 && c4 == 71 && c5 == 13 && c6 == 10 && c7 == 26 && c8 == 10) {
			return $new($PNGImageDecoder, this, is);
		}
	} catch ($IOException& e) {
	}
	return nullptr;
}

void InputStreamImageSource::doFetch() {
	$useLocalObjectStack();
	$synchronized(this) {
		if (this->consumers == nullptr) {
			this->awaitingFetch = false;
			return;
		}
	}
	$var($ImageDecoder, imgd, getDecoder());
	if (imgd == nullptr) {
		badDecoder();
	} else {
		setDecoder(imgd);
		$var($Throwable, var$0, nullptr);
		try {
			try {
				imgd->produceImage();
			} catch ($IOException& e) {
				e->printStackTrace();
			} catch ($ImageFormatException& e) {
				e->printStackTrace();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			removeDecoder(imgd);
			bool var$2 = $($Thread::currentThread())->isInterrupted();
			if (var$2 || !$($Thread::currentThread())->isAlive()) {
				errorAllConsumers(imgd->queue, true);
			} else {
				errorAllConsumers(imgd->queue, false);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void InputStreamImageSource::badDecoder() {
	$var($ImageConsumerQueue, cq, nullptr);
	$synchronized(this) {
		$assign(cq, this->consumers);
		$set(this, consumers, nullptr);
		this->awaitingFetch = false;
	}
	errorAllConsumers(cq, false);
}

void InputStreamImageSource::setDecoder($ImageDecoder* mydecoder) {
	$var($ImageConsumerQueue, cq, nullptr);
	$synchronized(this) {
		$set($nc(mydecoder), next, this->decoders);
		$set(this, decoders, mydecoder);
		$set(this, decoder, mydecoder);
		$assign(cq, this->consumers);
		$set(mydecoder, queue, cq);
		$set(this, consumers, nullptr);
		this->awaitingFetch = false;
	}
	while (cq != nullptr) {
		if (cq->interested) {
			if (!checkSecurity(cq->securityContext, true)) {
				errorConsumer(cq, false);
			}
		}
		$assign(cq, cq->next);
	}
}

void InputStreamImageSource::removeDecoder($ImageDecoder* mydecoder) {
	$synchronized(this) {
		$useLocalObjectStack();
		doneDecoding(mydecoder);
		$var($ImageDecoder, idprev, nullptr);
		{
			$var($ImageDecoder, id, this->decoders);
			for (; id != nullptr; $assign(id, id->next)) {
				if (id == mydecoder) {
					if (idprev == nullptr) {
						$set(this, decoders, id->next);
					} else {
						$set(idprev, next, id->next);
					}
					break;
				}
				$assign(idprev, id);
			}
		}
	}
}

void InputStreamImageSource::doneDecoding($ImageDecoder* mydecoder) {
	$synchronized(this) {
		if (this->decoder == mydecoder) {
			$set(this, decoder, nullptr);
			if (this->consumers != nullptr) {
				startProduction();
			}
		}
	}
}

void InputStreamImageSource::latchConsumers($ImageDecoder* id) {
	doneDecoding(id);
}

void InputStreamImageSource::flush() {
	$synchronized(this) {
		$set(this, decoder, nullptr);
	}
}

InputStreamImageSource::InputStreamImageSource() {
}

$Class* InputStreamImageSource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"consumers", "Lsun/awt/image/ImageConsumerQueue;", nullptr, 0, $field(InputStreamImageSource, consumers)},
		{"decoder", "Lsun/awt/image/ImageDecoder;", nullptr, 0, $field(InputStreamImageSource, decoder)},
		{"decoders", "Lsun/awt/image/ImageDecoder;", nullptr, 0, $field(InputStreamImageSource, decoders)},
		{"awaitingFetch", "Z", nullptr, 0, $field(InputStreamImageSource, awaitingFetch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(InputStreamImageSource, init$, void)},
		{"addConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC, $virtualMethod(InputStreamImageSource, addConsumer, void, $ImageConsumer*)},
		{"addConsumer", "(Ljava/awt/image/ImageConsumer;Z)V", nullptr, $SYNCHRONIZED, $virtualMethod(InputStreamImageSource, addConsumer, void, $ImageConsumer*, bool)},
		{"badDecoder", "()V", nullptr, $PRIVATE, $method(InputStreamImageSource, badDecoder, void)},
		{"checkSecurity", "(Ljava/lang/Object;Z)Z", nullptr, $ABSTRACT, $virtualMethod(InputStreamImageSource, checkSecurity, bool, Object$*, bool)},
		{"countConsumers", "(Lsun/awt/image/ImageConsumerQueue;)I", nullptr, 0, $virtualMethod(InputStreamImageSource, countConsumers, int32_t, $ImageConsumerQueue*)},
		{"countConsumers", "()I", nullptr, $SYNCHRONIZED, $virtualMethod(InputStreamImageSource, countConsumers, int32_t)},
		{"decoderForType", "(Ljava/io/InputStream;Ljava/lang/String;)Lsun/awt/image/ImageDecoder;", nullptr, $PROTECTED, $virtualMethod(InputStreamImageSource, decoderForType, $ImageDecoder*, $InputStream*, $String*)},
		{"doFetch", "()V", nullptr, $PUBLIC, $virtualMethod(InputStreamImageSource, doFetch, void)},
		{"doneDecoding", "(Lsun/awt/image/ImageDecoder;)V", nullptr, $SYNCHRONIZED, $virtualMethod(InputStreamImageSource, doneDecoding, void, $ImageDecoder*)},
		{"errorAllConsumers", "(Lsun/awt/image/ImageConsumerQueue;Z)V", nullptr, $PRIVATE, $method(InputStreamImageSource, errorAllConsumers, void, $ImageConsumerQueue*, bool)},
		{"errorConsumer", "(Lsun/awt/image/ImageConsumerQueue;Z)V", nullptr, $PRIVATE, $method(InputStreamImageSource, errorConsumer, void, $ImageConsumerQueue*, bool)},
		{"flush", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(InputStreamImageSource, flush, void)},
		{"getDecoder", "()Lsun/awt/image/ImageDecoder;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(InputStreamImageSource, getDecoder, $ImageDecoder*)},
		{"getDecoder", "(Ljava/io/InputStream;)Lsun/awt/image/ImageDecoder;", nullptr, $PROTECTED, $virtualMethod(InputStreamImageSource, getDecoder, $ImageDecoder*, $InputStream*)},
		{"isConsumer", "(Ljava/awt/image/ImageConsumer;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(InputStreamImageSource, isConsumer, bool, $ImageConsumer*)},
		{"latchConsumers", "(Lsun/awt/image/ImageDecoder;)V", nullptr, 0, $virtualMethod(InputStreamImageSource, latchConsumers, void, $ImageDecoder*)},
		{"printQueue", "(Lsun/awt/image/ImageConsumerQueue;Ljava/lang/String;)V", nullptr, $SYNCHRONIZED, $virtualMethod(InputStreamImageSource, printQueue, void, $ImageConsumerQueue*, $String*)},
		{"printQueues", "(Ljava/lang/String;)V", nullptr, $SYNCHRONIZED, $virtualMethod(InputStreamImageSource, printQueues, void, $String*)},
		{"removeConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(InputStreamImageSource, removeConsumer, void, $ImageConsumer*)},
		{"removeDecoder", "(Lsun/awt/image/ImageDecoder;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(InputStreamImageSource, removeDecoder, void, $ImageDecoder*)},
		{"requestTopDownLeftRightResend", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC, $virtualMethod(InputStreamImageSource, requestTopDownLeftRightResend, void, $ImageConsumer*)},
		{"setDecoder", "(Lsun/awt/image/ImageDecoder;)V", nullptr, $PRIVATE, $method(InputStreamImageSource, setDecoder, void, $ImageDecoder*)},
		{"startProduction", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC, $virtualMethod(InputStreamImageSource, startProduction, void, $ImageConsumer*)},
		{"startProduction", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(InputStreamImageSource, startProduction, void)},
		{"stopProduction", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(InputStreamImageSource, stopProduction, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.awt.image.InputStreamImageSource",
		"java.lang.Object",
		"java.awt.image.ImageProducer,sun.awt.image.ImageFetchable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InputStreamImageSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(InputStreamImageSource));
	});
	return class$;
}

$Class* InputStreamImageSource::class$ = nullptr;

		} // image
	} // awt
} // sun