#include <com/sun/imageio/plugins/jpeg/DRIMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef DRI

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void DRIMarkerSegment::init$($JPEGBuffer* buffer) {
	$MarkerSegment::init$(buffer);
	this->restartInterval = 0;
	this->restartInterval = ($nc($nc(buffer)->buf)->get($nc(buffer)->bufPtr++) & 0xff) << 8;
	this->restartInterval |= buffer->buf->get(buffer->bufPtr++) & 0xff;
	buffer->bufAvail -= this->length;
}

void DRIMarkerSegment::init$($Node* node) {
	$MarkerSegment::init$($JPEG::DRI);
	this->restartInterval = 0;
	updateFromNativeNode(node, true);
}

$IIOMetadataNode* DRIMarkerSegment::getNativeNode() {
	$useLocalObjectStack();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "dri"_s));
	node->setAttribute("interval"_s, $($Integer::toString(this->restartInterval)));
	return node;
}

void DRIMarkerSegment::updateFromNativeNode($Node* node, bool fromScratch) {
	this->restartInterval = getAttributeValue(node, nullptr, "interval"_s, 0, 0x0000ffff, true);
}

void DRIMarkerSegment::write($ImageOutputStream* ios) {
}

void DRIMarkerSegment::print() {
	$useLocalObjectStack();
	printTag("DRI"_s);
	$nc($System::out)->println($$str({"Interval: "_s, $($Integer::toString(this->restartInterval))}));
}

DRIMarkerSegment::DRIMarkerSegment() {
}

$Class* DRIMarkerSegment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"restartInterval", "I", nullptr, 0, $field(DRIMarkerSegment, restartInterval)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(DRIMarkerSegment, init$, void, $JPEGBuffer*), "java.io.IOException"},
		{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(DRIMarkerSegment, init$, void, $Node*), "javax.imageio.metadata.IIOInvalidTreeException"},
		{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0, $virtualMethod(DRIMarkerSegment, getNativeNode, $IIOMetadataNode*)},
		{"print", "()V", nullptr, 0, $virtualMethod(DRIMarkerSegment, print, void)},
		{"updateFromNativeNode", "(Lorg/w3c/dom/Node;Z)V", nullptr, 0, $virtualMethod(DRIMarkerSegment, updateFromNativeNode, void, $Node*, bool), "javax.imageio.metadata.IIOInvalidTreeException"},
		{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, $virtualMethod(DRIMarkerSegment, write, void, $ImageOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.DRIMarkerSegment",
		"com.sun.imageio.plugins.jpeg.MarkerSegment",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DRIMarkerSegment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DRIMarkerSegment);
	});
	return class$;
}

$Class* DRIMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com