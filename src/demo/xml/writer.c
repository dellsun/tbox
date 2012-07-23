/* ///////////////////////////////////////////////////////////////////////
 * includes
 */ 
#include "tbox.h"
#include <stdlib.h>

/* ///////////////////////////////////////////////////////////////////////
 * main
 */ 
tb_int_t main(tb_int_t argc, tb_char_t** argv)
{
	// init tbox
	if (!tb_init(malloc(10 * 1024 * 1024), 10 * 1024 * 1024)) return 0;

	// init stream
	tb_gstream_t* gst = tb_gstream_init_from_url(argv[1]);
	tb_gstream_ctrl(gst, TB_FSTREAM_CMD_SET_FLAGS, TB_FILE_WO | TB_FILE_CREAT | TB_FILE_TRUNC);
	if (gst && tb_gstream_bopen(gst))
	{
		tb_handle_t writer = tb_xml_writer_init(gst, TB_TRUE);
		if (writer)
		{
			tb_xml_writer_document(writer, "1.0", "utf-8");
			tb_xml_writer_comment(writer, "comments ...");
			tb_xml_writer_attributes_format(writer, "name", "hello %s", "world");
			tb_xml_writer_element_enter(writer, "labels");

				tb_xml_writer_attributes_long(writer, "id", 1);
				tb_xml_writer_attributes_cstr(writer, "label", "1");
				tb_xml_writer_element_enter(writer, "label_1");
				tb_xml_writer_text(writer, "characters");
				tb_xml_writer_element_leave(writer);

				tb_xml_writer_attributes_long(writer, "id", 2);
				tb_xml_writer_attributes_bool(writer, "bool", TB_TRUE);
				tb_xml_writer_element_enter(writer, "label_2");
				tb_xml_writer_text(writer, "characters");
				tb_xml_writer_element_leave(writer);

				tb_xml_writer_attributes_long(writer, "id", 3);
				tb_xml_writer_attributes_format(writer, "label", "%d", 3);
				tb_xml_writer_element_enter(writer, "label_3");
				tb_xml_writer_text(writer, "characters");

					tb_xml_writer_attributes_long(writer, "id", -4);
					tb_xml_writer_attributes_bool(writer, "bool", TB_FALSE);
					tb_xml_writer_element_empty(writer, "label_4");

					tb_xml_writer_element_empty(writer, "label_5");

				tb_xml_writer_element_leave(writer);
				tb_xml_writer_cdata(writer, "datas");

			tb_xml_writer_element_leave(writer);
			tb_xml_writer_exit(writer);
		}

		// exit stream
		tb_gstream_exit(gst);
	}
	
	// exit tbox
	tb_exit();
	return 0;
}
