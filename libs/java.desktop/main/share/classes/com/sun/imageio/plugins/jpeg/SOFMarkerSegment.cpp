#include <com/sun/imageio/plugins/jpeg/SOFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/SOFMarkerSegment$ComponentSpec.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef JCS_RGB
#undef JCS_UNKNOWN
#undef SOF0
#undef SOF1
#undef SOF2

using $SOFMarkerSegment$ComponentSpecArray = $Array<::com::sun::imageio::plugins::jpeg::SOFMarkerSegment$ComponentSpec>;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $SOFMarkerSegment$ComponentSpec = ::com::sun::imageio::plugins::jpeg::SOFMarkerSegment$ComponentSpec;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void SOFMarkerSegment::init$(bool wantProg, bool wantExtended, bool willSubsample, $bytes* componentIDs, int32_t numComponents) {
	$useLocalObjectStack();
	$MarkerSegment::init$(wantProg ? $JPEG::SOF2 : wantExtended ? $JPEG::SOF1 : $JPEG::SOF0);
	this->samplePrecision = 8;
	this->numLines = 0;
	this->samplesPerLine = 0;
	$set(this, componentSpecs, $new($SOFMarkerSegment$ComponentSpecArray, numComponents));
	for (int32_t i = 0; i < numComponents; ++i) {
		int32_t factor = 1;
		int32_t qsel = 0;
		if (willSubsample) {
			factor = 2;
			if ((i == 1) || (i == 2)) {
				factor = 1;
				qsel = 1;
			}
		}
		this->componentSpecs->set(i, $$new($SOFMarkerSegment$ComponentSpec, this, $nc(componentIDs)->get(i), factor, qsel));
	}
}

void SOFMarkerSegment::init$($JPEGBuffer* buffer) {
	$useLocalObjectStack();
	$MarkerSegment::init$(buffer);
	this->samplePrecision = $nc($nc(buffer)->buf)->get($nc(buffer)->bufPtr++);
	this->numLines = (buffer->buf->get(buffer->bufPtr++) & 0xff) << 8;
	this->numLines |= buffer->buf->get(buffer->bufPtr++) & 0xff;
	this->samplesPerLine = (buffer->buf->get(buffer->bufPtr++) & 0xff) << 8;
	this->samplesPerLine |= buffer->buf->get(buffer->bufPtr++) & 0xff;
	int32_t numComponents = buffer->buf->get(buffer->bufPtr++) & 0xff;
	$set(this, componentSpecs, $new($SOFMarkerSegment$ComponentSpecArray, numComponents));
	for (int32_t i = 0; i < numComponents; ++i) {
		this->componentSpecs->set(i, $$new($SOFMarkerSegment$ComponentSpec, this, buffer));
	}
	buffer->bufAvail -= this->length;
}

void SOFMarkerSegment::init$($Node* node) {
	$MarkerSegment::init$($JPEG::SOF0);
	this->samplePrecision = 8;
	this->numLines = 0;
	this->samplesPerLine = 0;
	updateFromNativeNode(node, true);
}

$Object* SOFMarkerSegment::clone() {
	$useLocalObjectStack();
	$var(SOFMarkerSegment, newGuy, $cast(SOFMarkerSegment, $MarkerSegment::clone()));
	if (this->componentSpecs != nullptr) {
		$set($nc(newGuy), componentSpecs, $cast($SOFMarkerSegment$ComponentSpecArray, this->componentSpecs->clone()));
		for (int32_t i = 0; i < $nc(this->componentSpecs)->length; ++i) {
			$nc(newGuy->componentSpecs)->set(i, $$cast($SOFMarkerSegment$ComponentSpec, $nc(this->componentSpecs->get(i))->clone()));
		}
	}
	return newGuy;
}

$IIOMetadataNode* SOFMarkerSegment::getNativeNode() {
	$useLocalObjectStack();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "sof"_s));
	node->setAttribute("process"_s, $($Integer::toString(this->tag - $JPEG::SOF0)));
	node->setAttribute("samplePrecision"_s, $($Integer::toString(this->samplePrecision)));
	node->setAttribute("numLines"_s, $($Integer::toString(this->numLines)));
	node->setAttribute("samplesPerLine"_s, $($Integer::toString(this->samplesPerLine)));
	node->setAttribute("numFrameComponents"_s, $($Integer::toString($nc(this->componentSpecs)->length)));
	for (int32_t i = 0; i < $nc(this->componentSpecs)->length; ++i) {
		node->appendChild($($nc(this->componentSpecs->get(i))->getNativeNode()));
	}
	return node;
}

void SOFMarkerSegment::updateFromNativeNode($Node* node, bool fromScratch) {
	$useLocalObjectStack();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	int32_t value = getAttributeValue(node, attrs, "process"_s, 0, 2, false);
	this->tag = (value != -1) ? value + $JPEG::SOF0 : this->tag;
	value = getAttributeValue(node, attrs, "samplePrecision"_s, 8, 8, false);
	value = getAttributeValue(node, attrs, "numLines"_s, 0, 0x0000ffff, false);
	this->numLines = (value != -1) ? value : this->numLines;
	value = getAttributeValue(node, attrs, "samplesPerLine"_s, 0, 0x0000ffff, false);
	this->samplesPerLine = (value != -1) ? value : this->samplesPerLine;
	int32_t numComponents = getAttributeValue(node, attrs, "numFrameComponents"_s, 1, 4, false);
	$var($NodeList, children, node->getChildNodes());
	if ($nc(children)->getLength() != numComponents) {
		$throwNew($IIOInvalidTreeException, "numFrameComponents must match number of children"_s, node);
	}
	$set(this, componentSpecs, $new($SOFMarkerSegment$ComponentSpecArray, numComponents));
	for (int32_t i = 0; i < numComponents; ++i) {
		$nc(this->componentSpecs)->set(i, $$new($SOFMarkerSegment$ComponentSpec, this, $(children->item(i))));
	}
}

void SOFMarkerSegment::write($ImageOutputStream* ios) {
}

void SOFMarkerSegment::print() {
	printTag("SOF"_s);
	$nc($System::out)->print("Sample precision: "_s);
	$System::out->println(this->samplePrecision);
	$System::out->print("Number of lines: "_s);
	$System::out->println(this->numLines);
	$System::out->print("Samples per line: "_s);
	$System::out->println(this->samplesPerLine);
	$System::out->print("Number of components: "_s);
	$System::out->println($nc(this->componentSpecs)->length);
	for (int32_t i = 0; i < $nc(this->componentSpecs)->length; ++i) {
		$nc(this->componentSpecs->get(i))->print();
	}
}

int32_t SOFMarkerSegment::getIDencodedCSType() {
	for (int32_t i = 0; i < $nc(this->componentSpecs)->length; ++i) {
		if ($nc(this->componentSpecs->get(i))->componentId < u'A') {
			return $JPEG::JCS_UNKNOWN;
		}
	}
	switch (this->componentSpecs->length) {
	case 3:
		if (($nc(this->componentSpecs->get(0))->componentId == u'R') && ($nc(this->componentSpecs->get(1))->componentId == u'G') && ($nc(this->componentSpecs->get(2))->componentId == u'B')) {
			return $JPEG::JCS_RGB;
		}
		break;
	}
	return $JPEG::JCS_UNKNOWN;
}

$SOFMarkerSegment$ComponentSpec* SOFMarkerSegment::getComponentSpec(int8_t id, int32_t factor, int32_t qSelector) {
	return $new($SOFMarkerSegment$ComponentSpec, this, id, factor, qSelector);
}

SOFMarkerSegment::SOFMarkerSegment() {
}

$Class* SOFMarkerSegment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"samplePrecision", "I", nullptr, 0, $field(SOFMarkerSegment, samplePrecision)},
		{"numLines", "I", nullptr, 0, $field(SOFMarkerSegment, numLines)},
		{"samplesPerLine", "I", nullptr, 0, $field(SOFMarkerSegment, samplesPerLine)},
		{"componentSpecs", "[Lcom/sun/imageio/plugins/jpeg/SOFMarkerSegment$ComponentSpec;", nullptr, 0, $field(SOFMarkerSegment, componentSpecs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZZZ[BI)V", nullptr, 0, $method(SOFMarkerSegment, init$, void, bool, bool, bool, $bytes*, int32_t)},
		{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(SOFMarkerSegment, init$, void, $JPEGBuffer*), "java.io.IOException"},
		{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(SOFMarkerSegment, init$, void, $Node*), "javax.imageio.metadata.IIOInvalidTreeException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(SOFMarkerSegment, clone, $Object*)},
		{"getComponentSpec", "(BII)Lcom/sun/imageio/plugins/jpeg/SOFMarkerSegment$ComponentSpec;", nullptr, 0, $virtualMethod(SOFMarkerSegment, getComponentSpec, $SOFMarkerSegment$ComponentSpec*, int8_t, int32_t, int32_t)},
		{"getIDencodedCSType", "()I", nullptr, 0, $virtualMethod(SOFMarkerSegment, getIDencodedCSType, int32_t)},
		{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0, $virtualMethod(SOFMarkerSegment, getNativeNode, $IIOMetadataNode*)},
		{"print", "()V", nullptr, 0, $virtualMethod(SOFMarkerSegment, print, void)},
		{"updateFromNativeNode", "(Lorg/w3c/dom/Node;Z)V", nullptr, 0, $virtualMethod(SOFMarkerSegment, updateFromNativeNode, void, $Node*, bool), "javax.imageio.metadata.IIOInvalidTreeException"},
		{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, $virtualMethod(SOFMarkerSegment, write, void, $ImageOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.SOFMarkerSegment$ComponentSpec", "com.sun.imageio.plugins.jpeg.SOFMarkerSegment", "ComponentSpec", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.SOFMarkerSegment",
		"com.sun.imageio.plugins.jpeg.MarkerSegment",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.jpeg.SOFMarkerSegment$ComponentSpec"
	};
	$loadClass(SOFMarkerSegment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SOFMarkerSegment);
	});
	return class$;
}

$Class* SOFMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com