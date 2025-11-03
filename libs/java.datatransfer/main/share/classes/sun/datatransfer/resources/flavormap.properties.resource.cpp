#include <sun/datatransfer/resources/flavormap.properties.resource.h>

namespace sun {
    namespace datatransfer {
        namespace resources {

const char flavormap$properties$resource$data[] =
"#\n"
"# This properties file is used to initialize the default\n"
"# java.awt.datatransfer.SystemFlavorMap. It contains the Win32 platform-\n"
"# specific, default mappings between common Win32 Clipboard atoms and platform-\n"
"# independent MIME type strings, which will be converted into\n"
"# java.awt.datatransfer.DataFlavors.\n"
"#\n"
"# The standard format is:\n"
"#\n"
"# <native>=<MIME type>,<MIME type>, ...\n"
"#\n"
"# <native> should be a string identifier that the native platform will\n"
"# recognize as a valid data format. <MIME type> should specify both a MIME\n"
"# primary type and a MIME subtype separated by a '/'. The MIME type may include\n"
"# parameters, where each parameter is a key/value pair separated by '=', and\n"
"# where each parameter to the MIME type is separated by a ';'.\n"
"#\n"
"# Because SystemFlavorMap implements FlavorTable, developers are free to\n"
"# duplicate DataFlavor values and set multiple values for a single native by\n"
"# separating them with \",\". If a mapping contains a duplicate key or value,\n"
"# earlier mappings which included this key or value will be preferred.#\n"
"# Mappings whose values specify DataFlavors with primary MIME types of\n"
"# \"text\", and which support the charset parameter, should specify the exact\n"
"# format in which the native platform expects the data. The \"charset\"\n"
"# parameter specifies the char to byte encoding, the \"eoln\" parameter\n"
"# specifies the end-of-line marker, and the \"terminators\" parameter specifies\n"
"# the number of terminating NUL bytes. Note that \"eoln\" and \"terminators\"\n"
"# are not standardized MIME type parameters. They are specific to this file\n"
"# format ONLY. They will not appear in any of the DataFlavors returned by the\n"
"# SystemFlavorMap at the Java level.\n"
"#\n"
"# If the \"charset\" parameter is omitted, or has zero length, the platform\n"
"# default encoding is assumed. If the \"eoln\" parameter is omitted, or has\n"
"# zero length, \"\\n\" is assumed. If the \"terminators\" parameter is omitted,\n"
"# or has a value less than zero, zero is assumed.\n"
"#\n"
"# Upon initialization, the data transfer subsystem will record the specified\n"
"# details of the native text format, but the default SystemFlavorMap will\n"
"# present a large set of synthesized DataFlavors which map, in both\n"
"# directions, to the native. After receiving data from the application in one\n"
"# of the synthetic DataFlavors, the data transfer subsystem will transform\n"
"# the data stream into the format specified in this file before passing the\n"
"# transformed stream to the native system.\n"
"#\n"
"# Mappings whose values specify DataFlavors with primary MIME types of\n"
"# \"text\", but which do not support the charset parameter, will be treated as\n"
"# opaque, 8-bit data. They will not undergo any transformation process, and\n"
"# any \"charset\", \"eoln\", or \"terminators\" parameters specified in this file\n"
"# will be ignored.\n"
"#\n"
"# See java.awt.datatransfer.DataFlavor.selectBestTextFlavor for a list of\n"
"# text flavors which support the charset parameter.\n"
"\n"
"UNICODE\\ TEXT=text/plain;charset=utf-16le;eoln=\"\\r\\n\";terminators=2\n"
"TEXT=text/plain;eoln=\"\\r\\n\";terminators=1\n"
"HTML\\ Format=text/html;charset=utf-8;eoln=\"\\r\\n\";terminators=1\n"
"Rich\\ Text\\ Format=text/rtf\n"
"HDROP=application/x-java-file-list;class=java.util.List\n"
"PNG=image/x-java-image;class=java.awt.Image\n"
"JFIF=image/x-java-image;class=java.awt.Image\n"
"DIB=image/x-java-image;class=java.awt.Image\n"
"ENHMETAFILE=image/x-java-image;class=java.awt.Image\n"
"METAFILEPICT=image/x-java-image;class=java.awt.Image\n"
"LOCALE=application/x-java-text-encoding;class=\"[B\"\n"
"UniformResourceLocator=application/x-java-url;class=java.net.URL,\\\n"
"                       text/uri-list;eoln=\"\\r\\n\";terminators=1,\\\n"
"                       text/plain;eoln=\"\\r\\n\";terminators=1\n"
"FileGroupDescriptorW=application/x-java-file-list;class=java.util.List\n"
"FileGroupDescriptor=application/x-java-file-list;class=java.util.List\n";

int8_t* flavormap$properties$resource::get(int32_t& length) {
    length = sizeof(flavormap$properties$resource$data) - 1;
    return (int8_t*)flavormap$properties$resource$data;
}

        } // resources
    } // datatransfer
} // sun
