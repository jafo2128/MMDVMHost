/*
*   Copyright (C) 2018 by Jonathan Naylor G4KLX
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software
*   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#if !defined(NXDNUDCH_H)
#define	NXDNUDCH_H

class CNXDNUDCH {
public:
	CNXDNUDCH(const CNXDNUDCH& udch);
	CNXDNUDCH();
	~CNXDNUDCH();

	bool decode(const unsigned char* data);

	void encode(unsigned char* data) const;

	unsigned char getRAN() const;

	void getData(unsigned char* data) const;
	void getRaw(unsigned char* data) const;

	void setRAN(unsigned char ran);

	void setData(const unsigned char* data);
	void setRaw(const unsigned char* data);

	CNXDNUDCH& operator=(const CNXDNUDCH& udch);

private:
	unsigned char* m_data;
};

#endif
