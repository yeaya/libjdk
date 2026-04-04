//$ module java.xml
::java::lang::RequiresDirective _java$xml_ModuleInfo_Requires_[] = {
    {"java.base", ""},
    {}
};

::java::lang::ExportsDirective _java$xml_ModuleInfo_Exports_[] = {
    {"javax.xml", nullptr},
    {"javax.xml.catalog", nullptr},
    {"javax.xml.datatype", nullptr},
    {"javax.xml.namespace", nullptr},
    {"javax.xml.parsers", nullptr},
    {"javax.xml.stream", nullptr},
    {"javax.xml.stream.events", nullptr},
    {"javax.xml.stream.util", nullptr},
    {"javax.xml.transform", nullptr},
    {"javax.xml.transform.dom", nullptr},
    {"javax.xml.transform.sax", nullptr},
    {"javax.xml.transform.stax", nullptr},
    {"javax.xml.transform.stream", nullptr},
    {"javax.xml.validation", nullptr},
    {"javax.xml.xpath", nullptr},
    {"org.w3c.dom", nullptr},
    {"org.w3c.dom.bootstrap", nullptr},
    {"org.w3c.dom.events", nullptr},
    {"org.w3c.dom.ls", nullptr},
    {"org.w3c.dom.ranges", nullptr},
    {"org.w3c.dom.traversal", nullptr},
    {"org.w3c.dom.views", nullptr},
    {"org.xml.sax", nullptr},
    {"org.xml.sax.ext", nullptr},
    {"org.xml.sax.helpers", nullptr},
    {"com.sun.org.apache.xml.internal.dtm", "java.xml.crypto"},
    {"com.sun.org.apache.xml.internal.utils", "java.xml.crypto"},
    {"com.sun.org.apache.xpath.internal", "java.xml.crypto"},
    {"com.sun.org.apache.xpath.internal.compiler", "java.xml.crypto"},
    {"com.sun.org.apache.xpath.internal.functions", "java.xml.crypto"},
    {"com.sun.org.apache.xpath.internal.objects", "java.xml.crypto"},
    {"com.sun.org.apache.xpath.internal.res", "java.xml.crypto"},
    {}
};

::java::lang::OpensDirective _java$xml_ModuleInfo_Opens_[] = {
    {}
};

::java::lang::UsesDirective _java$xml_ModuleInfo_Uses_[] = {
    {"javax.xml.datatype.DatatypeFactory"},
    {"javax.xml.parsers.DocumentBuilderFactory"},
    {"javax.xml.parsers.SAXParserFactory"},
    {"javax.xml.stream.XMLEventFactory"},
    {"javax.xml.stream.XMLInputFactory"},
    {"javax.xml.stream.XMLOutputFactory"},
    {"javax.xml.transform.TransformerFactory"},
    {"javax.xml.validation.SchemaFactory"},
    {"javax.xml.xpath.XPathFactory"},
    {"org.xml.sax.XMLReader"},
    {}
};

::java::lang::ProvidesDirective _java$xml_ModuleInfo_Provides_[] = {
    {}
};

::java::lang::ModuleInfo _java$xml_ModuleInfo_ = {
    "java.xml",
    false,
    _java$xml_ModuleInfo_Requires_,
    _java$xml_ModuleInfo_Exports_,
    _java$xml_ModuleInfo_Opens_,
    _java$xml_ModuleInfo_Uses_,
    _java$xml_ModuleInfo_Provides_
};