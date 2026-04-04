#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementStack.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl.h>
#include <jcpp.h>

using $XMLStreamWriterImpl$ElementStateArray = $Array<::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementState>;
using $XMLStreamWriterImpl = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl;
using $XMLStreamWriterImpl$ElementState = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementState;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

void XMLStreamWriterImpl$ElementStack::init$($XMLStreamWriterImpl* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$set(this, fElements, $new($XMLStreamWriterImpl$ElementStateArray, 10));
	for (int32_t i = 0; i < this->fElements->length; ++i) {
		this->fElements->set(i, $$new($XMLStreamWriterImpl$ElementState, this$0));
	}
}

$XMLStreamWriterImpl$ElementState* XMLStreamWriterImpl$ElementStack::push($XMLStreamWriterImpl$ElementState* element) {
	$useLocalObjectStack();
	if (this->fDepth == $nc(this->fElements)->length) {
		$var($XMLStreamWriterImpl$ElementStateArray, array, $new($XMLStreamWriterImpl$ElementStateArray, this->fElements->length * 2));
		$System::arraycopy(this->fElements, 0, array, 0, this->fDepth);
		$set(this, fElements, array);
		for (int32_t i = this->fDepth; i < this->fElements->length; ++i) {
			this->fElements->set(i, $$new($XMLStreamWriterImpl$ElementState, this->this$0));
		}
	}
	$nc(this->fElements->get(this->fDepth))->setValues(element);
	return $nc(this->fElements)->get(this->fDepth++);
}

$XMLStreamWriterImpl$ElementState* XMLStreamWriterImpl$ElementStack::push($String* prefix, $String* localpart, $String* rawname, $String* uri, bool isEmpty) {
	$useLocalObjectStack();
	if (this->fDepth == $nc(this->fElements)->length) {
		$var($XMLStreamWriterImpl$ElementStateArray, array, $new($XMLStreamWriterImpl$ElementStateArray, this->fElements->length * 2));
		$System::arraycopy(this->fElements, 0, array, 0, this->fDepth);
		$set(this, fElements, array);
		for (int32_t i = this->fDepth; i < this->fElements->length; ++i) {
			this->fElements->set(i, $$new($XMLStreamWriterImpl$ElementState, this->this$0));
		}
	}
	$nc(this->fElements->get(this->fDepth))->setValues(prefix, localpart, rawname, uri, isEmpty);
	return $nc(this->fElements)->get(this->fDepth++);
}

$XMLStreamWriterImpl$ElementState* XMLStreamWriterImpl$ElementStack::pop() {
	return $nc(this->fElements)->get(--this->fDepth);
}

void XMLStreamWriterImpl$ElementStack::clear() {
	this->fDepth = 0;
}

$XMLStreamWriterImpl$ElementState* XMLStreamWriterImpl$ElementStack::peek() {
	return $nc(this->fElements)->get(this->fDepth - 1);
}

bool XMLStreamWriterImpl$ElementStack::empty() {
	return (this->fDepth > 0) ? false : true;
}

XMLStreamWriterImpl$ElementStack::XMLStreamWriterImpl$ElementStack() {
}

$Class* XMLStreamWriterImpl$ElementStack::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLStreamWriterImpl$ElementStack, this$0)},
		{"fElements", "[Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;", nullptr, $PROTECTED, $field(XMLStreamWriterImpl$ElementStack, fElements)},
		{"fDepth", "S", nullptr, $PROTECTED, $field(XMLStreamWriterImpl$ElementStack, fDepth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;)V", nullptr, $PUBLIC, $method(XMLStreamWriterImpl$ElementStack, init$, void, $XMLStreamWriterImpl*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl$ElementStack, clear, void)},
		{"empty", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl$ElementStack, empty, bool)},
		{"peek", "()Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl$ElementStack, peek, $XMLStreamWriterImpl$ElementState*)},
		{"pop", "()Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl$ElementStack, pop, $XMLStreamWriterImpl$ElementState*)},
		{"push", "(Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;)Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl$ElementStack, push, $XMLStreamWriterImpl$ElementState*, $XMLStreamWriterImpl$ElementState*)},
		{"push", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl$ElementStack, push, $XMLStreamWriterImpl$ElementState*, $String*, $String*, $String*, $String*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementStack", "com.sun.xml.internal.stream.writers.XMLStreamWriterImpl", "ElementStack", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementStack",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl"
	};
	$loadClass(XMLStreamWriterImpl$ElementStack, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLStreamWriterImpl$ElementStack);
	});
	return class$;
}

$Class* XMLStreamWriterImpl$ElementStack::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com