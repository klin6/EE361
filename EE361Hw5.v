module DirectionaLights(Y, clock, enable, dangerleft);
input clock;
input enable;
output [3:0] Y;
input dangerleft;
reg [3:0]Y;
always @(posedge clock)
	begin
	if(enable ==1)
		if (dangerleft==0)Y=4'b0001; 	//Y=4'b0010;Y=4'b0100;Y=4'b1000;
		else if(dangerleft==1)Y=4'b1000;	//Y=4'b0100; Y=4'b0010; Y=4'b0001;
	else if(enable==0)Y=4'b0000;
	end
endmodule
